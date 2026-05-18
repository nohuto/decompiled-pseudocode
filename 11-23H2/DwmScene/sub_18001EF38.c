/*
 * XREFs of sub_18001EF38 @ 0x18001EF38
 * Callers:
 *     sub_180058B2C @ 0x180058B2C (sub_180058B2C.c)
 *     sub_1800DD780 @ 0x1800DD780 (sub_1800DD780.c)
 *     sub_1800DFC64 @ 0x1800DFC64 (sub_1800DFC64.c)
 * Callees:
 *     sub_18001E9BC @ 0x18001E9BC (sub_18001E9BC.c)
 */

__int64 __fastcall sub_18001EF38(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  _QWORD *v5; // rax

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a3 - (_QWORD)a1;
    v5 = a1 + 3;
    do
    {
      *(_QWORD *)v3 = 0LL;
      *(_QWORD *)((char *)v5 + v4 - 8) = 0LL;
      *(_QWORD *)((char *)v5 + v4) = 0LL;
      *(_OWORD *)v3 = *(_OWORD *)(v5 - 3);
      *(_OWORD *)(v3 + 16) = *(_OWORD *)(v5 - 1);
      *(v5 - 1) = 0LL;
      v3 += 32LL;
      *v5 = 7LL;
      *((_WORD *)v5 - 12) = 0;
      v5 += 4;
    }
    while ( v5 - 3 != a2 );
  }
  sub_18001E9BC(v3, v3);
  return v3;
}
