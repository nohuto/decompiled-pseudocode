/*
 * XREFs of ?OnConnectedCallout@BamoSystemCursorControllerProxy@@EEAAJXZ @ 0x180137ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSystemCursorControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemCursorControllerProxyImpl@1@@Z @ 0x18012E28C (--0-$CalloutWrapper@VBamoSystemCursorControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEA.c)
 *     ??1?$CalloutWrapper@VBamoSystemCursorControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012F5F8 (--1-$CalloutWrapper@VBamoSystemCursorControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoSystemCursorControllerProxy::OnConnectedCallout(BamoSystemCursorControllerProxy *this)
{
  BamoSystemCursorControllerProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoSystemCursorControllerProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
