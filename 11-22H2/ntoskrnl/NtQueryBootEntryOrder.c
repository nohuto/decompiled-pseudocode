/*
 * XREFs of NtQueryBootEntryOrder @ 0x14083F3D0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x140206EC4 (ExUnlockUserBuffer.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x1403025F0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x140302660 (ExAcquireFastMutexUnsafe.c)
 *     IoGetEnvironmentVariableEx @ 0x1406876A0 (IoGetEnvironmentVariableEx.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __cdecl NtQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v5; // rcx
  ULONG v6; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *v8; // rax
  NTSTATUS EnvironmentVariable; // ebx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  unsigned __int16 *v12; // r9
  _DWORD *i; // r10
  unsigned int v14; // eax
  __int64 v15; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-10h]
  ULONG v18; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0LL;
  v18 = 0;
  P = 0LL;
  if ( dword_140C31AF0 != 2 )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Count < 0x7FFFFFFF0000LL )
      v5 = (__int64)Count;
    *(_DWORD *)v5 = *(_DWORD *)v5;
    v6 = 4 * *Count;
    v18 = v6;
    if ( !Ids )
    {
      v18 = 0;
      v6 = 0;
    }
    if ( v6 )
      ProbeForWrite(Ids, v6, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v18 = Ids != 0LL ? 4 * *Count : 0;
  }
  if ( !v18
    || (result = ExLockUserBuffer((unsigned __int64)Ids, v18, PreviousMode, IoWriteAccess, &v15, (struct _MDL **)&P),
        result >= 0) )
  {
    v18 >>= 1;
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            (const size_t *)L"BootOrder",
                            (__int64)&EfiBootVariablesGuid,
                            v15,
                            (int *)&v18,
                            0LL);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( EnvironmentVariable < 0 )
    {
      if ( EnvironmentVariable == -1073741568 )
      {
        v18 = 0;
        EnvironmentVariable = 0;
      }
    }
    else
    {
      v10 = v18 >> 1;
      v11 = (v18 >> 1) - 1;
      v12 = (unsigned __int16 *)(v15 + 2 * v11);
      for ( i = (_DWORD *)(v15 + 4 * v11); v10; --v10 )
        *i-- = *v12--;
    }
    v14 = 2 * v18;
    v18 *= 2;
    if ( P )
    {
      ExUnlockUserBuffer((struct _MDL *)P);
      v14 = v18;
    }
    *Count = v14 >> 2;
    return EnvironmentVariable;
  }
  return result;
}
