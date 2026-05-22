/*
 * XREFs of ?OnDisconnectedCallout@BamoCustomCursorControllerClient2Proxy@@EEAAJXZ @ 0x18012A3B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoCustomCursorControllerClient2ProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCustomCursorControllerClient2ProxyImpl@1@@Z @ 0x18011E6E0 (--0-$CalloutWrapper@VBamoCustomCursorControllerClient2ProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoCustomCursorControllerClient2ProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180120878 (--1-$CalloutWrapper@VBamoCustomCursorControllerClient2ProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 */

__int64 __fastcall BamoCustomCursorControllerClient2Proxy::OnDisconnectedCallout(
        BamoCustomCursorControllerClient2Proxy *this)
{
  BamoCustomCursorControllerClient2Proxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCustomCursorControllerClient2ProxyImpl>::CalloutWrapper<BamoImpl::BamoCustomCursorControllerClient2ProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoCustomCursorControllerClient2Proxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCustomCursorControllerClient2ProxyImpl>::~CalloutWrapper<BamoImpl::BamoCustomCursorControllerClient2ProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
