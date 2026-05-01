/*
 * XREFs of ?FocusHotkeyInvoked@CShoulderTapExperienceManager@@UEAAJXZ @ 0x1804424B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18001B048 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180747434 (-NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Intern.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CShoulderTapExperienceManager::FocusHotkeyInvoked(CShoulderTapExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // r8d
  HSTRING_HEADER *v4; // rax
  int v5; // eax
  HSTRING_HEADER v7; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( *((_DWORD *)this + 20) == 2 )
  {
    v2 = CSingleViewShellExperience::NavigateView((char *)this + 40, 5LL);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x178,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
    v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v7, (const WCHAR **)&off_1807F4430, v3);
    v5 = ExperienceManagerUtils::RaiseReactivatedEvent(
           *((ExperienceManagerUtils **)this + 8),
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 42),
           *((HSTRING *)this + 6),
           *((HSTRING *)this + 7),
           (HSTRING)v4[1].Reserved.Reserved1,
           0LL);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x179,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
  return 0LL;
}
