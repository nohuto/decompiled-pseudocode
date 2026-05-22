/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoSystemCursorControllerProxy@@EEAAJXZ @ 0x18012DB60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSystemCursorControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemCursorControllerProxyImpl@1@@Z @ 0x18012029C (--0-$CalloutWrapper@VBamoSystemCursorControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEA.c)
 *     ??1?$CalloutWrapper@VBamoSystemCursorControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180121608 (--1-$CalloutWrapper@VBamoSystemCursorControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoSystemCursorControllerProxy::OnPropertiesRefreshedCallout(BamoSystemCursorControllerProxy *this)
{
  BamoSystemCursorControllerProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoSystemCursorControllerProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
