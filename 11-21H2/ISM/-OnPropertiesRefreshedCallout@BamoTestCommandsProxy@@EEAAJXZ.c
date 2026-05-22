/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoTestCommandsProxy@@EEAAJXZ @ 0x180112EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoTestCommandsProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoTestCommandsProxyImpl@1@@Z @ 0x1801047F4 (--0-$CalloutWrapper@VBamoTestCommandsProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoC.c)
 *     ??1?$CalloutWrapper@VBamoTestCommandsProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180105D24 (--1-$CalloutWrapper@VBamoTestCommandsProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoTestCommandsProxy::OnPropertiesRefreshedCallout(BamoTestCommandsProxy *this)
{
  BamoTestCommandsProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoTestCommandsProxyImpl>::CalloutWrapper<BamoImpl::BamoTestCommandsProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoTestCommandsProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoTestCommandsProxyImpl>::~CalloutWrapper<BamoImpl::BamoTestCommandsProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
