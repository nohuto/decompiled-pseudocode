/*
 * XREFs of ?OnDisconnectedCallout@BamoEdgyDragSourceClientProxy@@EEAAJXZ @ 0x18012A730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoEdgyDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoEdgyDragSourceClientProxyImpl@1@@Z @ 0x18011EDF0 (--0-$CalloutWrapper@VBamoEdgyDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVB.c)
 *     ??1?$CalloutWrapper@VBamoEdgyDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180120BDC (--1-$CalloutWrapper@VBamoEdgyDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoEdgyDragSourceClientProxy::OnDisconnectedCallout(BamoEdgyDragSourceClientProxy *this)
{
  BamoEdgyDragSourceClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyDragSourceClientProxyImpl>::CalloutWrapper<BamoImpl::BamoEdgyDragSourceClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoEdgyDragSourceClientProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyDragSourceClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyDragSourceClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
