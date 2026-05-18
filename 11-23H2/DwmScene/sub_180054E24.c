/*
 * XREFs of sub_180054E24 @ 0x180054E24
 * Callers:
 *     sub_180054FB4 @ 0x180054FB4 (sub_180054FB4.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18001E9F4 @ 0x18001E9F4 (sub_18001E9F4.c)
 *     sub_18001F588 @ 0x18001F588 (sub_18001F588.c)
 *     sub_180056B44 @ 0x180056B44 (sub_180056B44.c)
 */

unsigned __int64 __fastcall sub_180054E24(
        char **a1,
        char *a2,
        __int64 *a3,
        _QWORD *a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8)
{
  char *v8; // rsi
  __int64 v11; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rax
  __int64 v17; // r11
  unsigned __int64 v18; // rsi
  int v19; // r10d
  int v20; // edx
  __int64 v21; // rax
  int v22; // r9d
  int v23; // r8d
  _OWORD *v24; // rcx
  char *v25; // rdx
  char *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm1
  char *v29; // rdx
  _OWORD *v30; // rcx
  __int128 v31; // xmm1

  v8 = *a1;
  v11 = (a1[1] - *a1) >> 5;
  if ( v11 == 0x7FFFFFFFFFFFFFFLL )
    sub_180011B80();
  v14 = v11 + 1;
  v15 = sub_18001F588(a1, v11 + 1);
  v16 = sub_18001E9F4(v15);
  v17 = sub_18001090C(v16);
  v18 = ((a2 - v8) & 0xFFFFFFFFFFFFFFE0uLL) + v17;
  v19 = *a8;
  v20 = *a5;
  v21 = *a3;
  v22 = *a7;
  v23 = *a6;
  *(_QWORD *)(v18 + 8) = *a4;
  v24 = (_OWORD *)v17;
  *(_QWORD *)v18 = v21;
  *(_DWORD *)(v18 + 16) = v20;
  *(_DWORD *)(v18 + 20) = v23;
  *(_DWORD *)(v18 + 24) = v22;
  *(_DWORD *)(v18 + 28) = v19;
  v25 = a1[1];
  v26 = *a1;
  if ( a2 == v25 )
  {
    while ( v26 != v25 )
    {
      *v24 = *(_OWORD *)v26;
      v24 += 2;
      v27 = *((_OWORD *)v26 + 1);
      v26 += 32;
      *(v24 - 1) = v27;
    }
  }
  else
  {
    while ( v26 != a2 )
    {
      *v24 = *(_OWORD *)v26;
      v24 += 2;
      v28 = *((_OWORD *)v26 + 1);
      v26 += 32;
      *(v24 - 1) = v28;
    }
    v29 = a1[1];
    if ( a2 != v29 )
    {
      v30 = (_OWORD *)(v18 + 32);
      do
      {
        *v30 = *(_OWORD *)a2;
        v30 += 2;
        v31 = *((_OWORD *)a2 + 1);
        a2 += 32;
        *(v30 - 1) = v31;
      }
      while ( a2 != v29 );
    }
  }
  sub_180056B44(a1, v17, v14, v15);
  return v18;
}
