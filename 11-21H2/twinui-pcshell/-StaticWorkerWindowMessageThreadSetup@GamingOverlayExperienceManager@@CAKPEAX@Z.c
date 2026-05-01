/*
 * XREFs of ?StaticWorkerWindowMessageThreadSetup@GamingOverlayExperienceManager@@CAKPEAX@Z @ 0x18033A620
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::StaticWorkerWindowMessageThreadSetup(__int64 *Parameter)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( Parameter )
  {
    v2 = *Parameter;
    v3 = SHCreateWorkerWindowW(GamingOverlayExperienceManager::StaticWndProc, -3LL, 0LL);
    Parameter[2] = v3;
    *(_QWORD *)(v2 + 448) = v3;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2E1,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80004003LL);
  }
  return 0LL;
}
