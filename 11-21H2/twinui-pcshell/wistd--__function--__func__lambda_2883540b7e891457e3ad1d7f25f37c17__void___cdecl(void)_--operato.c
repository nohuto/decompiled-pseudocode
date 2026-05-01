/*
 * XREFs of wistd::__function::__func__lambda_2883540b7e891457e3ad1d7f25f37c17__void___cdecl(void)_::operator() @ 0x180198330
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_67f1862805ee8077baf0f70ad7f386d7___ @ 0x180197B28 (CreationThreadDispatcher--RunAsync__lambda_67f1862805ee8077baf0f70ad7f386d7___.c)
 */

void __fastcall wistd::__function::__func__lambda_2883540b7e891457e3ad1d7f25f37c17__void___cdecl_void__::operator()(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CreationThreadDispatcher::RunAsync__lambda_67f1862805ee8077baf0f70ad7f386d7___(
         *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL),
         *(volatile int **)(a1 + 8));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1AD,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
}
