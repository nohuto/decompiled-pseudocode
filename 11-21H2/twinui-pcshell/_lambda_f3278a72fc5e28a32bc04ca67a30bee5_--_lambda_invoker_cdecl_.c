/*
 * XREFs of _lambda_f3278a72fc5e28a32bc04ca67a30bee5_::_lambda_invoker_cdecl_ @ 0x180392770
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800FACC8 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

void __fastcall lambda_f3278a72fc5e28a32bc04ca67a30bee5_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        struct IUnknown *Context,
        PTP_TIMER Timer)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(0LL, Context, 0LL);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x15C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
}
