/*
 * XREFs of HalpAcpiDetectPiix4Work @ 0x140834D50
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403A58A0 (HalpMmAllocCtxFree.c)
 *     HalpPiix4Detect @ 0x140A8F1A4 (HalpPiix4Detect.c)
 */

__int64 __fastcall HalpAcpiDetectPiix4Work(__int64 a1)
{
  __int64 v1; // rcx

  HalpMmAllocCtxFree(a1, a1);
  LOBYTE(v1) = 1;
  return HalpPiix4Detect(v1);
}
