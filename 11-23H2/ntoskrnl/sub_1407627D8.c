/*
 * XREFs of sub_1407627D8 @ 0x1407627D8
 * Callers:
 *     sub_14076286C @ 0x14076286C (sub_14076286C.c)
 *     sub_1407E9D74 @ 0x1407E9D74 (sub_1407E9D74.c)
 * Callees:
 *     sub_140762AA4 @ 0x140762AA4 (sub_140762AA4.c)
 */

__int64 __fastcall sub_1407627D8(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // esi
  int *v4; // rdi
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // rbx

  v3 = 0;
  v4 = (int *)(a2 + 16);
  if ( a3 <= -1 )
    a3 = *v4;
  v7 = *v4;
  if ( a3 > (unsigned int)*v4 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( a3 > 0 )
  {
    v8 = (unsigned int)a3;
    do
    {
      v9 = *(_QWORD *)(a2 + 24) + 32LL * (unsigned int)(v7 - 1);
      sub_140762AA4(a1, *(_QWORD *)v9);
      *(_OWORD *)v9 = 0LL;
      *(_OWORD *)(v9 + 16) = 0LL;
      v7 = --*v4;
      --v8;
    }
    while ( v8 );
  }
  return v3;
}
