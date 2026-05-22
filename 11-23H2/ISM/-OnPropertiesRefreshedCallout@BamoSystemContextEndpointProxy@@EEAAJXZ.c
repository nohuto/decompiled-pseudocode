/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoSystemContextEndpointProxy@@EEAAJXZ @ 0x180152090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSystemContextEndpointProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemContextEndpointProxyImpl@1@@Z @ 0x18015198C (--0-$CalloutWrapper@VBamoSystemContextEndpointProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAV.c)
 *     ??1?$CalloutWrapper@VBamoSystemContextEndpointProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180151AFC (--1-$CalloutWrapper@VBamoSystemContextEndpointProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoSystemContextEndpointProxy::OnPropertiesRefreshedCallout(BamoSystemContextEndpointProxy *this)
{
  BamoSystemContextEndpointProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextEndpointProxyImpl>::CalloutWrapper<BamoImpl::BamoSystemContextEndpointProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoSystemContextEndpointProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextEndpointProxyImpl>::~CalloutWrapper<BamoImpl::BamoSystemContextEndpointProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
