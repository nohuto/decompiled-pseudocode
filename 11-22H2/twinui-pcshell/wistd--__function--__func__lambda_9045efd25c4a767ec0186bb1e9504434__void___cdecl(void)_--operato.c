/*
 * XREFs of wistd::__function::__func__lambda_9045efd25c4a767ec0186bb1e9504434__void___cdecl(void)_::operator() @ 0x1801E5540
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_4c0f6ed1d632f9eabd9f454ff611597b___ @ 0x1801E4D4C (CreationThreadDispatcher--RunAsync__lambda_4c0f6ed1d632f9eabd9f454ff611597b___.c)
 */

void __fastcall wistd::__function::__func__lambda_9045efd25c4a767ec0186bb1e9504434__void___cdecl_void__::operator()(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CreationThreadDispatcher::RunAsync__lambda_4c0f6ed1d632f9eabd9f454ff611597b___(
         *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL),
         *(volatile int **)(a1 + 8));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x14A,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
}
