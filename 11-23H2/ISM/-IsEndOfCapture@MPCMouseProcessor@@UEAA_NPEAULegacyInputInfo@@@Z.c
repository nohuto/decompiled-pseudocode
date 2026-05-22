/*
 * XREFs of ?IsEndOfCapture@MPCMouseProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1801E7650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCMouseProcessor::IsEndOfCapture(MPCMouseProcessor *this, struct LegacyInputInfo *a2)
{
  return (*((_BYTE *)this + 5260) & 0x70) == 0;
}
