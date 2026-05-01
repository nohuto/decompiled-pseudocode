/*
 * XREFs of ?WorkAreaMayHaveChanged@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x1802D50D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800B7650 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@$$T@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEB$$T@Z @ 0x18047E628 (--$-RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@$$T@-$event@U-$TypedEventHandler@U.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::WorkAreaMayHaveChanged(UndockedSearchAppExperienceManager *this)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // edi
  float v7; // xmm0_4
  float v8; // xmm1_4
  __int64 v9; // rdx
  float v10[4]; // [rsp+28h] [rbp-30h] BYREF
  _DWORD v11[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 12) + 32LL))(
         *((_QWORD *)this + 12),
         *((_QWORD *)this + 8)) )
  {
    v2 = UndockedSearchAppExperienceManager::PositionSearchAppWindow(this);
    v5 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A2,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      return v5;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
      1u,
      v3,
      v4);
    v7 = *((float *)this + 32);
    v8 = *((float *)this + 33);
    v11[0] = (int)v7;
    v11[1] = (int)v8;
    v11[2] = (int)(float)(v7 + *((float *)this + 34));
    v11[3] = (int)(float)(v8 + *((float *)this + 35));
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 13) + 40LL))(
           *((_QWORD *)this + 13),
           v11) )
    {
      (*(void (__fastcall **)(_QWORD, float *, _DWORD *))(**((_QWORD **)this + 13) + 16LL))(
        *((_QWORD *)this + 13),
        v10,
        v11);
      v9 = (*((_QWORD *)this + 21) - 16LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 21) >> 64);
      *(double *)(v9 + 144) = v10[0];
      winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>::operator()<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,std::nullptr_t>(v9 + 120);
    }
  }
  return 0LL;
}
