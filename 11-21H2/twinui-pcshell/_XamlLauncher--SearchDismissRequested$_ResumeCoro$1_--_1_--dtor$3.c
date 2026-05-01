/*
 * XREFs of _XamlLauncher::SearchDismissRequested$_ResumeCoro$1_::_1_::dtor$3 @ 0x1801AC1DA
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800FA3AC (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall XamlLauncher::SearchDismissRequested__ResumeCoro_1_::_1_::dtor_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 40) + 88LL;
  winrt::hstring::~hstring(*(volatile signed __int32 ***)(a2 + 80), a2, a3, a4);
}
