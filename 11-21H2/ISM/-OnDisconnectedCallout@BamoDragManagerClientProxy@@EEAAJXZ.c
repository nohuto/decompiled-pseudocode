/*
 * XREFs of ?OnDisconnectedCallout@BamoDragManagerClientProxy@@EEAAJXZ @ 0x18010FA70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoDragManagerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDragManagerClientProxyImpl@1@@Z @ 0x180102F58 (--0-$CalloutWrapper@VBamoDragManagerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VBamoDragManagerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180105108 (--1-$CalloutWrapper@VBamoDragManagerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoDragManagerClientProxy::OnDisconnectedCallout(BamoDragManagerClientProxy *this)
{
  BamoDragManagerClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragManagerClientProxyImpl>::CalloutWrapper<BamoImpl::BamoDragManagerClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoDragManagerClientProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragManagerClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoDragManagerClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
