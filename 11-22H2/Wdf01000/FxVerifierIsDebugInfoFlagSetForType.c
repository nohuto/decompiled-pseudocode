/*
 * XREFs of FxVerifierIsDebugInfoFlagSetForType @ 0x1C0044B68
 * Callers:
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C00460E8 (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAD98 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxVerifierIsDebugInfoFlagSetForType(
        FxObjectDebugInfo *DebugInfo,
        unsigned __int16 ObjectType,
        FxObjectDebugInfoFlags Flag)
{
  __int64 v3; // rax
  unsigned __int16 *p_ObjectType; // r9
  FxObjectDebugInfo *v5; // r10

  v3 = 0LL;
  if ( !FxObjectsInfoCount )
    return 0;
  p_ObjectType = &FxObjectsInfo[0].ObjectType;
  v5 = DebugInfo;
  while ( ObjectType != v5->ObjectType )
  {
    if ( ObjectType > *p_ObjectType )
    {
      v3 = (unsigned int)(v3 + 1);
      ++v5;
      p_ObjectType += 12;
      if ( (unsigned int)v3 < FxObjectsInfoCount )
        continue;
    }
    return 0;
  }
  return (unsigned __int16)(DebugInfo[v3].u.DebugFlags & Flag) != 0;
}
