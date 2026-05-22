/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoInputProcessProxy@@EEAAJXZ @ 0x1801B35D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputProcessProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputProcessProxyImpl@1@@Z @ 0x1801B310C (--0-$CalloutWrapper@VBamoInputProcessProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoC.c)
 *     ??1?$CalloutWrapper@VBamoInputProcessProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801B3208 (--1-$CalloutWrapper@VBamoInputProcessProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoInputProcessProxy::OnPropertiesRefreshedCallout(BamoInputProcessProxy *this)
{
  BamoInputProcessProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputProcessProxyImpl>::CalloutWrapper<BamoImpl::BamoInputProcessProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoInputProcessProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputProcessProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputProcessProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
