/*
 * XREFs of ?UnsubscribeFromServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800AA420
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180061058 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180061644 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBF38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?UnsubscribeFromServices@InteractionTracker@SnapInteraction@@QEAAXXZ @ 0x180175330 (-UnsubscribeFromServices@InteractionTracker@SnapInteraction@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CShellSnapComponent::UnsubscribeFromServices(CShellSnapComponent *this, struct IServiceProvider *a2)
{
  __int64 v3; // rcx
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // eax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 31);
  if ( v3 )
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v3 + 32LL))(
      v3,
      ((unsigned __int64)this + 96) & -(__int64)(this != (CShellSnapComponent *)48));
  if ( *((_QWORD *)this + 41) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 56LL))(*((_QWORD *)this + 32));
  v14 = 0LL;
  v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 26);
  if ( v4 )
  {
    v14 = 0LL;
    if ( (**v4)(v4, &GUID_c60c7e8a_f650_4afb_917b_8d93242dbc36, &v14) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14);
  }
  v5 = *((_QWORD *)this + 49);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 136LL))(*((_QWORD *)this + 32));
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SAFlyout>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SAFlyout>::GetImpl'::`2'::impl,
    v5);
  if ( *((_DWORD *)this + 138) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 68) + 64LL))(*((_QWORD *)this + 68));
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SNTest>::GetImpl'::`2'::impl,
    1u,
    3u,
    v6);
  SnapInteraction::InteractionTracker::UnsubscribeFromServices((CShellSnapComponent *)((char *)this + 560));
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    v7);
  SmartCookie::Unregister((CShellSnapComponent *)((char *)this + 400));
  LOBYTE(v8) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SAFlyout>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SAFlyout>::GetImpl'::`2'::impl,
    v8);
  SmartCookie::Unregister((CShellSnapComponent *)((char *)this + 680));
  SmartCookie::Unregister((CShellSnapComponent *)((char *)this + 808));
  if ( *((_QWORD *)this + 42) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 104LL))(*((_QWORD *)this + 32));
  if ( *((_DWORD *)this + 96) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 32LL))(*((_QWORD *)this + 47));
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SETest>::GetImpl'::`2'::impl,
    1u,
    0,
    v9);
  if ( *((_DWORD *)this + 294) != -1 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 23) + 104LL))(*((_QWORD *)this + 23));
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19E,
        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v10,
        v12);
    *((_DWORD *)this + 294) = -1;
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v14);
  return 0LL;
}
