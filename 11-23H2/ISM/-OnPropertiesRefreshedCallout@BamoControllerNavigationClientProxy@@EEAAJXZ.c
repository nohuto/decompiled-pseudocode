/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoControllerNavigationClientProxy@@EEAAJXZ @ 0x180193590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoControllerNavigationClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoControllerNavigationClientProxyImpl@1@@Z @ 0x1801928AC (--0-$CalloutWrapper@VBamoControllerNavigationClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180192AA4 (--1-$CalloutWrapper@VBamoControllerNavigationClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 */

__int64 __fastcall BamoControllerNavigationClientProxy::OnPropertiesRefreshedCallout(
        BamoControllerNavigationClientProxy *this)
{
  BamoControllerNavigationClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>::CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoControllerNavigationClientProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
