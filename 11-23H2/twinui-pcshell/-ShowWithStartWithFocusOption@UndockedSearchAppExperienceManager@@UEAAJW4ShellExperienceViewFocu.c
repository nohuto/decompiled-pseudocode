/*
 * XREFs of ?ShowWithStartWithFocusOption@UndockedSearchAppExperienceManager@@UEAAJW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x1800459D0
 * Callers:
 *     ?ShowWithStart@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x18046A790 (-ShowWithStart@UndockedSearchAppExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180045AFC (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UndockedSearchAppExperienceManager::ShowWithStartWithFocusOption(__int64 a1, unsigned int a2)
{
  int v4; // eax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, SID *, GUID *, __int64); // rbx
  int v8; // [rsp+20h] [rbp-48h]
  _BYTE v9[16]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  UndockedSearchAppExperienceManager::StartFullActivationTest(a1, 2LL, 0LL);
  v4 = 0;
  if ( !*(_QWORD *)(a1 + 88) )
  {
    v5 = *(_QWORD *)(a1 + 56);
    v6 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64))(*(_QWORD *)v5 + 24LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 88));
    v4 = v6(v5, &SID_ImmersiveLauncher, &GUID_d8d60399_a0f1_f987_5551_321fd1b49864, a1 + 88);
  }
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4AE,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      v8);
  else
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD))(**(_QWORD **)(a1 + 96) + 40LL))(
                                         *(_QWORD *)(a1 + 96),
                                         v9,
                                         *(_QWORD *)(a1 + 88));
  winrt::hstring::hstring((winrt::hstring *)v9, L"StartButton");
  UndockedSearchAppExperienceManager::ActivateAppAsync(a1, 0LL, a2, v9, 1, &LocaleName);
  winrt::handle_type<winrt::impl::hstring_traits>::close(v9);
  return 0LL;
}
