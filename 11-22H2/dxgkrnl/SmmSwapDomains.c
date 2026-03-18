/*
 * XREFs of SmmSwapDomains @ 0x1C03D5F50
 * Callers:
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x1C03D5A00 (SmmIommuSwitchToGpuVaIoMmu.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D5C28 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIommuSwitchToTranslation @ 0x1C03D5CE4 (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     SmmAttachDomainToAllDevices @ 0x1C03D5640 (SmmAttachDomainToAllDevices.c)
 *     SmmDetachDomainFromAllDevices @ 0x1C03D57B4 (SmmDetachDomainFromAllDevices.c)
 */

__int64 __fastcall SmmSwapDomains(__int64 a1, struct _IOMMU_DMA_DOMAIN *a2, struct _IOMMU_DMA_DOMAIN *a3)
{
  int v6; // edi
  int v7; // eax

  if ( *(_QWORD *)(a1 + 352) )
    (*(void (**)(void))(a1 + 336))();
  if ( a3 )
    SmmDetachDomainFromAllDevices(a1, a3);
  v6 = SmmAttachDomainToAllDevices(a1, a2);
  if ( v6 < 0 )
  {
    if ( a3 )
    {
      v7 = SmmAttachDomainToAllDevices(a1, a3);
      v6 = v7;
      if ( v7 < 0 )
        WdLogSingleEntry5(0LL, 484LL, 10LL, a1, a2, v7);
    }
    WdLogSingleEntry3(3LL, a1, *(_QWORD *)(a1 + 112), v6);
  }
  if ( *(_QWORD *)(a1 + 352) )
    (*(void (__fastcall **)(__int64))(a1 + 344))(a1);
  return (unsigned int)v6;
}
