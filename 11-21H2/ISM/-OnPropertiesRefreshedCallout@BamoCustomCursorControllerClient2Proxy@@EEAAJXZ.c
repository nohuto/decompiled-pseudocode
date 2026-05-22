/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoCustomCursorControllerClient2Proxy@@EEAAJXZ @ 0x1801121D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoCustomCursorControllerClient2ProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCustomCursorControllerClient2ProxyImpl@1@@Z @ 0x180102A6C (--0-$CalloutWrapper@VBamoCustomCursorControllerClient2ProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoCustomCursorControllerClient2ProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180104E9C (--1-$CalloutWrapper@VBamoCustomCursorControllerClient2ProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 */

__int64 __fastcall BamoCustomCursorControllerClient2Proxy::OnPropertiesRefreshedCallout(
        BamoCustomCursorControllerClient2Proxy *this)
{
  BamoCustomCursorControllerClient2Proxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCustomCursorControllerClient2ProxyImpl>::CalloutWrapper<BamoImpl::BamoCustomCursorControllerClient2ProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoCustomCursorControllerClient2Proxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCustomCursorControllerClient2ProxyImpl>::~CalloutWrapper<BamoImpl::BamoCustomCursorControllerClient2ProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
