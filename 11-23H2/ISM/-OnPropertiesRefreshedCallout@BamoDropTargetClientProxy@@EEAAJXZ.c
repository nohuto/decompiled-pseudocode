/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoDropTargetClientProxy@@EEAAJXZ @ 0x18012D150
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoDropTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18004D2B4 (--1-$CalloutWrapper@VBamoDropTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoDropTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDropTargetClientProxyImpl@1@@Z @ 0x18011ECC8 (--0-$CalloutWrapper@VBamoDropTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q_ea_18011ECC8.c)
 */

__int64 __fastcall BamoDropTargetClientProxy::OnPropertiesRefreshedCallout(BamoDropTargetClientProxy *this)
{
  BamoDropTargetClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDropTargetClientProxyImpl>::CalloutWrapper<BamoImpl::BamoDropTargetClientProxyImpl>(
    (__int64)v3,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (void (__fastcall ***)(_QWORD))this + 2);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoDropTargetClientProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDropTargetClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoDropTargetClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
