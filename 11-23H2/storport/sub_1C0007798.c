/*
 * XREFs of sub_1C0007798 @ 0x1C0007798
 * Callers:
 *     sub_1C0011820 @ 0x1C0011820 (sub_1C0011820.c)
 *     sub_1C0011880 @ 0x1C0011880 (sub_1C0011880.c)
 *     sub_1C0011950 @ 0x1C0011950 (sub_1C0011950.c)
 *     sub_1C0011B08 @ 0x1C0011B08 (sub_1C0011B08.c)
 *     sub_1C0011B58 @ 0x1C0011B58 (sub_1C0011B58.c)
 *     sub_1C0011BE0 @ 0x1C0011BE0 (sub_1C0011BE0.c)
 *     sub_1C0011DBC @ 0x1C0011DBC (sub_1C0011DBC.c)
 *     sub_1C00166D4 @ 0x1C00166D4 (sub_1C00166D4.c)
 *     sub_1C00203B0 @ 0x1C00203B0 (sub_1C00203B0.c)
 *     sub_1C0020470 @ 0x1C0020470 (sub_1C0020470.c)
 *     sub_1C0020508 @ 0x1C0020508 (sub_1C0020508.c)
 *     sub_1C003576C @ 0x1C003576C (sub_1C003576C.c)
 *     sub_1C00389F4 @ 0x1C00389F4 (sub_1C00389F4.c)
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 *     sub_1C003A010 @ 0x1C003A010 (sub_1C003A010.c)
 *     sub_1C003AB20 @ 0x1C003AB20 (sub_1C003AB20.c)
 *     Callback @ 0x1C003D660 (Callback.c)
 *     sub_1C004C284 @ 0x1C004C284 (sub_1C004C284.c)
 *     sub_1C004C30C @ 0x1C004C30C (sub_1C004C30C.c)
 *     sub_1C004C390 @ 0x1C004C390 (sub_1C004C390.c)
 *     sub_1C004C4E8 @ 0x1C004C4E8 (sub_1C004C4E8.c)
 *     sub_1C004DFA0 @ 0x1C004DFA0 (sub_1C004DFA0.c)
 *     sub_1C004E300 @ 0x1C004E300 (sub_1C004E300.c)
 *     sub_1C004E5E0 @ 0x1C004E5E0 (sub_1C004E5E0.c)
 *     sub_1C004E850 @ 0x1C004E850 (sub_1C004E850.c)
 *     sub_1C004E920 @ 0x1C004E920 (sub_1C004E920.c)
 *     sub_1C004EBE0 @ 0x1C004EBE0 (sub_1C004EBE0.c)
 *     sub_1C0067AB0 @ 0x1C0067AB0 (sub_1C0067AB0.c)
 *     sub_1C0067B7C @ 0x1C0067B7C (sub_1C0067B7C.c)
 *     sub_1C0067C80 @ 0x1C0067C80 (sub_1C0067C80.c)
 *     sub_1C0067D10 @ 0x1C0067D10 (sub_1C0067D10.c)
 *     sub_1C00A0EE4 @ 0x1C00A0EE4 (sub_1C00A0EE4.c)
 *     sub_1C00A73E4 @ 0x1C00A73E4 (sub_1C00A73E4.c)
 *     sub_1C00A84AC @ 0x1C00A84AC (sub_1C00A84AC.c)
 *     sub_1C00A85AC @ 0x1C00A85AC (sub_1C00A85AC.c)
 *     sub_1C00A87D8 @ 0x1C00A87D8 (sub_1C00A87D8.c)
 * Callees:
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 *     sub_1C0022E74 @ 0x1C0022E74 (sub_1C0022E74.c)
 */

__int64 __fastcall sub_1C0007798(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned int v4; // edi
  __int64 v6; // rcx
  _DWORD *v7; // r9
  __int64 v8; // rcx
  _DWORD *v9; // r9
  __int64 v10; // rcx
  _DWORD *v11; // r9
  __int64 v12; // rcx
  _DWORD *v13; // r9
  __int64 v14; // rcx
  _DWORD *v15; // r9

  v2 = a1 + 336;
  v3 = a2;
  if ( (*(_BYTE *)(a1 + 584) & 0x10) != 0 )
    return *(unsigned __int8 *)(v3 + v2 + 276);
  *(_OWORD *)(a1 + 608) = 0LL;
  *(_OWORD *)(a1 + 624) = 0LL;
  *(_DWORD *)(a1 + 608) = 19;
  v4 = 0;
  if ( (unsigned __int8)sub_1C0022E74(a1 + 336, 2LL) )
    *v7 = 20;
  if ( (unsigned __int8)sub_1C0022E74(v6, 3LL) )
    *v9 = 21;
  if ( (unsigned __int8)sub_1C0022E74(v8, 5LL) )
    *v11 = 22;
  if ( (unsigned __int8)sub_1C0022E74(v10, 6LL) )
    *v13 = 23;
  if ( (unsigned __int8)sub_1C0022E74(v12, 7LL) )
    *v15 = 24;
  if ( (int)sub_1C001A364(v14, 0LL, v15) >= 0 )
  {
    *(_BYTE *)(v2 + 248) |= 0x10u;
    return *(unsigned __int8 *)(v3 + v2 + 276);
  }
  return v4;
}
