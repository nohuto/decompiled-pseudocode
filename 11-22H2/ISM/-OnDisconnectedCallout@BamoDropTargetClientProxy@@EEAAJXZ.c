/*
 * XREFs of ?OnDisconnectedCallout@BamoDropTargetClientProxy@@EEAAJXZ @ 0x180138640
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoDropTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18004DB14 (--1-$CalloutWrapper@VBamoDropTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoDropTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDropTargetClientProxyImpl@1@@Z @ 0x18012CCB8 (--0-$CalloutWrapper@VBamoDropTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q_ea_18012CCB8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDropTargetClientProxy::OnDisconnectedCallout(BamoDropTargetClientProxy *this)
{
  BamoDropTargetClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDropTargetClientProxyImpl>::CalloutWrapper<BamoImpl::BamoDropTargetClientProxyImpl>(
    (__int64)v3,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (void (__fastcall ***)(_QWORD))this + 2);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoDropTargetClientProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDropTargetClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoDropTargetClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
