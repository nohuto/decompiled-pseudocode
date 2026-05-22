/*
 * XREFs of ?OnConnectedCallout@BamoInputDeliveryServerProxy@@EEAAJXZ @ 0x180129770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputDeliveryServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputDeliveryServerProxyImpl@1@@Z @ 0x18011F1E0 (--0-$CalloutWrapper@VBamoInputDeliveryServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBa.c)
 *     ??1?$CalloutWrapper@VBamoInputDeliveryServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180120DCC (--1-$CalloutWrapper@VBamoInputDeliveryServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoInputDeliveryServerProxy::OnConnectedCallout(BamoInputDeliveryServerProxy *this)
{
  BamoInputDeliveryServerProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputDeliveryServerProxyImpl>::CalloutWrapper<BamoImpl::BamoInputDeliveryServerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoInputDeliveryServerProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputDeliveryServerProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputDeliveryServerProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
