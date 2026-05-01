/*
 * XREFs of _XamlLauncher::LauncherDismissRequested$_ResumeCoro$1_::_1_::dtor$9 @ 0x1801AB1D3
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800FA3AC (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall XamlLauncher::LauncherDismissRequested__ResumeCoro_1_::_1_::dtor_9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 128) + 48LL;
  winrt::hstring::~hstring(*(volatile signed __int32 ***)(a2 + 64), a2, a3, a4);
}
