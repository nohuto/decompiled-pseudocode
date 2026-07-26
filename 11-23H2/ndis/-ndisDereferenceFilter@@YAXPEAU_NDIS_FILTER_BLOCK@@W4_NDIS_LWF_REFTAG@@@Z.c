/*
 * XREFs of ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C00151F4
 * Callers:
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015958 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0066A40 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1C00924B4 (-ndisPktMonRegisterAllFilters@@YAXXZ.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0147F18 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ??1_NDIS_FILTER_BLOCK@@QEAA@XZ @ 0x1C0015614 (--1_NDIS_FILTER_BLOCK@@QEAA@XZ.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001F3B0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     NdisNblTrackerDeregisterComponent @ 0x1C0021770 (NdisNblTrackerDeregisterComponent.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C00246EC (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisDeinitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@@Z @ 0x1C010FCBC (-ndisDeinitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@@Z.c)
 */

void __fastcall ndisDereferenceFilter(_NDIS_FILTER_BLOCK *this, unsigned __int8 a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rsi
  KIRQL v4; // al
  _NDIS_FILTER_BLOCK *v5; // rcx
  _NDIS_FILTER_BLOCK **p_NextGlobalFilter; // rdx
  KIRQL v7; // r8
  _NDIS_FILTER_BLOCK **i; // rdx
  _NDIS_FILTER_BLOCK *v9; // rcx
  _NDIS_FILTER_TASK_OFFLOAD *Offload; // rcx
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCapabilities; // rcx
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCurrentConfig; // rcx
  _UNICODE_STRING *FilterFriendlyName; // rcx
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *IterativeDataPathTracker; // rcx
  struct _VF_NDIS_DISPATCH_TABLE *v15; // rax
  unsigned __int8 v16; // dl

  if ( ndisDereferenceRef(&this->Ref.SpinLock, a2) )
  {
    FilterDriver = this->FilterDriver;
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    v5 = ndisGlobalFilterList;
    p_NextGlobalFilter = &ndisGlobalFilterList;
    while ( v5 )
    {
      if ( v5 == this )
      {
        *p_NextGlobalFilter = this->NextGlobalFilter;
        break;
      }
      p_NextGlobalFilter = &v5->NextGlobalFilter;
      v5 = v5->NextGlobalFilter;
    }
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v4);
    v7 = KeAcquireSpinLockRaiseToDpc(&FilterDriver->Lock);
    for ( i = &FilterDriver->FilterQueue; ; i = &v9->NextFilter )
    {
      v9 = *i;
      if ( !*i )
        break;
      if ( v9 == this )
      {
        *i = this->NextFilter;
        break;
      }
    }
    KeReleaseSpinLock(&FilterDriver->Lock, v7);
    Offload = this->Offload;
    if ( Offload )
    {
      ExFreePoolWithTag(Offload, 0);
      this->Offload = 0LL;
    }
    HwTimestampCapabilities = this->HwTimestampCapabilities;
    if ( HwTimestampCapabilities )
    {
      ExFreePoolWithTag(HwTimestampCapabilities, 0);
      this->HwTimestampCapabilities = 0LL;
    }
    HwTimestampCurrentConfig = this->HwTimestampCurrentConfig;
    if ( HwTimestampCurrentConfig )
    {
      ExFreePoolWithTag(HwTimestampCurrentConfig, 0);
      this->HwTimestampCurrentConfig = 0LL;
    }
    ndisDeinitializeZeroBasedRef(&this->PnPRef);
    NdisNblTrackerDeregisterComponent(this->NblTracker);
    FilterFriendlyName = this->FilterFriendlyName;
    this->NblTracker = 0LL;
    if ( FilterFriendlyName )
    {
      ExFreePoolWithTag(FilterFriendlyName, 0);
      this->FilterFriendlyName = 0LL;
    }
    IterativeDataPathTracker = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)this->IterativeDataPathTracker;
    if ( IterativeDataPathTracker )
    {
      ExFreePoolWithTag(IterativeDataPathTracker, 0);
      this->IterativeDataPathTracker = 0LL;
    }
    v15 = ndisVerifierNdisDispatch;
    this->Header.Type = 0;
    if ( v15 )
    {
      if ( this->VerifierContext )
      {
        (*((void (**)(void))v15 + 2))();
        this->VerifierContext = 0LL;
      }
    }
    _NDIS_FILTER_BLOCK::~_NDIS_FILTER_BLOCK(this);
    ExFreePoolWithTag(this, 0);
    ndisDereferenceFilterDriver(FilterDriver, v16, LWFDRV_FILTERMODULE);
  }
}
