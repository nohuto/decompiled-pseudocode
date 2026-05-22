/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoDragSourceClientProxy@@EEAAJXZ @ 0x180112470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDragSourceClientProxyImpl@1@@Z @ 0x180103054 (--0-$CalloutWrapper@VBamoDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseB.c)
 *     ??1?$CalloutWrapper@VBamoDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180105184 (--1-$CalloutWrapper@VBamoDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoDragSourceClientProxy::OnPropertiesRefreshedCallout(BamoDragSourceClientProxy *this)
{
  BamoDragSourceClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragSourceClientProxyImpl>::CalloutWrapper<BamoImpl::BamoDragSourceClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoDragSourceClientProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragSourceClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoDragSourceClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
