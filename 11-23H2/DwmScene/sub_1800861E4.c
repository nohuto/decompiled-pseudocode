/*
 * XREFs of sub_1800861E4 @ 0x1800861E4
 * Callers:
 *     sub_180086AC4 @ 0x180086AC4 (sub_180086AC4.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_180087EDC @ 0x180087EDC (sub_180087EDC.c)
 */

char *__fastcall sub_1800861E4(char **a1, char *a2, _OWORD *a3)
{
  unsigned __int64 v3; // rdi
  signed __int64 v4; // r14
  __int64 v6; // rax
  char *v7; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  _OWORD *v13; // rax
  _OWORD *v14; // r10
  char *v15; // r14
  char *v16; // r8
  char *v17; // rcx
  _OWORD *v18; // rdx
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  char *v21; // rdx
  signed __int64 v22; // rcx

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  v7 = a2;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  v12 = sub_180010B48(v3);
  v13 = (_OWORD *)sub_18001090C(v12);
  v14 = v13;
  v15 = (char *)v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  *(_OWORD *)v15 = *a3;
  v16 = a1[1];
  v17 = *a1;
  if ( v7 == v16 )
  {
    v18 = v13;
    while ( v17 != v16 )
    {
      v19 = *(_OWORD *)v17;
      v17 += 16;
      *v18++ = v19;
    }
  }
  else
  {
    while ( v17 != v7 )
    {
      v20 = *(_OWORD *)v17;
      v17 += 16;
      *v13++ = v20;
    }
    v21 = a1[1];
    if ( v7 != v21 )
    {
      v22 = v15 - v7;
      do
      {
        *(_OWORD *)&v7[v22 + 16] = *(_OWORD *)v7;
        v7 += 16;
      }
      while ( v7 != v21 );
    }
  }
  sub_180087EDC(a1, v14, v9, v3);
  return v15;
}
