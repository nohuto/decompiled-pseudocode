/*
 * XREFs of KseQueryDeviceDataList @ 0x140963440
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x1409F6464 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KsepShimDbChanged @ 0x140368A88 (KsepShimDbChanged.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KsepCacheLookup @ 0x1407EC9DC (KsepCacheLookup.c)
 *     KsepDbCacheReadDevice @ 0x1407ED450 (KsepDbCacheReadDevice.c)
 *     KsepDbCacheInsertDevice @ 0x14085E788 (KsepDbCacheInsertDevice.c)
 *     KseResetDeviceCache @ 0x1409635EC (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDeviceDataList @ 0x1409637DC (KsepDbCacheQueryDeviceDataList.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140963B40 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepCacheDeviceFree @ 0x140965070 (KsepCacheDeviceFree.c)
 */

__int64 __fastcall KseQueryDeviceDataList(WCHAR *SourceString, __int64 a2, unsigned int a3, __int64 a4)
{
  int RegistryDeviceDataList; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rcx
  _QWORD *v11; // rax
  ULONG_PTR v12; // rsi
  __int64 v13; // rbx
  _QWORD *v15; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v16[10]; // [rsp+30h] [rbp-68h] BYREF

  memset(v16, 0, 0x44uLL);
  v15 = 0LL;
  if ( dword_140C54EF4 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !SourceString || !a4 )
    return (unsigned int)-1073741811;
  RegistryDeviceDataList = KsepDbQueryRegistryDeviceDataList(SourceString, a2, a3, a4);
  if ( RegistryDeviceDataList == -1073741275 )
  {
    if ( (unsigned int)KsepShimDbChanged() )
    {
      KseResetDeviceCache();
LABEL_13:
      RegistryDeviceDataList = KsepDbCacheReadDevice(SourceString, &v15);
      if ( RegistryDeviceDataList >= 0 )
      {
        v13 = (__int64)v15;
        RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v15, a2, a3, a4);
        if ( (int)KsepDbCacheInsertDevice(SourceString, v13) < 0 )
          KsepCacheDeviceFree(v13);
      }
      return (unsigned int)RegistryDeviceDataList;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&v16[5], SourceString);
    CurrentThread = KeGetCurrentThread();
    v10 = qword_140C54F38;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    v11 = KsepCacheLookup(qword_140C54F38, (__int64)v16);
    v15 = v11;
    if ( v11 )
      RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v11, a2, a3, a4);
    v12 = qword_140C54F38;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C54F38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease(v12);
    KeLeaveCriticalRegion();
    if ( !v15 )
      goto LABEL_13;
  }
  return (unsigned int)RegistryDeviceDataList;
}
