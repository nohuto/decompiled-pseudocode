/*
 * XREFs of CAsyncCallbackWithLambda__lambda_85996e06432f790396f1fac53d3cb244___::Invoke @ 0x1801815D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18011EE3C (-UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_85996e06432f790396f1fac53d3cb244___::Invoke(__int64 a1)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = GamingOverlayExperienceManager::UpdateHotkeyRegistrationsTask(*(GamingOverlayExperienceManager **)(a1 + 48));
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1058,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)updated);
  return 0LL;
}
