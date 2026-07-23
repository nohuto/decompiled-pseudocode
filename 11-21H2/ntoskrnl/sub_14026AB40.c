/*
 * XREFs of sub_14026AB40 @ 0x14026AB40
 * Callers:
 *     sub_1406F2C30 @ 0x1406F2C30 (sub_1406F2C30.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14026AB40(unsigned int a1)
{
  return a1 != 31 && a1 != 24 && (a1 & 0xFFFFFFF8) != 0x10 && a1 < 0x1E;
}
