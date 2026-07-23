/*
 * XREFs of KsepDbCacheInsertDevice @ 0x14085DFF8
 * Callers:
 *     KseQueryDeviceData @ 0x1408082D0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140976B00 (KseQueryDeviceDataList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KsepCacheLookup @ 0x140693A74 (KsepCacheLookup.c)
 *     KsepCacheInsert @ 0x140695124 (KsepCacheInsert.c)
 */

__int64 __fastcall KsepDbCacheInsertDevice(PCWSTR SourceString, __int64 a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rcx
  volatile signed __int64 *v7; // rdi
  _QWORD v9[10]; // [rsp+20h] [rbp-58h] BYREF

  v4 = -1073741811;
  memset(v9, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  v6 = qword_140C64D78;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  RtlInitUnicodeString((PUNICODE_STRING)&v9[5], SourceString);
  if ( !KsepCacheLookup(qword_140C64D78, (__int64)v9) )
  {
    KsepCacheInsert(qword_140C64D78, a2);
    v4 = 0;
  }
  v7 = (volatile signed __int64 *)qword_140C64D78;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C64D78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
  return v4;
}
