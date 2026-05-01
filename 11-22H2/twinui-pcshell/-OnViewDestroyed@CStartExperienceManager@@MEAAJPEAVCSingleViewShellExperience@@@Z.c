/*
 * XREFs of ?OnViewDestroyed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180189B90
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAVCStartExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCStartExperienceManager@@$$T@Z @ 0x1800E33E4 (--$InvokeAll@PEAVCStartExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVStartExper.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RevokeProcessesForAnimation@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBI@3@@Z @ 0x180189C20 (-RevokeProcessesForAnimation@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGes.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_35409324@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180189C7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_35409324@@@details@wil@@QEAAX_NW4Reportin.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewDestroyed(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rcx
  int v9; // eax
  int v10[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_35409324>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_35409324>::GetImpl'::`2'::impl,
    a2);
  v4 = *((_DWORD *)this + 172);
  if ( v4 )
  {
    v10[2] = 1;
    v12 = v4;
    *(_QWORD *)v10 = &v12;
    winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::RevokeProcessesForAnimation(
      (char *)this + 696,
      v10);
    *((_DWORD *)this + 172) = 0;
  }
  if ( *((_BYTE *)this + 666) )
  {
    v8 = *((_QWORD *)this + 25);
    *((_BYTE *)this + 666) = 0;
    LOBYTE(v3) = 1;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, v3);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x288,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
  }
  v5 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,std::nullptr_t>(
         (__int64)this + 56,
         (__int64)this - 96);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28A,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
