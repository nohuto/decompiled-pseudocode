/*
 * XREFs of wistd::__function::__func__lambda_1e6faaceccb8ce5b93798b6f5dffead9__void___cdecl(void)_::operator() @ 0x1801982F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_bd25e2ba6f0ad956a34c66bf3060a154___ @ 0x180197BF4 (CreationThreadDispatcher--RunAsync__lambda_bd25e2ba6f0ad956a34c66bf3060a154___.c)
 */

void __fastcall wistd::__function::__func__lambda_1e6faaceccb8ce5b93798b6f5dffead9__void___cdecl_void__::operator()(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CreationThreadDispatcher::RunAsync__lambda_bd25e2ba6f0ad956a34c66bf3060a154___(
         *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL),
         *(volatile int **)(a1 + 8));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x194,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
}
