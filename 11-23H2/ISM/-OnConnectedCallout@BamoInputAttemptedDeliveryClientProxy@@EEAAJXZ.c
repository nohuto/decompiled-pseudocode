/*
 * XREFs of ?OnConnectedCallout@BamoInputAttemptedDeliveryClientProxy@@EEAAJXZ @ 0x180172C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputAttemptedDeliveryClientProxyImpl@1@@Z @ 0x180172788 (--0-$CalloutWrapper@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ??1?$CalloutWrapper@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801728DC (--1-$CalloutWrapper@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoInputAttemptedDeliveryClientProxy::OnConnectedCallout(
        BamoInputAttemptedDeliveryClientProxy *this)
{
  BamoInputAttemptedDeliveryClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl>::CalloutWrapper<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoInputAttemptedDeliveryClientProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
