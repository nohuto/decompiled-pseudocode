/*
 * XREFs of NtChangeThreadState @ 0x1409AFF70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     PsMultiResumeThread @ 0x140309C58 (PsMultiResumeThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsSuspendThread @ 0x1407DBC10 (PsSuspendThread.c)
 */

NTSTATUS __cdecl NtChangeThreadState(
        HANDLE ThreadStateChangeHandle,
        HANDLE ThreadHandle,
        THREAD_STATE_CHANGE_TYPE StateChangeType,
        PVOID ExtendedInformation,
        SIZE_T ExtendedInformationLength,
        ULONG64 Reserved)
{
  NTSTATUS v8; // edi
  char PreviousMode; // bl
  int v10; // edx
  int v11; // eax
  PVOID v12; // rcx
  struct _KTHREAD *CurrentThread; // r12
  PVOID v14; // r14
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  PVOID v17; // [rsp+48h] [rbp-8h] BYREF

  Object = 0LL;
  v17 = 0LL;
  if ( (unsigned int)StateChangeType <= ThreadStateChangeResume )
  {
    if ( (_DWORD)ExtendedInformationLength )
      return -1073741820;
    if ( ExtendedInformation )
      return -1073741811;
  }
  if ( (_DWORD)Reserved )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = ObpReferenceObjectByHandleWithTag(
         (ULONG_PTR)ThreadStateChangeHandle,
         1,
         PspThreadStateChangeType,
         PreviousMode,
         0x63547350u,
         &v17,
         0LL,
         0LL);
  if ( v8 >= 0 )
  {
    v10 = 0;
    if ( (unsigned int)StateChangeType <= ThreadStateChangeResume )
      v10 = 2;
    v11 = ObpReferenceObjectByHandleWithTag(
            (ULONG_PTR)ThreadHandle,
            v10,
            (__int64)PsThreadType,
            PreviousMode,
            0x63547350u,
            &Object,
            0LL,
            0LL);
    v12 = Object;
    v8 = v11;
    if ( v11 >= 0 )
    {
      if ( *(PVOID *)v17 == Object )
      {
        CurrentThread = KeGetCurrentThread();
        v14 = v17;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v14 + 8, 0LL);
        if ( StateChangeType )
        {
          if ( StateChangeType == ThreadStateChangeResume )
          {
            if ( *((_DWORD *)v14 + 4) )
            {
              v8 = PsMultiResumeThread((__int64)Object, 0LL, 1u);
              if ( v8 >= 0 )
                --*((_DWORD *)v14 + 4);
            }
            else
            {
              v8 = -1073741811;
            }
          }
        }
        else if ( *((_DWORD *)v14 + 4) == 0x7FFFFFFF )
        {
          v8 = -1073741750;
        }
        else
        {
          v8 = PsSuspendThread((__int64)Object, 0LL);
          if ( v8 >= 0 )
            ++*((_DWORD *)v14 + 4);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v14 + 1);
        KeAbPostRelease((ULONG_PTR)v14 + 8);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v12 = Object;
      }
      else
      {
        v8 = -1073741811;
      }
    }
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x63547350u);
  }
  if ( v17 )
    ObfDereferenceObjectWithTag(v17, 0x63547350u);
  return v8;
}
