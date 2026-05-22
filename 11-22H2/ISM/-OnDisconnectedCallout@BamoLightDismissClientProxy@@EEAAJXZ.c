/*
 * XREFs of ?OnDisconnectedCallout@BamoLightDismissClientProxy@@EEAAJXZ @ 0x18017FE70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoLightDismissClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoLightDismissClientProxyImpl@1@@Z @ 0x18017FA78 (--0-$CalloutWrapper@VBamoLightDismissClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBas.c)
 *     ??1?$CalloutWrapper@VBamoLightDismissClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18017FB74 (--1-$CalloutWrapper@VBamoLightDismissClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoLightDismissClientProxy::OnDisconnectedCallout(BamoLightDismissClientProxy *this)
{
  BamoLightDismissClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoLightDismissClientProxyImpl>::CalloutWrapper<BamoImpl::BamoLightDismissClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoLightDismissClientProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoLightDismissClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoLightDismissClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
