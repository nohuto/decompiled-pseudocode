/*
 * XREFs of ?OnConnectedCallout@BamoLightDismissClientProxy@@EEAAJXZ @ 0x180171FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoLightDismissClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoLightDismissClientProxyImpl@1@@Z @ 0x180171C68 (--0-$CalloutWrapper@VBamoLightDismissClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBas.c)
 *     ??1?$CalloutWrapper@VBamoLightDismissClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180171D64 (--1-$CalloutWrapper@VBamoLightDismissClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoLightDismissClientProxy::OnConnectedCallout(BamoLightDismissClientProxy *this)
{
  BamoLightDismissClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoLightDismissClientProxyImpl>::CalloutWrapper<BamoImpl::BamoLightDismissClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoLightDismissClientProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoLightDismissClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoLightDismissClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
