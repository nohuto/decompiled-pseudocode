/*
 * XREFs of HalpIommuDeleteDevice @ 0x1409339FC
 * Callers:
 *     HalpIommuBlockDevice @ 0x1405178F0 (HalpIommuBlockDevice.c)
 *     HalpIommuUnblockDevice @ 0x140518860 (HalpIommuUnblockDevice.c)
 *     IommuCreateAtsDevice @ 0x140521D50 (IommuCreateAtsDevice.c)
 *     IommuDeleteAtsDevice @ 0x140521F60 (IommuDeleteAtsDevice.c)
 *     IommuMapDevice @ 0x1405230F0 (IommuMapDevice.c)
 *     IommuUnmapDevice @ 0x140523B50 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x140525740 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x140525C50 (IommuDomainDetachDevice.c)
 *     IommuDeviceCreate @ 0x140829000 (IommuDeviceCreate.c)
 *     IommuDeviceDelete @ 0x140935540 (IommuDeviceDelete.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x1403A4F60 (HalpMmAllocCtxFree.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     IommupHvUnregisterDeviceId @ 0x14052565C (IommupHvUnregisterDeviceId.c)
 *     IidAreIdsStrictlyEqual @ 0x140673DAC (IidAreIdsStrictlyEqual.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x140933B50 (IommupDeviceDisablePasidTaggedDma.c)
 */

__int64 __fastcall HalpIommuDeleteDevice(__int64 *a1)
{
  char v2; // si
  __int64 v3; // rdi
  __int64 i; // r11
  __int64 v5; // r11
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // rcx
  void *v14; // rcx

  v2 = 0;
  v3 = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock, 0LL);
  for ( i = HalpIommuDeviceCreatedList; (__int64 *)i != &HalpIommuDeviceCreatedList; i = *(_QWORD *)v5 )
  {
    v3 = i;
    if ( IidAreIdsStrictlyEqual(*(int **)(i + 16), *a1) && (*(_DWORD *)(v5 + 32))-- == 1 )
    {
      v9 = *(_QWORD *)v5;
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v10 = *(__int64 **)(v5 + 8), *v10 != v5) )
        __fastfail(3u);
      *v10 = v9;
      v2 = 1;
      *(_QWORD *)(v9 + 8) = v10;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock);
  KeAbPostRelease((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock);
  if ( !v2 )
    return 0LL;
  if ( v3 )
  {
    v11 = *(_QWORD *)(v3 + 16);
    if ( v11 )
      HalpMmAllocCtxFree(v7, v11);
    HalpMmAllocCtxFree(v7, v3);
  }
  v12 = IommupDeviceDisablePasidTaggedDma(a1);
  if ( HalpHvIommu )
    v12 = IommupHvUnregisterDeviceId();
  else
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(a1[4] + 96))(*(_QWORD *)(a1[4] + 16), a1[5], 0LL);
  if ( *a1 )
    HalpMmAllocCtxFree(v13, *a1);
  v14 = (void *)a1[1];
  if ( v14 )
  {
    ObfDereferenceObjectWithTag(v14, 0x446C6148u);
    a1[1] = 0LL;
  }
  HalpMmAllocCtxFree((__int64)v14, (__int64)a1);
  return v12;
}
