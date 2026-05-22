/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoActuationClientProxy@@EEAAJXZ @ 0x18012CC10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoActuationClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActuationClientProxyImpl@1@@Z @ 0x18011E034 (--0-$CalloutWrapper@VBamoActuationClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBa.c)
 *     ??1?$CalloutWrapper@VBamoActuationClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180120590 (--1-$CalloutWrapper@VBamoActuationClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoActuationClientProxy::OnPropertiesRefreshedCallout(BamoActuationClientProxy *this)
{
  BamoActuationClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActuationClientProxyImpl>::CalloutWrapper<BamoImpl::BamoActuationClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoActuationClientProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActuationClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoActuationClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
