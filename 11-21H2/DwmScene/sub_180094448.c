/*
 * XREFs of sub_180094448 @ 0x180094448
 * Callers:
 *     sub_180094A54 @ 0x180094A54 (sub_180094A54.c)
 *     sub_18009ADA0 @ 0x18009ADA0 (sub_18009ADA0.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180093FA4 @ 0x180093FA4 (sub_180093FA4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180094448(__int64 a1, __int64 a2)
{
  __int64 *v4; // r14
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rax

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v4 = (__int64 *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 24);
  if ( v5 != v6 )
  {
    if ( 0xAAAAAAAAAAAAAAABuLL * ((v6 - v5) >> 4) > 0x555555555555555LL )
      sub_1800120D4();
    v7 = sub_180011088(16 * ((v6 - v5) >> 4));
    *v4 = v7;
    v4[1] = v7;
    v4[2] = 16 * ((v6 - v5) >> 4) + v7;
    v4[1] = sub_180093FA4(v5, v6, *v4);
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  return a1;
}
