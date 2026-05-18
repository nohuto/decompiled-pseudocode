/*
 * XREFs of sub_1800118B0 @ 0x1800118B0
 * Callers:
 *     sub_1800109F0 @ 0x1800109F0 (sub_1800109F0.c)
 *     sub_18002E6B4 @ 0x18002E6B4 (sub_18002E6B4.c)
 *     sub_18002E7AC @ 0x18002E7AC (sub_18002E7AC.c)
 *     sub_18002F280 @ 0x18002F280 (sub_18002F280.c)
 *     sub_180056CD4 @ 0x180056CD4 (sub_180056CD4.c)
 *     sub_18005F0EC @ 0x18005F0EC (sub_18005F0EC.c)
 *     sub_180071228 @ 0x180071228 (sub_180071228.c)
 *     sub_180093AFC @ 0x180093AFC (sub_180093AFC.c)
 *     sub_180097288 @ 0x180097288 (sub_180097288.c)
 *     sub_180097890 @ 0x180097890 (sub_180097890.c)
 *     sub_18009844C @ 0x18009844C (sub_18009844C.c)
 *     sub_1800E0590 @ 0x1800E0590 (sub_1800E0590.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800118B0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0xFFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 4;
  v4 = v3 >> 1;
  if ( v3 <= 0xFFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
