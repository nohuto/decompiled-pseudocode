/*
 * XREFs of _lambda_06ea018c4028a7427a91b6d5b7b0e82b_::_lambda_invoker_cdecl_ @ 0x180195EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1800FCB6C (-PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 */

void __fastcall lambda_06ea018c4028a7427a91b6d5b7b0e82b_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        struct IUnknown *Context,
        PTP_TIMER Timer)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CToastCenterExperienceManager::PostTargetedMessage(Context, 3u);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x355,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
}
