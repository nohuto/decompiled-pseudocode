/*
 * XREFs of _lambda_6d93f2ff4c7f7497f8e3b07a35aecc4b_::_lambda_invoker_cdecl_ @ 0x1801BACF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800E8E74 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

void __fastcall lambda_6d93f2ff4c7f7497f8e3b07a35aecc4b_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = ExperienceManagerUtils::PostToUIThread(0LL, 0LL, (void *)(unsigned int)Context, 0LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      (const char *)(unsigned int)v4);
}
