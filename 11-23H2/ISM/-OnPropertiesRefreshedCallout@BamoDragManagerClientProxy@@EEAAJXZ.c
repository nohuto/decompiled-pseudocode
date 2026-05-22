/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoDragManagerClientProxy@@EEAAJXZ @ 0x180155840
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoDragManagerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18004D434 (--1-$CalloutWrapper@VBamoDragManagerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoDragManagerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDragManagerClientProxyImpl@1@@Z @ 0x1801544FC (--0-$CalloutWrapper@VBamoDragManagerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@_ea_1801544FC.c)
 */

__int64 __fastcall BamoDragManagerClientProxy::OnPropertiesRefreshedCallout(BamoDragManagerClientProxy *this)
{
  BamoDragManagerClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragManagerClientProxyImpl>::CalloutWrapper<BamoImpl::BamoDragManagerClientProxyImpl>(
    (__int64)v3,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (void (__fastcall ***)(_QWORD))this + 2);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoDragManagerClientProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragManagerClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoDragManagerClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
