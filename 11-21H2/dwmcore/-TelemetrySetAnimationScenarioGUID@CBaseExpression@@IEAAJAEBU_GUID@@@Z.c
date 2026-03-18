/*
 * XREFs of ?TelemetrySetAnimationScenarioGUID@CBaseExpression@@IEAAJAEBU_GUID@@@Z @ 0x180042EAC
 * Callers:
 *     ?ProcessTelemetrySetAnimationScenarioGUID@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID@@@Z @ 0x180042E9C (-ProcessTelemetrySetAnimationScenarioGUID@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMI.c)
 *     ?ProcessTelemetrySetAnimationScenarioGUID@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID@@@Z @ 0x180227460 (-ProcessTelemetrySetAnimationScenarioGUID@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMIL.c)
 * Callees:
 *     ?SetAnimationScenarioGUID@CBaseExpression@@IEAAXU_GUID@@@Z @ 0x180042EF8 (-SetAnimationScenarioGUID@CBaseExpression@@IEAAXU_GUID@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CBaseExpression::TelemetrySetAnimationScenarioGUID(CBaseExpression *this, const struct _GUID *a2)
{
  struct _GUID v3; // [rsp+20h] [rbp-18h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(int *)(*((_QWORD *)this + 41) + 4LL) < 0 )
    ModuleFailFastForHRESULT(2291662981LL, retaddr);
  if ( (*((_BYTE *)this + 232) & 0x20) != 0 )
    ModuleFailFastForHRESULT(2291662981LL, retaddr);
  v3 = *a2;
  CBaseExpression::SetAnimationScenarioGUID(this, &v3);
  return 0LL;
}
