/*
 * XREFs of _lambda_6cd121ce747f2a58a1ddadc2635efaab_::_lambda_invoker_cdecl_ @ 0x1803921A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800FACF4 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

void __fastcall lambda_6cd121ce747f2a58a1ddadc2635efaab_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_TIMER Timer)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(0LL, 0LL, (void *)(unsigned int)Context, 0LL);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x9B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      (const char *)(unsigned int)v3);
}
