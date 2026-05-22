/*
 * XREFs of ?IsDetectedOrLostReport@MPCHandProcessor@@MEAA_NPEAULegacyInputInfo@@@Z @ 0x1800BF080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCHandProcessor::IsDetectedOrLostReport(MPCHandProcessor *this, struct LegacyInputInfo *a2)
{
  return (unsigned int)(*((_DWORD *)a2 + 16) - 4) <= 1;
}
