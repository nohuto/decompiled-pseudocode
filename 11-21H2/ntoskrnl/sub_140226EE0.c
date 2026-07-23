/*
 * XREFs of sub_140226EE0 @ 0x140226EE0
 * Callers:
 *     sub_140226E30 @ 0x140226E30 (sub_140226E30.c)
 *     sub_14045BF06 @ 0x14045BF06 (sub_14045BF06.c)
 * Callees:
 *     sub_140227020 @ 0x140227020 (sub_140227020.c)
 *     sub_140274D10 @ 0x140274D10 (sub_140274D10.c)
 *     sub_1402C1D70 @ 0x1402C1D70 (sub_1402C1D70.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_140226EE0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  BOOL v10; // r9d
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v8 = a2 << 25 >> 16;
  v12 = sub_140317A10(a2);
  v9 = 48 * (((unsigned __int64)sub_140317A10(&v12) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v10 = v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL;
  if ( !(unsigned int)sub_140227020(a1, a2, v9, v10, (__int64)&v12)
    || *(_WORD *)(v9 + 32) > 1u && (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    return 0LL;
  }
  if ( dword_140C52B68 )
    sub_140274D10(a1, a2);
  sub_1402CF280(a3, v8, 1LL, 0LL);
  if ( *(_DWORD *)(a3 + 12) == *(_DWORD *)(a3 + 8) )
    sub_1402C1D70(a1, a3, a4);
  return 1LL;
}
