/*
 * XREFs of ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180076D84
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800745D0 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180076FE8 (-UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180077198 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x180076E08 (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 *     ?ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z @ 0x180076F24 (-ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z.c)
 */

const unsigned __int16 *__fastcall CAnimationTracking::GetScenarioName(
        CAnimationTracking *this,
        struct CAnimationTracking::AnimationScenarioRunningStatistics *a2,
        unsigned __int16 *a3)
{
  unsigned int v4; // r8d
  const struct _GUID *v5; // r9
  __int64 v7; // rax
  const unsigned __int16 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (const unsigned __int16 *)this;
  if ( *(_DWORD *)a2 )
  {
    v7 = *((_QWORD *)a2 + 20);
    if ( v7 )
    {
      if ( *(_WORD *)(v7 + 34) )
        return (const unsigned __int16 *)(v7 + *(unsigned __int16 *)(v7 + 34));
      else
        return 0LL;
    }
    else
    {
      return L"Unknown";
    }
  }
  else
  {
    v8 = 0LL;
    if ( (int)CAnimationTracking::ScenarioNameFromGuid((const struct _GUID *)((char *)a2 + 4), &v8) >= 0 )
      return v8;
    else
      CAnimationTracking::GuidToString(v5, a3, v4);
  }
  return a3;
}
