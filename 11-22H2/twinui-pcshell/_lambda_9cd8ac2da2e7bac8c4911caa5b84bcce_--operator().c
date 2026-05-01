/*
 * XREFs of _lambda_9cd8ac2da2e7bac8c4911caa5b84bcce_::operator() @ 0x1803AD154
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_9cd8ac2da2e7bac8c4911caa5b84bcce___1_long_::Invoke @ 0x1803AFAB0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1803AFAB0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1803AE1E0 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall lambda_9cd8ac2da2e7bac8c4911caa5b84bcce_::operator()(__int64 a1)
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
      (void *)0x536,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v2);
  v3 = CAppViewManager::DragCompleteWorker(*(CAppViewManager **)a1, (const struct _GUID *)(a1 + 12), v7);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x538,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v3);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(*(_QWORD *)a1 + 184LL) + 40LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 184LL),
         a1 + 12,
         2LL,
         2LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x53A,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
