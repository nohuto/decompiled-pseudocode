/*
 * XREFs of HalpIommuDeleteDevice @ 0x140933A2C
 * Callers:
 *     HalpIommuBlockDevice @ 0x140517830 (HalpIommuBlockDevice.c)
 *     HalpIommuUnblockDevice @ 0x1405187A0 (HalpIommuUnblockDevice.c)
 *     IommuCreateAtsDevice @ 0x140521C90 (IommuCreateAtsDevice.c)
 *     IommuDeleteAtsDevice @ 0x140521EA0 (IommuDeleteAtsDevice.c)
 *     IommuMapDevice @ 0x140523030 (IommuMapDevice.c)
 *     IommuUnmapDevice @ 0x140523A90 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x140525680 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x140525B90 (IommuDomainDetachDevice.c)
 *     IommuDeviceCreate @ 0x1408274B0 (IommuDeviceCreate.c)
 *     IommuDeviceDelete @ 0x140935490 (IommuDeviceDelete.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x1403A56C0 (HalpMmAllocCtxFree.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     IommupHvUnregisterDeviceId @ 0x14052559C (IommupHvUnregisterDeviceId.c)
 *     IidAreIdsStrictlyEqual @ 0x140673D3C (IidAreIdsStrictlyEqual.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x140933B80 (IommupDeviceDisablePasidTaggedDma.c)
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
