/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoControllerNavigationManagerProxy@@EEAAJXZ @ 0x1801120F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoControllerNavigationManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoControllerNavigationManagerProxyImpl@1@@Z @ 0x180102874 (--0-$CalloutWrapper@VBamoControllerNavigationManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180104DA4 (--1-$CalloutWrapper@VBamoControllerNavigationManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 */

__int64 __fastcall BamoControllerNavigationManagerProxy::OnPropertiesRefreshedCallout(
        BamoControllerNavigationManagerProxy *this)
{
  BamoControllerNavigationManagerProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationManagerProxyImpl>::CalloutWrapper<BamoImpl::BamoControllerNavigationManagerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoControllerNavigationManagerProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationManagerProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationManagerProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
