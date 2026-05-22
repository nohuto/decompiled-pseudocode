/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoShellHandwritingHostServerProxy@@EEAAJXZ @ 0x18006FB40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VBamoShellHandwritingHostServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoShellHandwritingHostServerProxyImpl@1@@Z @ 0x18006F500 (--0-$CalloutWrapper@VBamoShellHandwritingHostServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 *     ??1?$CalloutWrapper@VBamoShellHandwritingHostServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006F5FC (--1-$CalloutWrapper@VBamoShellHandwritingHostServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoShellHandwritingHostServerProxy::OnPropertiesRefreshedCallout(
        BamoShellHandwritingHostServerProxy *this)
{
  BamoShellHandwritingHostServerProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellHandwritingHostServerProxyImpl>::CalloutWrapper<BamoImpl::BamoShellHandwritingHostServerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoShellHandwritingHostServerProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellHandwritingHostServerProxyImpl>::~CalloutWrapper<BamoImpl::BamoShellHandwritingHostServerProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
