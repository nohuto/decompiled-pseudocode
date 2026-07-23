/*
 * XREFs of NtEnumerateSystemEnvironmentValuesEx @ 0x1409FF130
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x140206EC4 (ExUnlockUserBuffer.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x1403025F0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x140302660 (ExAcquireFastMutexUnsafe.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x1408407B0 (IoEnumerateEnvironmentVariablesEx.c)
 */

NTSTATUS __cdecl NtEnumerateSystemEnvironmentValuesEx(ULONG InformationClass, PVOID Buffer, PULONG BufferLength)
{
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v8; // rcx
  ULONG v9; // eax
  struct _KTHREAD *v10; // rax
  NTSTATUS v11; // ebx
  ULONG v12; // [rsp+34h] [rbp-34h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-10h]

  v13 = 0LL;
  v12 = 0;
  P = 0LL;
  if ( dword_140C31AF0 != 2 )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BufferLength < 0x7FFFFFFF0000LL )
      v8 = (__int64)BufferLength;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    v9 = *BufferLength;
    v12 = *BufferLength;
    if ( !Buffer )
    {
      v12 = 0;
      v9 = 0;
    }
    if ( v9 )
      ProbeForWrite(Buffer, v9, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v12 = Buffer != 0LL ? *BufferLength : 0;
  }
  if ( !v12
    || (result = ExLockUserBuffer((unsigned __int64)Buffer, v12, PreviousMode, IoWriteAccess, &v13, (struct _MDL **)&P),
        result >= 0) )
  {
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v11 = IoEnumerateEnvironmentVariablesEx(InformationClass, 0LL, v13, &v12);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( P )
      ExUnlockUserBuffer((struct _MDL *)P);
    *BufferLength = v12;
    return v11;
  }
  return result;
}
