/*
 * XREFs of sub_1800926E0 @ 0x1800926E0
 * Callers:
 *     sub_180056510 @ 0x180056510 (sub_180056510.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800907A8 @ 0x1800907A8 (sub_1800907A8.c)
 *     sub_1800907E8 @ 0x1800907E8 (sub_1800907E8.c)
 *     sub_180092DD8 @ 0x180092DD8 (sub_180092DD8.c)
 *     sub_1800933B8 @ 0x1800933B8 (sub_1800933B8.c)
 *     sub_1800935DC @ 0x1800935DC (sub_1800935DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800926E0(__int64 a1)
{
  unsigned __int16 i; // bx
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  sub_180092DD8(a1, v6);
  for ( i = 0; i < (unsigned int)sub_1800907A8(v6[0]); ++i )
  {
    v3 = sub_1800907E8(v6[0], i);
    v4 = v3;
    if ( *(_DWORD *)(v3 + 36) == 8 )
    {
      v7 = 0LL;
      sub_1800933B8(a1, v3, &v7);
      v7 = 0LL;
      sub_1800935DC(a1, v4, &v7);
    }
  }
  return sub_180010910((__int64)v6);
}
