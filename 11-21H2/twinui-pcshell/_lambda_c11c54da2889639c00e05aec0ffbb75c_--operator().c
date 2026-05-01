/*
 * XREFs of _lambda_c11c54da2889639c00e05aec0ffbb75c_::operator() @ 0x1801971BC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c11c54da2889639c00e05aec0ffbb75c___::Run @ 0x180197630 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c11c54da2889639c00e05aec0ffbb75c___--Run.c)
 * Callees:
 *     ?Cloak@CSingleViewShellExperience@@QEAAJXZ @ 0x18002B9A8 (-Cloak@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?PendingCloakingStatus_@StartMenuExperienceTelemetry@@QEAAX_NGG@Z @ 0x1801509DC (-PendingCloakingStatus_@StartMenuExperienceTelemetry@@QEAAX_NGG@Z.c)
 *     ?get@?$static_lazy@VStartMenuExperienceTelemetry@@@details@wil@@QEAAPEAVStartMenuExperienceTelemetry@@P6AXXZ@Z @ 0x180150B1C (-get@-$static_lazy@VStartMenuExperienceTelemetry@@@details@wil@@QEAAPEAVStartMenuExperienceTelem.c)
 */

__int64 __fastcall lambda_c11c54da2889639c00e05aec0ffbb75c_::operator()(__int64 a1)
{
  __int16 v1; // si
  __int16 v3; // bp
  char v4; // bl
  __int64 *v5; // rax
  __int64 v6; // rcx
  StartMenuExperienceTelemetry *v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_WORD *)(a1 + 20);
  v3 = *(_WORD *)(a1 + 16);
  v4 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 691LL);
  v5 = wil::details::static_lazy<StartMenuExperienceTelemetry>::get(
         a1,
         _lambda_61b654bec5a673602743fd344e831919_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)v5, 0) )
  {
    wil::details::static_lazy<StartMenuExperienceTelemetry>::get(
      v6,
      _lambda_61b654bec5a673602743fd344e831919_::_lambda_invoker_cdecl_);
    StartMenuExperienceTelemetry::PendingCloakingStatus_(v7, v4, v3, v1);
  }
  if ( !v4 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v8 + 691) = 0;
  v9 = CSingleViewShellExperience::Cloak((HSTRING *)(v8 + 320));
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AC,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
