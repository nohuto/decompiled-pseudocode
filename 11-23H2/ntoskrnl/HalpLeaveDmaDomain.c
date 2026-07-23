/*
 * XREFs of HalpLeaveDmaDomain @ 0x1405132A4
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x1405116C0 (HalpDmaFreeChildAdapter.c)
 *     HalLeaveDmaDomain @ 0x1405128D0 (HalLeaveDmaDomain.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     HalpDmaDereferenceDomainObject @ 0x140512CF8 (HalpDmaDereferenceDomainObject.c)
 */

__int64 __fastcall HalpLeaveDmaDomain(__int64 a1)
{
  __int64 v1; // rbp
  volatile signed __int64 *v3; // rbx
  int v4; // esi

  v1 = *(_QWORD *)(a1 + 512);
  if ( !*(_DWORD *)(v1 + 48) )
  {
LABEL_12:
    HalpDmaDereferenceDomainObject((__int64 *)v1);
    *(_QWORD *)(a1 + 512) = 0LL;
    return 0;
  }
  v3 = (volatile signed __int64 *)(a1 + 320);
  ExAcquirePushLockExclusiveEx(a1 + 320, 0LL);
  if ( *(_BYTE *)(a1 + 346) )
  {
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    goto LABEL_10;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(HalpDmaIommuInterfaceFcnTable + 24))(*(_QWORD *)(a1 + 544));
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  if ( v4 >= 0 )
  {
LABEL_10:
    if ( *(_DWORD *)(v1 + 48) == 3 )
      (*(void (__fastcall **)(_QWORD))(HalpDmaIommuInterfaceFcnTable + 136))(*(_QWORD *)(a1 + 560));
    goto LABEL_12;
  }
  return (unsigned int)v4;
}
