/*
 * XREFs of ?UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18011EE3C
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_85996e06432f790396f1fac53d3cb244___::Invoke @ 0x1801815D0 (CAsyncCallbackWithLambda__lambda_85996e06432f790396f1fac53d3cb244___--Invoke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18011EFB0 (-RegisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18011F90C (-UnregisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::UpdateHotkeyRegistrationsTask(GamingOverlayExperienceManager *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = GamingOverlayExperienceManager::UnregisterHotkeys(this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1064,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  v3 = GamingOverlayExperienceManager::RegisterHotkeys(this);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1065,
    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
