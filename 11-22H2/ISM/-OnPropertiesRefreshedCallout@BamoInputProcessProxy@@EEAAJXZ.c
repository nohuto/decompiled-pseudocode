/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoInputProcessProxy@@EEAAJXZ @ 0x1801C14A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputProcessProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputProcessProxyImpl@1@@Z @ 0x1801C10EC (--0-$CalloutWrapper@VBamoInputProcessProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoC.c)
 *     ??1?$CalloutWrapper@VBamoInputProcessProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801C11E8 (--1-$CalloutWrapper@VBamoInputProcessProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
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
