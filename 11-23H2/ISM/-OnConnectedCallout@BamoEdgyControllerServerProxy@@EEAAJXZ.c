/*
 * XREFs of ?OnConnectedCallout@BamoEdgyControllerServerProxy@@EEAAJXZ @ 0x180129540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoEdgyControllerServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoEdgyControllerServerProxyImpl@1@@Z @ 0x18011ECF4 (--0-$CalloutWrapper@VBamoEdgyControllerServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVB.c)
 *     ??1?$CalloutWrapper@VBamoEdgyControllerServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180120B60 (--1-$CalloutWrapper@VBamoEdgyControllerServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoEdgyControllerServerProxy::OnConnectedCallout(BamoEdgyControllerServerProxy *this)
{
  BamoEdgyControllerServerProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyControllerServerProxyImpl>::CalloutWrapper<BamoImpl::BamoEdgyControllerServerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoEdgyControllerServerProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyControllerServerProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyControllerServerProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
