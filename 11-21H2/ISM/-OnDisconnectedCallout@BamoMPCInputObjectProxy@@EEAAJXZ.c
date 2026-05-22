/*
 * XREFs of ?OnDisconnectedCallout@BamoMPCInputObjectProxy@@EEAAJXZ @ 0x180110170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoMPCInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoMPCInputObjectProxyImpl@1@@Z @ 0x180103F18 (--0-$CalloutWrapper@VBamoMPCInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBam.c)
 *     ??1?$CalloutWrapper@VBamoMPCInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801058C8 (--1-$CalloutWrapper@VBamoMPCInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoMPCInputObjectProxy::OnDisconnectedCallout(BamoMPCInputObjectProxy *this)
{
  BamoMPCInputObjectProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoMPCInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoMPCInputObjectProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoMPCInputObjectProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoMPCInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoMPCInputObjectProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
