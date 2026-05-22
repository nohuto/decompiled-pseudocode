/*
 * XREFs of ??0ShellHandwritingClientProxy@@QEAA@AEBV?$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@@Z @ 0x180074F74
 * Callers:
 *     ?CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x1800750DC (-CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwrit.c)
 * Callees:
 *     ?AddRef@BamoInputObserverManagerPrincipal@@UEAAKXZ @ 0x18001AC10 (-AddRef@BamoInputObserverManagerPrincipal@@UEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellHandwritingClientProxy::ShellHandwritingClientProxy(
        __int64 a1,
        BamoInputObserverManagerPrincipal **a2,
        __int64 a3,
        const char *a4)
{
  BamoInputObserverManagerPrincipal *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_QWORD *)(a1 + 16) = &BamoImpl::BamoShellHandwritingHostClientProxyImpl::`vftable';
  *(_QWORD *)a1 = &ShellHandwritingClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *(_QWORD *)(a1 + 8) = &ShellHandwritingClientProxy::`vftable'{for `IShellHandwritingHostClientProxy'};
  v6 = *a2;
  *(_QWORD *)(a1 + 48) = *a2;
  if ( v6 )
    BamoInputObserverManagerPrincipal::AddRef(v6);
  if ( !*a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x18,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellhandwriting\\server\\shellha"
           "ndwritingclientproxy.cpp",
      a4);
  return a1;
}
