/*
 * XREFs of HalpIommuDeleteDevice @ 0x140908DD4
 * Callers:
 *     HalpIommuBlockDevice @ 0x14051A460 (HalpIommuBlockDevice.c)
 *     HalpIommuUnblockDevice @ 0x14051BA00 (HalpIommuUnblockDevice.c)
 *     IommuDomainAttachDevice @ 0x140527CF0 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x140528160 (IommuDomainDetachDevice.c)
 *     IommuDeviceCreate @ 0x1408459C0 (IommuDeviceCreate.c)
 *     IommuDeviceDelete @ 0x14090AA30 (IommuDeviceDelete.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IommupHvUnregisterDeviceId @ 0x140527CA8 (IommupHvUnregisterDeviceId.c)
 *     IidAreIdsStrictlyEqual @ 0x14064F634 (IidAreIdsStrictlyEqual.c)
 */

__int64 __fastcall HalpIommuDeleteDevice(__int64 *a1)
{
  unsigned int v2; // ebp
  char v3; // si
  __int64 v4; // rdi
  __int64 i; // r11
  __int64 v6; // r11
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // rcx

  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock, 0LL);
  for ( i = HalpIommuDeviceCreatedList; (__int64 *)i != &HalpIommuDeviceCreatedList; i = *(_QWORD *)v6 )
  {
    v4 = i;
    if ( IidAreIdsStrictlyEqual(*(int **)(i + 16), *a1) && (*(_DWORD *)(v6 + 32))-- == 1 )
    {
      v10 = *(_QWORD *)v6;
      if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (v11 = *(__int64 **)(v6 + 8), *v11 != v6) )
        __fastfail(3u);
      *v11 = v10;
      v3 = 1;
      *(_QWORD *)(v10 + 8) = v11;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&HalpIommuDeviceCreatedListPushLock);
  KeAbPostRelease((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock);
  if ( !v3 )
    return 0LL;
  if ( v4 )
  {
    v12 = *(_QWORD *)(v4 + 16);
    if ( v12 )
      HalpMmAllocCtxFree(v8, v12);
    HalpMmAllocCtxFree(v8, v4);
  }
  if ( HalpHvIommu )
    v2 = IommupHvUnregisterDeviceId();
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
  return v2;
}
