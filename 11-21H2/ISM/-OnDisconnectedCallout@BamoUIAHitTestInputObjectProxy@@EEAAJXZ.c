/*
 * XREFs of ?OnDisconnectedCallout@BamoUIAHitTestInputObjectProxy@@EEAAJXZ @ 0x1801105D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoUIAHitTestInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoUIAHitTestInputObjectProxyImpl@1@@Z @ 0x1801048F0 (--0-$CalloutWrapper@VBamoUIAHitTestInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAV.c)
 *     ??1?$CalloutWrapper@VBamoUIAHitTestInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180105DA0 (--1-$CalloutWrapper@VBamoUIAHitTestInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoUIAHitTestInputObjectProxy::OnDisconnectedCallout(BamoUIAHitTestInputObjectProxy *this)
{
  BamoUIAHitTestInputObjectProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoUIAHitTestInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoUIAHitTestInputObjectProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoUIAHitTestInputObjectProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoUIAHitTestInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoUIAHitTestInputObjectProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
