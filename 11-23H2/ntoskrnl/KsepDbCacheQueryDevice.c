/*
 * XREFs of KsepDbCacheQueryDevice @ 0x1408086F4
 * Callers:
 *     KseQueryDeviceData @ 0x1408082D0 (KseQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KsepCacheLookup @ 0x140693A74 (KsepCacheLookup.c)
 *     KsepDbCacheQueryDeviceData @ 0x140808E08 (KsepDbCacheQueryDeviceData.c)
 */

__int64 __fastcall KsepDbCacheQueryDevice(PCWSTR SourceString, int a2, int a3, int a4, void *a5)
{
  unsigned int DeviceData; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rcx
  _QWORD *v12; // rax
  volatile signed __int64 *v13; // rdi
  _QWORD v15[10]; // [rsp+30h] [rbp-58h] BYREF

  DeviceData = -1073741275;
  memset(v15, 0, 0x44uLL);
  RtlInitUnicodeString((PUNICODE_STRING)&v15[5], SourceString);
  CurrentThread = KeGetCurrentThread();
  v11 = qword_140C64D78;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v11, 0LL);
  v12 = KsepCacheLookup(qword_140C64D78, (__int64)v15);
  if ( v12 )
    DeviceData = KsepDbCacheQueryDeviceData((int)v12, a2, a3, a4, a5);
  v13 = (volatile signed __int64 *)qword_140C64D78;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C64D78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v13);
  KeAbPostRelease((ULONG_PTR)v13);
  KeLeaveCriticalRegion();
  return DeviceData;
}
