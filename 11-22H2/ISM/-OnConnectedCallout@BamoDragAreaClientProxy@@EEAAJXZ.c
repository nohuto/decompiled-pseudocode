/*
 * XREFs of ?OnConnectedCallout@BamoDragAreaClientProxy@@EEAAJXZ @ 0x180137450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoDragAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDragAreaClientProxyImpl@1@@Z @ 0x18012CAC0 (--0-$CalloutWrapper@VBamoDragAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBam.c)
 *     ??1?$CalloutWrapper@VBamoDragAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012EA58 (--1-$CalloutWrapper@VBamoDragAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDragAreaClientProxy::OnConnectedCallout(BamoDragAreaClientProxy *this)
{
  BamoDragAreaClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragAreaClientProxyImpl>::CalloutWrapper<BamoImpl::BamoDragAreaClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoDragAreaClientProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragAreaClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoDragAreaClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
