/*
 * XREFs of RtlAddRange @ 0x14083A010
 * Callers:
 *     sub_140838FBC @ 0x140838FBC (sub_140838FBC.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1408391E8 (ArbAddMmConfigRangeAsBootReserved.c)
 *     sub_140839E40 @ 0x140839E40 (sub_140839E40.c)
 *     RtlInvertRangeListEx @ 0x140839EF0 (RtlInvertRangeListEx.c)
 *     sub_140839FC0 @ 0x140839FC0 (sub_140839FC0.c)
 *     sub_14083A5A0 @ 0x14083A5A0 (sub_14083A5A0.c)
 *     sub_14090B3B0 @ 0x14090B3B0 (sub_14090B3B0.c)
 *     sub_140962930 @ 0x140962930 (sub_140962930.c)
 * Callees:
 *     sub_1408398AC @ 0x1408398AC (sub_1408398AC.c)
 *     sub_14083A0B4 @ 0x14083A0B4 (sub_14083A0B4.c)
 *     sub_14083A160 @ 0x14083A160 (sub_14083A160.c)
 */

__int64 __fastcall RtlAddRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // r10d
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // r8

  v7 = a3;
  if ( a3 < a2 )
    return 3221225485LL;
  LOBYTE(a3) = a4;
  v9 = sub_14083A160(a2, v7, a3, a6, a7);
  v10 = v9;
  if ( !v9 )
    return 3221225473LL;
  if ( (a5 & 2) != 0 )
    *(_BYTE *)(v9 + 33) |= 1u;
  if ( (a5 & 0x10) != 0 )
    *(_BYTE *)(v9 + 33) |= 0x10u;
  v12 = sub_14083A0B4(a1, v9, a5);
  if ( v12 < 0 )
  {
    sub_1408398AC(v10, v11, v13);
  }
  else
  {
    ++*(_DWORD *)(a1 + 20);
    ++*(_DWORD *)(a1 + 24);
  }
  return (unsigned int)v12;
}
