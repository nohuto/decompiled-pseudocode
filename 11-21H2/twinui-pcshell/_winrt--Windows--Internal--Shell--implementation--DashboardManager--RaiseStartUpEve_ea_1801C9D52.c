/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent$_ResumeCoro$1_::_1_::catch$7 @ 0x1801C9D52
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent__ResumeCoro_1_::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rdx

  v3 = (_DWORD *)(*(_QWORD *)(a2 + 56) + 12LL);
  v4 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(v4 + 352) = v3;
  LODWORD(v3) = *v3;
  *(_DWORD *)(v4 + 368) = (_DWORD)v3;
  *(_DWORD *)(v4 + 128) = (_DWORD)v3;
  wil::details::in1diag3::Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x4F7,
    (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    (const char *)(unsigned int)v3);
  return 0LL;
}
