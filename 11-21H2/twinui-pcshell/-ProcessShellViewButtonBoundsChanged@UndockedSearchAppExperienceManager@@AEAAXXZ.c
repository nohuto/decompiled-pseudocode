/*
 * XREFs of ?ProcessShellViewButtonBoundsChanged@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019FE04
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18009E7E0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180046E60 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@URect@234@@impl@winrt@@QEBA?AURect@Foundation@Windows@3@XZ @ 0x1800F994C (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@URect@Foundation@Windows@winrt@@@Fo.c)
 *     ?GetShellViewButtonBoundsInRawPixels@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@3@_KAEBW4ShellView@Shell@UI@WindowsUdk@3@@Z @ 0x1800F9A70 (-GetShellViewButtonBoundsInRawPixels@-$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayou.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$UndockedSearchAppExperienceManager_ShellViewButtonBoundsChanged_ProcessPositionSearchAppWindow@AEAJAEAJAEAJAEAJ@SearchAppExperienceManagerTelemetry@@SAXAEAJ000@Z @ 0x18019A1EC (--$UndockedSearchAppExperienceManager_ShellViewButtonBoundsChanged_ProcessPositionSearchAppWindo.c)
 *     ?RevokeShellViewButtonBoundsChangedEvent@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801A0A88 (-RevokeShellViewButtonBoundsChangedEvent@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall UndockedSearchAppExperienceManager::ProcessShellViewButtonBoundsChanged(
        UndockedSearchAppExperienceManager *this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  HMONITOR v4; // rbx
  float *v5; // rax
  float v6; // xmm2_4
  float v7; // xmm3_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-40h] BYREF
  RECT v13; // [rsp+40h] [rbp-30h] BYREF
  RECT rc; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((float *)this + 30);
  v3 = *((float *)this + 31);
  rc.left = (int)v2;
  rc.top = (int)v3;
  rc.right = (int)(float)(v2 + *((float *)this + 32));
  rc.bottom = (int)(float)(v3 + *((float *)this + 33));
  v4 = MonitorFromRect(&rc, 1u);
  v13 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 12) + 80LL))(*((_QWORD *)this + 12), &v11);
  LODWORD(v12) = 1;
  winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetShellViewButtonBoundsInRawPixels(
    &v11,
    &v10,
    (__int64)v4,
    (unsigned int *)&v12);
  *(_QWORD *)&v12 = 0LL;
  if ( !winrt::Windows::Foundation::operator==(&v10, &v12) )
  {
    v5 = (float *)winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Rect>::Value(
                    &v10,
                    &v12);
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    v9 = v5[3];
    v13.left = (int)*v5;
    v13.top = (int)v7;
    v13.right = (int)(float)(v6 + v8);
    v13.bottom = (int)(float)(v7 + v9);
  }
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ShellViewButtonBoundsChanged_ProcessPositionSearchAppWindow<long &,long &,long &,long &>(
    &v13,
    &v13.top,
    &v13.right,
    (unsigned int *)&v13.bottom);
  if ( !IsRectEmpty(&v13) && !*((_BYTE *)this + 777) )
  {
    UndockedSearchAppExperienceManager::PositionSearchAppWindow(this);
    UndockedSearchAppExperienceManager::RevokeShellViewButtonBoundsChangedEvent(this);
    *((_BYTE *)this + 777) = 1;
  }
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v10);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v11);
}
