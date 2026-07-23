/*
 * XREFs of ExEnableHandleExceptions @ 0x1407DC294
 * Callers:
 *     PspApplyMitigationOptions @ 0x1406B3730 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 */

bool __fastcall ExEnableHandleExceptions(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v3; // rbp
  __int64 v6; // rcx
  char v7; // cl
  bool v8; // di
  int v10; // eax

  CurrentThread = KeGetCurrentThread();
  v3 = (volatile signed __int64 *)(a1 + 56);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v6 = *(_QWORD *)(a1 + 96);
  if ( v6 )
  {
    v10 = *(_DWORD *)(v6 + 8);
    if ( (v10 & 8) == 0 )
    {
      if ( a2 )
        *(_DWORD *)(v6 + 8) = v10 | 8;
      goto LABEL_4;
    }
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 44);
    if ( (v7 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 44) = v7 & 0xFD | (a2 != 0 ? 2 : 0);
LABEL_4:
      v8 = 1;
      goto LABEL_5;
    }
  }
  v8 = a2 != 0;
LABEL_5:
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v8;
}
