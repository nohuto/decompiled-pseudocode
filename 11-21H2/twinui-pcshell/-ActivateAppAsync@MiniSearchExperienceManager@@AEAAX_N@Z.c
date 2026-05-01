/*
 * XREFs of ?ActivateAppAsync@MiniSearchExperienceManager@@AEAAX_N@Z @ 0x1801A731C
 * Callers:
 *     ?Show@MiniSearchExperienceManager@@AEAAJ_N@Z @ 0x1801A8090 (-Show@MiniSearchExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA@XZ @ 0x18004319C (--1-$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BringToForeground@MiniSearchExperienceManager@@AEAAJXZ @ 0x1801A74F4 (-BringToForeground@MiniSearchExperienceManager@@AEAAJXZ.c)
 *     ?Uncloak@MiniSearchExperienceManager@@AEAAJXZ @ 0x1801A8200 (-Uncloak@MiniSearchExperienceManager@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$make@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@AEAY0BD@$$CBGAEAW4SearchAppActivationMode@3456@AEBURect@Foundation@Windows@6@$$T_N@winrt@@YA?AUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@0@AEAY0BD@$$CBGAEAW4SearchAppActivationMode@2340@AEBURect@Foundation@Windows@0@$$QEA$$T$$QEA_N@Z @ 0x1803A099C (--$make@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@AEAY0BD@$$CBGAEAW.c)
 *     ?BoostPriority@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A1538 (-BoostPriority@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ?DisableActivationTimeoutPolicy@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A1768 (-DisableActivationTimeoutPolicy@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ?watch_errors@?$tip_test@U_tip_MiniSearchActivationTest@@@tip@@QEAA?AV?$test_watcher@U_tip_MiniSearchActivationTest@@@2@XZ @ 0x1803A4E3C (-watch_errors@-$tip_test@U_tip_MiniSearchActivationTest@@@tip@@QEAA-AV-$test_watcher@U_tip_MiniS.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MiniSearchExperienceManager::ActivateAppAsync(MiniSearchExperienceManager *this, char a2)
{
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // [rsp+20h] [rbp-60h]
  _BYTE v9[16]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v10[64]; // [rsp+40h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  char v12; // [rsp+90h] [rbp+10h] BYREF
  int v13; // [rsp+98h] [rbp+18h] BYREF

  tip::tip_test<_tip_MiniSearchActivationTest>::watch_errors((char *)this + 256, v10);
  (*(void (__fastcall **)(_QWORD, _BYTE *, char *))(**((_QWORD **)this + 10) + 16LL))(
    *((_QWORD *)this + 10),
    v9,
    (char *)this + 88);
  LOBYTE(v13) = 0;
  winrt::make<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,unsigned short const (&)[19],enum winrt::WindowsUdk::UI::Shell::SearchAppActivationMode &,winrt::Windows::Foundation::Rect const &,std::nullptr_t,bool>(
    (unsigned int)&v12,
    v4,
    (_DWORD)this + 104,
    (unsigned int)v9);
  *((_BYTE *)this + 224) = a2;
  if ( *((_QWORD *)this + 5) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9)) )
      MiniSearchExperienceManager::Uncloak(this);
    v13 = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 352LL))(*((_QWORD *)this + 5), &v13);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x374,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        v8);
    if ( v13 != 4 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 344LL))(*((_QWORD *)this + 5));
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x377,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
          (const char *)(unsigned int)v6,
          v8);
    }
    if ( a2 )
    {
      v7 = MiniSearchExperienceManager::BringToForeground(this);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x37C,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
          (const char *)(unsigned int)v7,
          v8);
    }
  }
  else
  {
    MiniSearchExperienceManager::BoostPriority(this);
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 16LL))(*((_QWORD *)this + 9), &v12);
    MiniSearchExperienceManager::DisableActivationTimeoutPolicy(this);
  }
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v12);
  tip::test_watcher<_tip_SwipeDashboard>::~test_watcher<_tip_SwipeDashboard>((__int64)v10);
}
