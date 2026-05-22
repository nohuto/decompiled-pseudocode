/*
 * XREFs of ?OnDisconnectedCallout@BamoControllerNavigationClientProxy@@EEAAJXZ @ 0x180174100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoControllerNavigationClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoControllerNavigationClientProxyImpl@1@@Z @ 0x18017368C (--0-$CalloutWrapper@VBamoControllerNavigationClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180173884 (--1-$CalloutWrapper@VBamoControllerNavigationClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 */

__int64 __fastcall BamoControllerNavigationClientProxy::OnDisconnectedCallout(
        BamoControllerNavigationClientProxy *this)
{
  BamoControllerNavigationClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>::CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoControllerNavigationClientProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
