/*
 * XREFs of sub_18000FCC0 @ 0x18000FCC0
 * Callers:
 *     sub_18000D1C0 @ 0x18000D1C0 (sub_18000D1C0.c)
 *     sub_18000FBE4 @ 0x18000FBE4 (sub_18000FBE4.c)
 *     sub_18000FC1C @ 0x18000FC1C (sub_18000FC1C.c)
 * Callees:
 *     sub_18000D18C @ 0x18000D18C (sub_18000D18C.c)
 *     sub_18000DD90 @ 0x18000DD90 (sub_18000DD90.c)
 *     sub_18000FDC4 @ 0x18000FDC4 (sub_18000FDC4.c)
 *     sub_1800106C4 @ 0x1800106C4 (sub_1800106C4.c)
 *     sub_1800118FC @ 0x1800118FC (sub_1800118FC.c)
 */

char __fastcall sub_18000FCC0(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v11; // rdx
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF

  if ( (unsigned __int8)sub_18000FDC4(a1, a2, a3, a4, a5, a6) )
    return 1;
  v11 = a3 + a5 + 32;
  if ( *(_QWORD *)(a1 + 24) )
  {
    if ( *(_BYTE *)(a1 + 58) )
      sub_1800118FC(a1 + 24, v11);
  }
  else
  {
    v12 = 0LL;
    v13 = 0LL;
    if ( (unsigned __int8)sub_1800118FC(&v12, v11 + 10) )
    {
      sub_1800106C4(a1, v12, 0LL, v13 - v12);
      sub_18000D18C((__int64 *)(a1 + 48), (__int64 *)&v13 + 1);
      *(_BYTE *)(a1 + 58) = 1;
    }
    if ( *((_QWORD *)&v13 + 1) )
      sub_18000DD90(*((void **)&v13 + 1));
  }
  return sub_18000FDC4(a1, a2, a3, a4, a5, a6);
}
