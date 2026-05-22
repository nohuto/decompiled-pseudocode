/*
 * XREFs of ?OnConnectedCallout@BamoSystemCursorControllerClientProxy@@EEAAJXZ @ 0x180129E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSystemCursorControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemCursorControllerClientProxyImpl@1@@Z @ 0x1801201A0 (--0-$CalloutWrapper@VBamoSystemCursorControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ??1?$CalloutWrapper@VBamoSystemCursorControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012158C (--1-$CalloutWrapper@VBamoSystemCursorControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoSystemCursorControllerClientProxy::OnConnectedCallout(
        BamoSystemCursorControllerClientProxy *this)
{
  BamoSystemCursorControllerClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerClientProxyImpl>::CalloutWrapper<BamoImpl::BamoSystemCursorControllerClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoSystemCursorControllerClientProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoSystemCursorControllerClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
