/*
 * XREFs of ??1?$com_ptr_t@VBamoShellHandwritingHostClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18005DA38
 * Callers:
 *     _Microsoft::BamoImpl::CalloutWrapper_BamoImpl::BamoShellHandwritingHostServerProxyImpl_::CalloutWrapper_BamoImpl::BamoShellHandwritingHostServerProxyImpl__::_1_::dtor$0 @ 0x18005D973 (_Microsoft--BamoImpl--CalloutWrapper_BamoImpl--BamoShellHandwritingHostServerProxyImpl_--Callout.c)
 *     ??1?$CalloutWrapper@VBamoShellHandwritingHostServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18005D98C (--1-$CalloutWrapper@VBamoShellHandwritingHostServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 *     _Microsoft::BamoImpl::CalloutWrapper_BamoImpl::BamoShellHandwritingHostClientProxyImpl_::CalloutWrapper_BamoImpl::BamoShellHandwritingHostClientProxyImpl__::_1_::dtor$0 @ 0x180062187 (_Microsoft--BamoImpl--CalloutWrapper_BamoImpl--BamoShellHandwritingHostClientProxyImpl_--Callout.c)
 *     ??1?$CalloutWrapper@VBamoShellHandwritingHostClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180062228 (--1-$CalloutWrapper@VBamoShellHandwritingHostClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 *     _Microsoft::BamoImpl::CalloutWrapper_BamoImpl::BamoShellHandwritingHostServerPrincipalImpl_::CalloutWrapper_BamoImpl::BamoShellHandwritingHostServerPrincipalImpl__::_1_::dtor$0 @ 0x180062927 (_Microsoft--BamoImpl--CalloutWrapper_BamoImpl--BamoShellHandwritingHostServerPrincipalImpl_--Cal.c)
 *     ??1?$CalloutWrapper@VBamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800629B8 (--1-$CalloutWrapper@VBamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<BamoImpl::BamoShellHandwritingHostClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoShellHandwritingHostClientProxyImpl,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
