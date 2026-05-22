/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoDeviceDockClientProxy@@EEAAJXZ @ 0x1801A0670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoDeviceDockClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDeviceDockClientProxyImpl@1@@Z @ 0x18019F6CC (--0-$CalloutWrapper@VBamoDeviceDockClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseB.c)
 *     ??1?$CalloutWrapper@VBamoDeviceDockClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18019F818 (--1-$CalloutWrapper@VBamoDeviceDockClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoDeviceDockClientProxy::OnPropertiesRefreshedCallout(BamoDeviceDockClientProxy *this)
{
  BamoDeviceDockClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDeviceDockClientProxyImpl>::CalloutWrapper<BamoImpl::BamoDeviceDockClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoDeviceDockClientProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDeviceDockClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoDeviceDockClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
