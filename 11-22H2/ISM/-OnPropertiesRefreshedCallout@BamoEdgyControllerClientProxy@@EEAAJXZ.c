/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoEdgyControllerClientProxy@@EEAAJXZ @ 0x180179310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoEdgyControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoEdgyControllerClientProxyImpl@1@@Z @ 0x1801788AC (--0-$CalloutWrapper@VBamoEdgyControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVB.c)
 *     ??1?$CalloutWrapper@VBamoEdgyControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180178AB8 (--1-$CalloutWrapper@VBamoEdgyControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoEdgyControllerClientProxy::OnPropertiesRefreshedCallout(BamoEdgyControllerClientProxy *this)
{
  BamoEdgyControllerClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyControllerClientProxyImpl>::CalloutWrapper<BamoImpl::BamoEdgyControllerClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoEdgyControllerClientProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyControllerClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyControllerClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
