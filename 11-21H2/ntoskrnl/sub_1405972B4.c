/*
 * XREFs of sub_1405972B4 @ 0x1405972B4
 * Callers:
 *     sub_140597390 @ 0x140597390 (sub_140597390.c)
 * Callees:
 *     sub_140274D10 @ 0x140274D10 (sub_140274D10.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1403735A0 @ 0x1403735A0 (sub_1403735A0.c)
 *     sub_140373880 @ 0x140373880 (sub_140373880.c)
 */

__int64 __fastcall sub_1405972B4(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _DWORD *a7)
{
  __int64 v7; // rsi

  v7 = *(_QWORD *)(a1 + 24);
  if ( !(unsigned int)sub_1403735A0(v7, a3, a4, (int *)a5, a6, a7) )
    return 0LL;
  sub_1402CF280(a5 + 64, a3, 1LL, 0);
  if ( (*(_DWORD *)a5 & 0x100) != 0 )
    sub_140274D10(v7, a2);
  if ( ((++*(_QWORD *)(a5 + 16), *(_QWORD *)(a5 + 16) == *(_QWORD *)(a5 + 8))
     || *(_DWORD *)(a5 + 76) == *(_DWORD *)(a5 + 72))
    && (sub_140373880(a1, a5), *(_QWORD *)(a5 + 16) == *(_QWORD *)(a5 + 8)) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
