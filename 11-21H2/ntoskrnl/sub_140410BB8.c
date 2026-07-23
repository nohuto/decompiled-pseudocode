/*
 * XREFs of sub_140410BB8 @ 0x140410BB8
 * Callers:
 *     sub_140401154 @ 0x140401154 (sub_140401154.c)
 * Callees:
 *     sub_140410C24 @ 0x140410C24 (sub_140410C24.c)
 *     sub_140410D50 @ 0x140410D50 (sub_140410D50.c)
 */

__int64 __fastcall sub_140410BB8(int a1, int a2, int a3, unsigned int a4, char a5, __int64 a6, __int64 a7, __int64 a8)
{
  if ( (a5 & 1) != 0 && a4 <= 0x20 )
    return sub_140410C24(a1, a2, a3, a6, a7, a8);
  else
    return sub_140410D50(a1, a2, a3, a4, a6, a7, a8);
}
