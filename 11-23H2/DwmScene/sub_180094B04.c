/*
 * XREFs of sub_180094B04 @ 0x180094B04
 * Callers:
 *     sub_180095A60 @ 0x180095A60 (sub_180095A60.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_180095BB4 @ 0x180095BB4 (sub_180095BB4.c)
 */

char *__fastcall sub_180094B04(__int128 **a1, char *a2, _DWORD *a3, __int64 *a4)
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
  __int64 v16; // rdx
  char *v17; // r14
  _OWORD *v18; // r10
  __int128 *v19; // rdx
  __int128 *v20; // rcx
  __int128 v21; // xmm0
  __int128 v22; // xmm0
  __int128 *v23; // rdx
  _OWORD *v24; // rcx
  __int128 v25; // xmm0

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
  v16 = *a4;
  v17 = (char *)v15 + (v5 & 0xFFFFFFFFFFFFFFF0uLL);
  v18 = v15;
  *(_DWORD *)v17 = *a3;
  *((_QWORD *)v17 + 1) = v16;
  v19 = a1[1];
  v20 = *a1;
  if ( v9 == v19 )
  {
    while ( v20 != v19 )
    {
      v21 = *v20++;
      *v15++ = v21;
    }
  }
  else
  {
    while ( v20 != v9 )
    {
      v22 = *v20++;
      *v15++ = v22;
    }
    v23 = a1[1];
    if ( v9 != v23 )
    {
      v24 = v17 + 16;
      do
      {
        v25 = *v9++;
        *v24++ = v25;
      }
      while ( v9 != v23 );
    }
  }
  sub_180095BB4(a1, v18, v11, v4);
  return v17;
}
