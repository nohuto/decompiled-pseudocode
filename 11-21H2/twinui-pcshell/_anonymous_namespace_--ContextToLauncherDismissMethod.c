/*
 * XREFs of _anonymous_namespace_::ContextToLauncherDismissMethod @ 0x18044AB38
 * Callers:
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x1801AAE40 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800FC0AC (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 */

__int64 __fastcall anonymous_namespace_::ContextToLauncherDismissMethod(__int64 a1)
{
  __int64 v1; // r11

  if ( (unsigned __int8)winrt::operator==(a1, (__int64)L"StartButton") )
    return 6LL;
  winrt::operator==(v1, (__int64)L"TaskView");
  return 7LL;
}
