/*
 * XREFs of ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAX_N_K@Z @ 0x18004139C
 * Callers:
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAX_N_K@Z @ 0x180202BE0 (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WB.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180060018 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIAllUpViewHost@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAllUpViewHost@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A9880 (--$query@UIAllUpViewHost@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ??$query@UIAllUpViewHostInternal@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAllUpViewHostInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A98E0 (--$query@UIAllUpViewHostInternal@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall _HostWindowActivationChanged__QIXamlSwitcherWindowInteractionEvents__XamlAllUpViewController__UE_AAAX_N_K_Z(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  char v4; // bl
  int v6; // eax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::GetImpl'::`2'::impl,
    a2,
    a3);
  if ( !v4 )
  {
    wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAllUpViewHostInternal>(a1 + 56, v7);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7[0] + 24LL))(v7[0], v3) )
    {
      wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAllUpViewHost>(a1 + 56, &v9);
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 64LL))(v9);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1CE,
          (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
          (const char *)(unsigned int)v6,
          v7[0]);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v9);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v7);
  }
}
