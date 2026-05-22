/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoResizeControllerClientProxy@@EEAAJXZ @ 0x18013B990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoResizeControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoResizeControllerClientProxyImpl@1@@Z @ 0x18012DE9C (--0-$CalloutWrapper@VBamoResizeControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEA.c)
 *     ??1?$CalloutWrapper@VBamoResizeControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012F408 (--1-$CalloutWrapper@VBamoResizeControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoResizeControllerClientProxy::OnPropertiesRefreshedCallout(BamoResizeControllerClientProxy *this)
{
  BamoResizeControllerClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoResizeControllerClientProxyImpl>::CalloutWrapper<BamoImpl::BamoResizeControllerClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoResizeControllerClientProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoResizeControllerClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoResizeControllerClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
