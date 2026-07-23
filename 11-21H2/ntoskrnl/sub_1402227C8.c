/*
 * XREFs of sub_1402227C8 @ 0x1402227C8
 * Callers:
 *     sub_1403C81D0 @ 0x1403C81D0 (sub_1403C81D0.c)
 * Callees:
 *     sub_14022298C @ 0x14022298C (sub_14022298C.c)
 *     sub_140222A20 @ 0x140222A20 (sub_140222A20.c)
 */

__int64 sub_1402227C8()
{
  __int64 v0; // rbx
  unsigned int v1; // esi
  __int64 v2; // rbp
  __int64 *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  _DWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int i; // edi
  __int64 v12; // rsi
  char *v13; // rbx
  __int64 result; // rax
  __int64 *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx

  v0 = 9LL;
  v1 = 3 * dword_140D06884;
  if ( dword_140C4EF5C == (_DWORD)dword_140D06884 )
  {
    v15 = (__int64 *)((char *)KeGetCurrentPrcb() + 2056);
    do
    {
      v16 = *v15;
      if ( *v15 )
      {
        v17 = (unsigned int)(*(_DWORD *)(v16 + 24) - *(_DWORD *)(v16 + 84));
        *(_DWORD *)(v16 + 84) = *(_DWORD *)(v16 + 24);
        sub_14022298C(v16, v17, v1);
      }
      v15 += 2;
      --v0;
    }
    while ( v0 );
  }
  else
  {
    v2 = qword_140D088C0[dword_140C4EF5C];
    v3 = (__int64 *)(v2 + 2048);
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v5 = (unsigned int)(*(_DWORD *)(v4 + 24) - *(_DWORD *)(v4 + 84));
        *(_DWORD *)(v4 + 84) = *(_DWORD *)(v4 + 24);
        sub_14022298C(v4, v5, v1);
      }
      v3 += 2;
      --v0;
    }
    while ( v0 );
    v6 = (_DWORD *)(v2 + 2388);
    v7 = 32LL;
    do
    {
      v8 = (unsigned int)(*(v6 - 16) - *(v6 - 1) - (*(v6 - 15) - *v6));
      *v6 = *(v6 - 15);
      sub_14022298C(v6 - 21, v8, v1);
      v9 = (unsigned int)(v6[752] - v6[767] - (v6[753] - v6[768]));
      v6[768] = v6[753];
      sub_14022298C(v6 + 747, v9, v1);
      v10 = (unsigned int)(v6[1520] - v6[1535] - (v6[1521] - v6[1536]));
      v6[1536] = v6[1521];
      sub_14022298C(v6 + 1515, v10, v1);
      v6 += 24;
      --v7;
    }
    while ( v7 );
  }
  for ( i = 0; i < dword_140C5EA20; ++i )
  {
    v12 = 2LL;
    v13 = (char *)&unk_140C5EA80 + 8384 * i;
    do
    {
      sub_140222A20(v13);
      v13 += 4160;
      --v12;
    }
    while ( v12 );
  }
  ++dword_140C4EF5C;
  result = (unsigned int)dword_140D06884;
  if ( dword_140C4EF5C > (unsigned int)dword_140D06884 )
    dword_140C4EF5C = 0;
  return result;
}
