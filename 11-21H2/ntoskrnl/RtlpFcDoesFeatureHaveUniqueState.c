/*
 * XREFs of RtlpFcDoesFeatureHaveUniqueState @ 0x1409BF598
 * Callers:
 *     RtlpFcApplyUpdateAndAddFeature @ 0x1409BF0F8 (RtlpFcApplyUpdateAndAddFeature.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x1409BF208 (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcCreateAndAddFeatureFromUpdate @ 0x1409BF530 (RtlpFcCreateAndAddFeatureFromUpdate.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpFcDoesFeatureHaveUniqueState(_DWORD *a1)
{
  return *a1
      && ((a1[1] & 0x3F00) != 0
       || (((unsigned __int8)a1[1] | (unsigned __int8)(a1[1] >> 10)) & 0x30) != 0
       || (a1[1] & 0x40) != 0);
}
