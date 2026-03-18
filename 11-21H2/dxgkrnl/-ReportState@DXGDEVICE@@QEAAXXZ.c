/*
 * XREFs of ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C02E71E8
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C4420 (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x1C004C4F8 (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C02E22B0 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C02E6E80 (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C02E708C (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C02E7148 (-ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::ReportState(DXGDEVICE *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  DXGCONTEXT *i; // rbx
  struct DXGALLOCATION *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE v9[8]; // [rsp+70h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+80h] [rbp-18h]

  if ( bTracingEnabled )
  {
    a2 = *((_QWORD *)this + 5);
    a3 = *((_QWORD *)this + 14);
    v4 = *((unsigned __int8 *)this + 1866);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      McTemplateK0ppqpttqpqp_EtwWriteTransfer(
        v4,
        &EventReportDevice,
        a3,
        *(_QWORD *)(*(_QWORD *)(a2 + 64) + 80LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
  }
  for ( i = (DXGCONTEXT *)*((_QWORD *)this + 58); i != (DXGDEVICE *)((char *)this + 464) && i; i = *(DXGCONTEXT **)i )
    DXGCONTEXT::ReportState(i, a2, a3);
  if ( *((_QWORD *)this + 95) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 64LL))();
  if ( *((_QWORD *)this + 96) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL) + 8LL) + 128LL))();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (struct _KTHREAD **)this + 26, 0);
  DXGPUSHLOCK::AcquireExclusive(v10);
  v6 = (struct DXGALLOCATION *)*((_QWORD *)this + 6);
  v11 = 2;
  while ( v6 )
  {
    DXGDEVICE::ReportAllocationState(this, v6, 1);
    v6 = (struct DXGALLOCATION *)*((_QWORD *)v6 + 8);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  DXGDEVICE::ReportDeviceResources((struct _KTHREAD **)this);
  DXGDEVICE::ReportDeviceSyncObjects(this);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_TrackedWorkload__private_reporting,
    0xC3EBFFu,
    v7,
    v8,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
    0);
  if ( (*((_BYTE *)this + 1869) & 1) == 0 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 776));
    (*(void (__fastcall **)(DXGDEVICE *, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 728LL))(
      this,
      (char *)this + 808);
    *((_QWORD *)this + 98) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 776, 0LL);
    KeLeaveCriticalRegion();
  }
}
