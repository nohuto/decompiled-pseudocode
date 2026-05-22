/*
 * XREFs of ?OnConnectedCallout@BamoEdgyControllerClientProxy@@EEAAJXZ @ 0x18016AE20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoEdgyControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoEdgyControllerClientProxyImpl@1@@Z @ 0x18016A62C (--0-$CalloutWrapper@VBamoEdgyControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVB.c)
 *     ??1?$CalloutWrapper@VBamoEdgyControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18016A838 (--1-$CalloutWrapper@VBamoEdgyControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoEdgyControllerClientProxy::OnConnectedCallout(BamoEdgyControllerClientProxy *this)
{
  BamoEdgyControllerClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyControllerClientProxyImpl>::CalloutWrapper<BamoImpl::BamoEdgyControllerClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoEdgyControllerClientProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyControllerClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyControllerClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
