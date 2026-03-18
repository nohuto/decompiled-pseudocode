/*
 * XREFs of ViTargetDriversFreeVerifiedData @ 0x1405FF00C
 * Callers:
 *     VfTargetDriversDisableVerifier @ 0x140A8AAE0 (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140A8AB50 (VfTargetDriversEnableVerifier.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall ViTargetDriversFreeVerifiedData(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x44566656u);
}
