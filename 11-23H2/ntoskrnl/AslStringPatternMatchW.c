/*
 * XREFs of AslStringPatternMatchW @ 0x1408AC436
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066E334 (SdbpCheckApplicationTypeAttributes.c)
 * Callees:
 *     AslStringPatternMatchExW @ 0x1407C6B3C (AslStringPatternMatchExW.c)
 */

__int64 __fastcall AslStringPatternMatchW(__int16 *a1, _WORD *a2)
{
  return AslStringPatternMatchExW(a1, a2);
}
