/*
 * XREFs of sub_1406F5F44 @ 0x1406F5F44
 * Callers:
 *     sub_1406CF50C @ 0x1406CF50C (sub_1406CF50C.c)
 *     sub_1406F7664 @ 0x1406F7664 (sub_1406F7664.c)
 * Callees:
 *     sub_1406F5F80 @ 0x1406F5F80 (sub_1406F5F80.c)
 */

__int64 __fastcall sub_1406F5F44(int a1, __int64 a2, __int64 a3, int a4)
{
  return sub_1406F5F80(a1, a4 == 0, (a3 + 4095) & 0xFFFFF000, 0, a2, (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
}
