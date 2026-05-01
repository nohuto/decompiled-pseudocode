/*
 * XREFs of _lambda_09fb039f358b632885968f82146d58d3_::operator() @ 0x1802F3ED8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_09fb039f358b632885968f82146d58d3___1_long_::Invoke @ 0x1802F6760 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F6760.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1802F5280 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall lambda_09fb039f358b632885968f82146d58d3_::operator()(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct tagPOINT v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct tagPOINT *))(**(_QWORD **)(*(_QWORD *)a1 + 184LL) + 88LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 184LL),
         a1 + 12,
         &v7);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x535,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v2);
  v3 = CAppViewManager::DragCompleteWorker(*(CAppViewManager **)a1, (const struct _GUID *)(a1 + 12), v7);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x537,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v3);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(*(_QWORD *)a1 + 184LL) + 40LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 184LL),
         a1 + 12,
         2LL,
         2LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x539,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
