/*
 * XREFs of sub_140504520 @ 0x140504520
 * Callers:
 *     sub_140517AD4 @ 0x140517AD4 (sub_140517AD4.c)
 * Callees:
 *     sub_14045699C @ 0x14045699C (sub_14045699C.c)
 *     sub_140457A42 @ 0x140457A42 (sub_140457A42.c)
 *     sub_140513310 @ 0x140513310 (sub_140513310.c)
 */

void __fastcall sub_140504520(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int *a5, char a6, char a7, __int64 *a8)
{
  unsigned int v12; // r14d
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+28h] [rbp-30h]

  v12 = *a5;
  if ( (unsigned int)sub_14045699C(a1, a2, 0LL, a4, a6, *a5) != v12 || *(_BYTE *)(a3 + 64) )
  {
    *a8 = *(_QWORD *)a3 + (a4 & 0xFFF);
    if ( a6 )
    {
      sub_140457A42(a1, a2, a4, (_QWORD *)a3, v12, a6, 0, a7);
    }
    else if ( !*(_BYTE *)(a1 + 437) )
    {
      sub_140457A42(a1, a2, a4, (_QWORD *)a3, v12, 0, 1, a7);
    }
  }
  else
  {
    v13 = (a4 & 0xFFF)
        + (*(_QWORD *)(a2 + 8LL * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48) << 12);
    *a8 = v13;
    LOBYTE(v15) = a7;
    LOBYTE(v14) = a6;
    sub_140513310(v13, a2, a4, v12, v14, v15);
  }
}
