/*
 * XREFs of ?OnDisconnectedCallout@BamoSystemContextManagerProxy@@EEAAJXZ @ 0x180110410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSystemContextManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemContextManagerProxyImpl@1@@Z @ 0x180104500 (--0-$CalloutWrapper@VBamoSystemContextManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVB.c)
 *     ??1?$CalloutWrapper@VBamoSystemContextManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180105BB0 (--1-$CalloutWrapper@VBamoSystemContextManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoSystemContextManagerProxy::OnDisconnectedCallout(BamoSystemContextManagerProxy *this)
{
  BamoSystemContextManagerProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextManagerProxyImpl>::CalloutWrapper<BamoImpl::BamoSystemContextManagerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoSystemContextManagerProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextManagerProxyImpl>::~CalloutWrapper<BamoImpl::BamoSystemContextManagerProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
