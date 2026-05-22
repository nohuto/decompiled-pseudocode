/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoInputDeliveryServerProxy@@EEAAJXZ @ 0x18013B3E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputDeliveryServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputDeliveryServerProxyImpl@1@@Z @ 0x18012D1D0 (--0-$CalloutWrapper@VBamoInputDeliveryServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBa.c)
 *     ??1?$CalloutWrapper@VBamoInputDeliveryServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012EDBC (--1-$CalloutWrapper@VBamoInputDeliveryServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoInputDeliveryServerProxy::OnPropertiesRefreshedCallout(BamoInputDeliveryServerProxy *this)
{
  BamoInputDeliveryServerProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputDeliveryServerProxyImpl>::CalloutWrapper<BamoImpl::BamoInputDeliveryServerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoInputDeliveryServerProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputDeliveryServerProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputDeliveryServerProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
