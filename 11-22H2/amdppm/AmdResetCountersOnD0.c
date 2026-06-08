/*
 * XREFs of AmdResetCountersOnD0 @ 0x1C00030D0
 * Callers:
 *     <none>
 * Callees:
 *     AmdPctSnapPlatformCtrsEx @ 0x1C0002E8C (AmdPctSnapPlatformCtrsEx.c)
 */

__int64 __fastcall AmdResetCountersOnD0(unsigned int *a1)
{
  return AmdPctSnapPlatformCtrsEx(a1, 0x800000000000LL, 1);
}
