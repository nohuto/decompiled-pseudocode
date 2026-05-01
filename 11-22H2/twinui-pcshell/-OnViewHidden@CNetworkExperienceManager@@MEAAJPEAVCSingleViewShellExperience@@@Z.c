/*
 * XREFs of ?OnViewHidden@CNetworkExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18046E530
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18001B048 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1800D6384 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CNetworkExperienceManager::OnViewHidden(
        CNetworkExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  _DWORD *v4; // rcx
  int v5; // eax
  unsigned int v7; // [rsp+40h] [rbp-38h] BYREF
  HSTRING_HEADER v8; // [rsp+48h] [rbp-30h] BYREF
  HSTRING v9; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v4,
      (unsigned __int8 *)dword_180854A8E,
      0LL,
      0LL,
      2u,
      (PEVENT_DATA_DESCRIPTOR)&v8);
  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v8, L"NetworkFlyoutHidden", 0x14u, 0x13u);
  v5 = ExperienceManagerUtils::RaiseReactivatedEvent(
         *((ExperienceManagerUtils **)a2 + 3),
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)a2 + 32),
         *((HSTRING *)a2 + 1),
         *((HSTRING *)a2 + 2),
         v9,
         0LL);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB5,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\networkexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  v7 = 1;
  winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
    (_QWORD *)this + 3,
    &v7);
  return 0LL;
}
