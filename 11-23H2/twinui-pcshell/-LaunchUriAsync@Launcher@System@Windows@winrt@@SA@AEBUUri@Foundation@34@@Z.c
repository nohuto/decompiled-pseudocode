/*
 * XREFs of ?LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@@Z @ 0x180401F94
 * Callers:
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1 @ 0x180271830 (CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1.c)
 * Callees:
 *     ??$call@AEAV_lambda_25f685323ecfdadefb1917e024cec3b1_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_25f685323ecfdadefb1917e024cec3b1_@@@Z @ 0x1803F70DC (--$call@AEAV_lambda_25f685323ecfdadefb1917e024cec3b1_@@@-$factory_cache_entry@ULauncher@System@W.c)
 *     ?LaunchUriAsync@?$consume_Windows_System_ILauncherStatics@UILauncherStatics@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUUri@Foundation@Windows@3@@Z @ 0x180401F3C (-LaunchUriAsync@-$consume_Windows_System_ILauncherStatics@UILauncherStatics@System@Windows@winrt.c)
 */

const struct winrt::Windows::Foundation::Uri *__fastcall winrt::Windows::System::Launcher::LaunchUriAsync(
        const struct winrt::Windows::Foundation::Uri *a1,
        _QWORD *a2)
{
  _QWORD *v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_180990CC8;
  _InterlockedIncrement64(&qword_180990CC8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics> )
  {
    winrt::impl::consume_Windows_System_ILauncherStatics<winrt::Windows::System::ILauncherStatics>::LaunchUriAsync(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>,
      a1,
      a2);
    _InterlockedDecrement64(&qword_180990CC8);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990CC8);
    winrt::impl::factory_cache_entry<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>::call<_lambda_25f685323ecfdadefb1917e024cec3b1_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      &v4);
  }
  return a1;
}
