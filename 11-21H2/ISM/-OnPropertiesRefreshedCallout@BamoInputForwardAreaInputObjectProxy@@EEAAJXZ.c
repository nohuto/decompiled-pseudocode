/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoInputForwardAreaInputObjectProxy@@EEAAJXZ @ 0x180112780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputForwardAreaInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputForwardAreaInputObjectProxyImpl@1@@Z @ 0x180103738 (--0-$CalloutWrapper@VBamoInputForwardAreaInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 *     ??1?$CalloutWrapper@VBamoInputForwardAreaInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801054E8 (--1-$CalloutWrapper@VBamoInputForwardAreaInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 */

__int64 __fastcall BamoInputForwardAreaInputObjectProxy::OnPropertiesRefreshedCallout(
        BamoInputForwardAreaInputObjectProxy *this)
{
  BamoInputForwardAreaInputObjectProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputForwardAreaInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoInputForwardAreaInputObjectProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoInputForwardAreaInputObjectProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputForwardAreaInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputForwardAreaInputObjectProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
