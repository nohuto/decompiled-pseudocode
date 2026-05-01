/*
 * XREFs of _anonymous_namespace_::ContextToLauncherShowMethod @ 0x1805005A4
 * Callers:
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x1802000A0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800B5424 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 */

__int64 __fastcall anonymous_namespace_::ContextToLauncherShowMethod(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8

  if ( winrt::operator==(a1, (__int64)L"StartButton", a3) )
    return 11LL;
  else
    return winrt::operator==(a1, (__int64)L"Drag", v4) ? 0x10 : 0;
}
