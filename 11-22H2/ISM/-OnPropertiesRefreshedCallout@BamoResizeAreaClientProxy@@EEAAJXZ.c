/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoResizeAreaClientProxy@@EEAAJXZ @ 0x18013B920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoResizeAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoResizeAreaClientProxyImpl@1@@Z @ 0x18012DDA0 (--0-$CalloutWrapper@VBamoResizeAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseB.c)
 *     ??1?$CalloutWrapper@VBamoResizeAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012F38C (--1-$CalloutWrapper@VBamoResizeAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoResizeAreaClientProxy::OnPropertiesRefreshedCallout(BamoResizeAreaClientProxy *this)
{
  BamoResizeAreaClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoResizeAreaClientProxyImpl>::CalloutWrapper<BamoImpl::BamoResizeAreaClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoResizeAreaClientProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoResizeAreaClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoResizeAreaClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
