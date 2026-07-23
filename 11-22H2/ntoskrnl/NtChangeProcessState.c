/*
 * XREFs of NtChangeProcessState @ 0x1409AFD70
 * Callers:
 *     <none>
 * Callees:
 *     PsThawMultiProcess @ 0x1402044E4 (PsThawMultiProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsFreezeProcess @ 0x1407EC200 (PsFreezeProcess.c)
 */

NTSTATUS __cdecl NtChangeProcessState(
        HANDLE ProcessStateChangeHandle,
        HANDLE ProcessHandle,
        PROCESS_STATE_CHANGE_TYPE StateChangeType,
        PVOID ExtendedInformation,
        SIZE_T ExtendedInformationLength,
        ULONG64 Reserved)
{
  NTSTATUS v8; // edi
  char PreviousMode; // bl
  int v10; // edx
  int v11; // eax
  PVOID v12; // rcx
  struct _KTHREAD *CurrentThread; // r15
  char *v14; // rdi
  volatile signed __int64 *v15; // r14
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  PVOID v18; // [rsp+48h] [rbp-8h] BYREF

  Object = 0LL;
  v18 = 0LL;
  if ( (unsigned int)StateChangeType >= ProcessStateChangeMax )
    return -1073741821;
  if ( (_DWORD)ExtendedInformationLength )
    return -1073741820;
  if ( ExtendedInformation || (_DWORD)Reserved )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = ObpReferenceObjectByHandleWithTag(
         (ULONG_PTR)ProcessStateChangeHandle,
         1,
         PspProcessStateChangeType,
         PreviousMode,
         0x63507350u,
         &v18,
         0LL,
         0LL);
  if ( v8 >= 0 )
  {
    v10 = 0;
    if ( (unsigned int)StateChangeType <= ProcessStateChangeResume )
      v10 = 2048;
    v11 = ObpReferenceObjectByHandleWithTag(
            (ULONG_PTR)ProcessHandle,
            v10,
            (__int64)PsProcessType,
            PreviousMode,
            0x63507350u,
            &Object,
            0LL,
            0LL);
    v12 = Object;
    v8 = v11;
    if ( v11 < 0 )
      goto LABEL_28;
    if ( *(PVOID *)v18 != Object )
    {
      v8 = -1073741811;
LABEL_28:
      if ( v12 )
        ObfDereferenceObjectWithTag(v12, 0x63507350u);
      goto LABEL_30;
    }
    CurrentThread = KeGetCurrentThread();
    v14 = (char *)v18;
    --CurrentThread->KernelApcDisable;
    v15 = (volatile signed __int64 *)(v14 + 8);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 8), 0LL);
    if ( StateChangeType )
    {
      if ( StateChangeType == ProcessStateChangeResume )
      {
        if ( !*((_DWORD *)v14 + 4) )
        {
          v8 = -1073741811;
LABEL_25:
          if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v15);
          KeAbPostRelease((ULONG_PTR)v15);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          v12 = Object;
          goto LABEL_28;
        }
        PsThawMultiProcess((ULONG_PTR)Object, 0LL, 1u);
        --*((_DWORD *)v14 + 4);
      }
    }
    else
    {
      if ( *((_DWORD *)v14 + 4) == -1 )
      {
        v8 = -1073741750;
        goto LABEL_25;
      }
      if ( !PsFreezeProcess((__int64)Object, 0) )
      {
        v8 = -1073741558;
        goto LABEL_25;
      }
      ++*((_DWORD *)v14 + 4);
    }
    v8 = 0;
    goto LABEL_25;
  }
LABEL_30:
  if ( v18 )
    ObfDereferenceObjectWithTag(v18, 0x63507350u);
  return v8;
}
