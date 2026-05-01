/*
 * XREFs of ?WorkAreaMayHaveChanged@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18038FDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180046E60 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$get_self@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@@winrt@@YAPEAUSearchAppHost@implementation@Shell@UI@WindowsUdk@0@AEBU13450@@Z @ 0x18019A344 (--$get_self@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@@winrt@@YAPEAUSearch.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 *     ?ReportSearchBoxPlacementMarginChanged@SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXN@Z @ 0x1801A40D8 (-ReportSearchBoxPlacementMarginChanged@SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@Q.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::WorkAreaMayHaveChanged(UndockedSearchAppExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // edi
  float v5; // xmm0_4
  float v6; // xmm1_4
  winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost *v7; // rax
  float v8[4]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v9[4]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 12) + 32LL))(
         *((_QWORD *)this + 12),
         *((_QWORD *)this + 8)) )
  {
    v2 = UndockedSearchAppExperienceManager::PositionSearchAppWindow(this);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EE,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      return v3;
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl) )
    {
      v5 = *((float *)this + 30);
      v6 = *((float *)this + 31);
      v9[0] = (int)v5;
      v9[1] = (int)v6;
      v9[2] = (int)(float)(v5 + *((float *)this + 32));
      v9[3] = (int)(float)(v6 + *((float *)this + 33));
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 13) + 40LL))(
             *((_QWORD *)this + 13),
             v9) )
      {
        (*(void (__fastcall **)(_QWORD, float *, _DWORD *))(**((_QWORD **)this + 13) + 16LL))(
          *((_QWORD *)this + 13),
          v8,
          v9);
        v7 = (winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost *)winrt::get_self<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost>((_QWORD *)this + 20);
        winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost::ReportSearchBoxPlacementMarginChanged(v7, v8[0]);
      }
    }
  }
  return 0LL;
}
