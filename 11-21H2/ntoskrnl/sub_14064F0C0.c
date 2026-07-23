/*
 * XREFs of sub_14064F0C0 @ 0x14064F0C0
 * Callers:
 *     sub_14064F438 @ 0x14064F438 (sub_14064F438.c)
 * Callees:
 *     sub_1403A8C98 @ 0x1403A8C98 (sub_1403A8C98.c)
 *     sub_1403A9E4C @ 0x1403A9E4C (sub_1403A9E4C.c)
 *     sub_1403AA258 @ 0x1403AA258 (sub_1403AA258.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14064F0C0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int16 a4,
        __int16 a5,
        unsigned __int16 a6,
        unsigned int a7,
        _WORD *a8,
        _QWORD *a9,
        __int64 *a10)
{
  __int64 *v10; // r12
  __int64 v11; // rsi
  unsigned __int64 v12; // r15
  char *v13; // rax
  char *v14; // rdi
  _DWORD *v16; // rcx
  __int64 v17; // r8
  char *v18; // r13
  __int16 *v19; // rdx
  int v20; // eax
  int v21; // eax
  _DWORD *v22; // rdx
  _WORD *v23; // rdi
  char *v24; // r15
  char *v25; // r14
  char *v26; // rsi
  __int16 v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned __int16 *v30; // rbp
  unsigned __int16 v31; // r8
  __int64 v32; // rcx
  size_t v33; // r8
  __int64 v34; // r9
  __int16 v35; // cx
  __int16 v36; // dx
  __int16 v37; // ax
  unsigned __int16 v38; // r8
  __int16 v39; // r13
  __int16 v40; // r12
  __int64 v41; // r9
  __int64 v42; // r10
  __int64 v43; // rax
  __int16 v44; // cx
  __int16 v45; // ax
  _WORD *v46; // [rsp+20h] [rbp-68h]
  _DWORD *v47; // [rsp+28h] [rbp-60h]
  char *v48; // [rsp+38h] [rbp-50h]
  __int16 v52; // [rsp+A8h] [rbp+20h]
  __int16 v53; // [rsp+B0h] [rbp+28h]
  __int16 v54; // [rsp+B8h] [rbp+30h]

  v10 = a2;
  v11 = a4;
  v12 = a4 + a6 + 8 * (unsigned int)a4 + 2 * (a5 + 41);
  v13 = (char *)sub_1403AA258(v12, a10);
  v14 = v13;
  if ( !v13 )
    return 3221225626LL;
  memset(v13, 0, v12);
  v16 = v14 + 2;
  v17 = 4LL;
  v48 = v14;
  v18 = v14;
  *(_WORD *)v14 = a5;
  v19 = (__int16 *)(a3 + 2);
  do
  {
    v20 = *v19++;
    *v16++ = v20;
    --v17;
  }
  while ( v17 );
  v21 = *(_DWORD *)(v14 + 2);
  v22 = v14 + 18;
  *((_WORD *)v14 + 11) = a6;
  *((_WORD *)v14 + 12) = v11;
  v23 = v14 + 66;
  v47 = v22;
  *v22 = v21;
  v46 = v23;
  *(_QWORD *)(v18 + 26) = v23;
  v24 = (char *)&v23[a5];
  if ( a6 )
  {
    *(_QWORD *)(v18 + 34) = v24;
    v24 += a6;
    sub_1403A9E4C(a1, a7, a6, &v23[a5]);
    v22 = v47;
    v23 = *(_WORD **)(v18 + 26);
    v46 = v23;
  }
  v25 = &v24[v11];
  *(_QWORD *)(v18 + 42) = v24;
  *(_QWORD *)(v18 + 50) = &v24[v11];
  v26 = &v24[4 * (unsigned int)(v11 + 2) + v11];
  v54 = 0;
  *(_QWORD *)(v18 + 58) = v26;
  v27 = 0;
  v53 = 0;
  while ( 1 )
  {
    v28 = *v10;
    if ( (__int64 *)*v10 == v10 )
      break;
    if ( *(__int64 **)(v28 + 8) != v10 || (v29 = *(_QWORD *)v28, *(_QWORD *)(*(_QWORD *)v28 + 8LL) != v28) )
      __fastfail(3u);
    *v10 = v29;
    *(_QWORD *)(v29 + 8) = v10;
    v30 = *(unsigned __int16 **)(v28 + 16);
    if ( _bittest16((const signed __int16 *)(v28 + 24), 9u) )
    {
      *a8 = *(_WORD *)(v28 + 26);
      *v22 = *(_DWORD *)(v30 + 1);
    }
    v31 = 0;
    if ( (__int16)*v30 > 0 )
    {
      do
      {
        v32 = v31++;
        *v23++ = v27 + *(_WORD *)(*(_QWORD *)(v30 + 13) + 2 * v32);
      }
      while ( v31 < (__int16)*v30 );
      v46 = v23;
    }
    v33 = v30[12];
    v52 = v33 + v27;
    memmove(v24, *(const void **)(v30 + 21), v33);
    v34 = v30[12];
    v35 = 0x4000;
    v36 = *(_WORD *)(v28 + 24);
    v24 += v34;
    v37 = 0x4000;
    if ( (v36 & 8) != 0 )
    {
      v37 = *(_WORD *)(v28 + 32);
      v35 = v37;
    }
    else if ( (v36 & 0x40) != 0 )
    {
      v37 = *(_WORD *)(v28 + 32);
      v35 = *(_WORD *)(v28 + 34);
    }
    v38 = 0;
    if ( (_WORD)v34 )
    {
      v39 = v54;
      v40 = v53;
      v41 = v37;
      v42 = v35;
      do
      {
        *(_WORD *)v25 = *(_WORD *)(*(_QWORD *)(v30 + 25) + 4LL * v38);
        *(_WORD *)v26 = *(_WORD *)(*(_QWORD *)(v30 + 29) + 4LL * v38);
        *(_WORD *)v25 = v41 * *(__int16 *)v25 / 0x4000;
        v43 = v42 * *(__int16 *)v26 / 0x4000;
        *(_WORD *)v26 = v43;
        if ( !v38 )
        {
          *(_WORD *)v25 -= v39;
          *(_WORD *)v26 -= v40;
          v44 = *(_WORD *)(v28 + 24);
          LOWORD(v43) = *(_WORD *)v26;
          if ( (v44 & 2) != 0 )
          {
            if ( (v44 & 1) != 0 )
            {
              *(_WORD *)v25 += *(_WORD *)(v28 + 28);
              v45 = *(_WORD *)(v28 + 30);
            }
            else
            {
              *(_WORD *)v25 += *(char *)(v28 + 28);
              v45 = *(char *)(v28 + 29);
            }
            *(_WORD *)v26 += v45;
            LOWORD(v43) = *(_WORD *)v26;
          }
        }
        v39 += *(_WORD *)v25;
        v40 += v43;
        v25 += 4;
        v26 += 4;
        ++v38;
      }
      while ( v38 < v30[12] );
      v23 = v46;
      v53 = v40;
      v10 = a2;
      v54 = v39;
      v18 = v48;
    }
    sub_1403A8C98((__int64)v30, a10);
    sub_1403A8C98(v28, a10);
    v27 = v52;
    v22 = v47;
  }
  *a9 = v18;
  return 0LL;
}
