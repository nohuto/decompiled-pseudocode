/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoCUIComponentInputObjectProxy@@EEAAJXZ @ 0x180126F10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoCUIComponentInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCUIComponentInputObjectProxyImpl@1@@Z @ 0x1801265D4 (--0-$CalloutWrapper@VBamoCUIComponentInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PE.c)
 *     ??1?$CalloutWrapper@VBamoCUIComponentInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801266D0 (--1-$CalloutWrapper@VBamoCUIComponentInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoCUIComponentInputObjectProxy::OnPropertiesRefreshedCallout(
        BamoCUIComponentInputObjectProxy *this)
{
  BamoCUIComponentInputObjectProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCUIComponentInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCUIComponentInputObjectProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoCUIComponentInputObjectProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCUIComponentInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoCUIComponentInputObjectProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
