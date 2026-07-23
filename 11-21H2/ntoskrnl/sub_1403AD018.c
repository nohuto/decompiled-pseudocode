/*
 * XREFs of sub_1403AD018 @ 0x1403AD018
 * Callers:
 *     sub_140264D88 @ 0x140264D88 (sub_140264D88.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140599EBC @ 0x140599EBC (sub_140599EBC.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1403AD018(__int64 a1, unsigned __int64 a2, __int16 a3)
{
  _BOOL8 result; // rax
  int v4; // r9d

  result = a2 >= 0x9F
        || (a3 & 0x2000) != 0
        || (v4 = *((_DWORD *)KeGetCurrentThread() + 345), (v4 & 0xC) == 8)
        || (a2 >= 0x20 || (ULONG_PTR *)a1 != &StartContext)
        && ((a3 & 4) != 0 || (v4 & 2) != 0 && a2 >= 0x21 || (*(_DWORD *)(a1 + 4) & 0x20) != 0);
  return result;
}
