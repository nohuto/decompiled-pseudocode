/*
 * XREFs of _XamlLauncher::LauncherShowRequested$_ResumeCoro$1_::_1_::dtor$5 @ 0x1801AB961
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800FA3AC (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall XamlLauncher::LauncherShowRequested__ResumeCoro_1_::_1_::dtor_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 160) + 88LL;
  winrt::hstring::~hstring(*(volatile signed __int32 ***)(a2 + 80), a2, a3, a4);
}
