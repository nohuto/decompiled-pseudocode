/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoInputProcessManagerProxy@@EEAAJXZ @ 0x18012D5B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputProcessManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputProcessManagerProxyImpl@1@@Z @ 0x18011F5D0 (--0-$CalloutWrapper@VBamoInputProcessManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBa.c)
 *     ??1?$CalloutWrapper@VBamoInputProcessManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180120FBC (--1-$CalloutWrapper@VBamoInputProcessManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoInputProcessManagerProxy::OnPropertiesRefreshedCallout(BamoInputProcessManagerProxy *this)
{
  BamoInputProcessManagerProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputProcessManagerProxyImpl>::CalloutWrapper<BamoImpl::BamoInputProcessManagerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoInputProcessManagerProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputProcessManagerProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputProcessManagerProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
