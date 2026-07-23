/*
 * XREFs of sub_14040D5A0 @ 0x14040D5A0
 * Callers:
 *     sub_14040CD30 @ 0x14040CD30 (sub_14040CD30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14040D5A0(__int64 a1)
{
  int v1; // r8d
  int v2; // r8d

  v1 = a1 ^ (6 * (a1 & 6)) & 8;
  v2 = (2 - (2 - v1 * a1) * v1 * a1) * (2 - v1 * a1) * v1;
  return (2 - a1 * (unsigned int)(v2 * (2 - v2 * a1))) * (unsigned int)(v2 * (2 - v2 * a1));
}
