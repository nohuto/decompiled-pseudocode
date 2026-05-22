/*
 * XREFs of ?OnDisconnectedCallout@BamoMagnifierControllerProxy@@EEAAJXZ @ 0x18014DBA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoMagnifierControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoMagnifierControllerProxyImpl@1@@Z @ 0x18014D8E8 (--0-$CalloutWrapper@VBamoMagnifierControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBa.c)
 *     ??1?$CalloutWrapper@VBamoMagnifierControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18014D9E4 (--1-$CalloutWrapper@VBamoMagnifierControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoMagnifierControllerProxy::OnDisconnectedCallout(BamoMagnifierControllerProxy *this)
{
  BamoMagnifierControllerProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoMagnifierControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoMagnifierControllerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoMagnifierControllerProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoMagnifierControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoMagnifierControllerProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
