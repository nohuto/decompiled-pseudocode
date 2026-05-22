/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoSystemButtonEventControllerProxy@@EEAAJXZ @ 0x1801527A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSystemButtonEventControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemButtonEventControllerProxyImpl@1@@Z @ 0x1801520F4 (--0-$CalloutWrapper@VBamoSystemButtonEventControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 *     ??1?$CalloutWrapper@VBamoSystemButtonEventControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801521F0 (--1-$CalloutWrapper@VBamoSystemButtonEventControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 */

__int64 __fastcall BamoSystemButtonEventControllerProxy::OnPropertiesRefreshedCallout(
        BamoSystemButtonEventControllerProxy *this)
{
  BamoSystemButtonEventControllerProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemButtonEventControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoSystemButtonEventControllerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoSystemButtonEventControllerProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemButtonEventControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoSystemButtonEventControllerProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
