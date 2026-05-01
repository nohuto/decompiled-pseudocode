/*
 * XREFs of _SharedDesktopBackgroundVisualHost::StartXamlHostThread_::_1_::catch$19 @ 0x1806E9815
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SharedDesktopBackgroundVisualHost::StartXamlHostThread_::_1_::catch_19(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rbx

  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x13B,
    (int)"pcshell\\twinui\\themecoordinator\\lib\\shareddesktopbackgroundvisualhost.cpp",
    a4);
  v5 = *(_QWORD *)(a2 + 80);
  AcquireSRWLockExclusive((PSRWLOCK)(v5 + 176));
  *(_DWORD *)(v5 + 184) = 0;
  if ( v5 != -176 )
    ReleaseSRWLockExclusive((PSRWLOCK)(v5 + 176));
  return 0LL;
}
