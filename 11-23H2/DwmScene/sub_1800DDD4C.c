/*
 * XREFs of sub_1800DDD4C @ 0x1800DDD4C
 * Callers:
 *     sub_1800DD780 @ 0x1800DD780 (sub_1800DD780.c)
 * Callees:
 *     sub_18001E9BC @ 0x18001E9BC (sub_18001E9BC.c)
 */

__int64 __fastcall sub_1800DDD4C(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _OWORD *v6; // rcx

  v3 = a3;
  v4 = (_QWORD *)(a1 + 24);
  v5 = a3 - a1;
  while ( 1 )
  {
    v6 = v4 - 3;
    if ( v4 - 3 == a2 )
      break;
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)((char *)v4 + v5 - 8) = 0LL;
    *(_QWORD *)((char *)v4 + v5) = 0LL;
    *(_OWORD *)v3 = *v6;
    *(_OWORD *)(v3 + 16) = v6[1];
    v3 += 32LL;
    *(v4 - 1) = 0LL;
    *v4 = 7LL;
    v4 += 4;
    *(_WORD *)v6 = 0;
  }
  sub_18001E9BC(v3, v3);
  return v3;
}
