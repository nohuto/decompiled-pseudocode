/*
 * XREFs of sub_1800299D8 @ 0x1800299D8
 * Callers:
 *     sub_180029E3C @ 0x180029E3C (sub_180029E3C.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_18002A48C @ 0x18002A48C (sub_18002A48C.c)
 */

char *__fastcall sub_1800299D8(__int128 **a1, char *a2, _QWORD *a3, char *a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r14
  __int64 v7; // rax
  __int128 *v9; // rbx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  _OWORD *v15; // rax
  char *v16; // r14
  _OWORD *v17; // r10
  __int128 *v18; // rdx
  __int128 *v19; // rcx
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  __int128 *v22; // rdx
  _OWORD *v23; // rcx
  __int128 v24; // xmm0

  v4 = 0xFFFFFFFFFFFFFFFLL;
  v5 = a2 - (char *)*a1;
  v7 = a1[1] - *a1;
  v9 = (__int128 *)a2;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v11 = v7 + 1;
  v12 = a1[2] - *a1;
  v13 = v12 >> 1;
  if ( v12 <= 0xFFFFFFFFFFFFFFFLL - (v12 >> 1) )
  {
    v4 = v13 + v12;
    if ( v13 + v12 < v11 )
      v4 = v7 + 1;
  }
  v14 = sub_180010B48(v4);
  v15 = (_OWORD *)sub_18001090C(v14);
  v16 = (char *)v15 + (v5 & 0xFFFFFFFFFFFFFFF0uLL);
  v17 = v15;
  *(_QWORD *)v16 = *a3;
  v16[8] = *a4;
  v18 = a1[1];
  v19 = *a1;
  if ( v9 == v18 )
  {
    while ( v19 != v18 )
    {
      v20 = *v19++;
      *v15++ = v20;
    }
  }
  else
  {
    while ( v19 != v9 )
    {
      v21 = *v19++;
      *v15++ = v21;
    }
    v22 = a1[1];
    if ( v9 != v22 )
    {
      v23 = v16 + 16;
      do
      {
        v24 = *v9++;
        *v23++ = v24;
      }
      while ( v9 != v22 );
    }
  }
  sub_18002A48C(a1, v17, v11, v4);
  return v16;
}
