/*
 * XREFs of ?OnConnectedCallout@BamoShellHandwritingHostClientProxy@@EEAAJXZ @ 0x1800623F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VBamoShellHandwritingHostClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoShellHandwritingHostClientProxyImpl@1@@Z @ 0x1800620A4 (--0-$CalloutWrapper@VBamoShellHandwritingHostClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 *     ??1?$CalloutWrapper@VBamoShellHandwritingHostClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180062228 (--1-$CalloutWrapper@VBamoShellHandwritingHostClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoShellHandwritingHostClientProxy::OnConnectedCallout(BamoShellHandwritingHostClientProxy *this)
{
  BamoShellHandwritingHostClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellHandwritingHostClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellHandwritingHostClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoShellHandwritingHostClientProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellHandwritingHostClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoShellHandwritingHostClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
