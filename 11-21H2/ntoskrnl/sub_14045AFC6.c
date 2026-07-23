/*
 * XREFs of sub_14045AFC6 @ 0x14045AFC6
 * Callers:
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045ADBE @ 0x14045ADBE (sub_14045ADBE.c)
 *     sub_14045B3DA @ 0x14045B3DA (sub_14045B3DA.c)
 *     sub_14045B8E6 @ 0x14045B8E6 (sub_14045B8E6.c)
 *     sub_140573DBC @ 0x140573DBC (sub_140573DBC.c)
 *     sub_140574018 @ 0x140574018 (sub_140574018.c)
 *     sub_140574558 @ 0x140574558 (sub_140574558.c)
 *     sub_14057D168 @ 0x14057D168 (sub_14057D168.c)
 */

char __fastcall sub_14045AFC6(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v6; // rdi
  char v7; // r15
  __int64 v8; // r13
  _QWORD *v9; // rsi
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r8
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  char v26; // al
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // rbx
  char v33; // cl
  int v34; // edx
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  struct _KPRCB *v37; // rdi
  __int64 v38; // rcx
  int v39; // eax
  bool v40; // zf
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  struct _KPRCB *v44; // rcx
  __int64 v45; // rdx
  int v46; // eax
  struct _KPRCB *v47; // rcx
  __int64 v48; // rdx
  int v49; // eax
  int v51; // [rsp+40h] [rbp-40h] BYREF
  __int64 v52; // [rsp+48h] [rbp-38h]
  __int128 v53; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int8 v54; // [rsp+60h] [rbp-20h]
  __int128 v55; // [rsp+68h] [rbp-18h] BYREF
  __int64 v56; // [rsp+78h] [rbp-8h]
  __int64 v57; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v58; // [rsp+C8h] [rbp+48h]
  int v59; // [rsp+D0h] [rbp+50h]

  v58 = a2;
  v57 = a1;
  v4 = *a3;
  v54 = 0;
  v56 = 0LL;
  v52 = v4;
  v53 = 0LL;
  v6 = a2;
  v55 = 0LL;
  sub_140574018(a2, a2, &v53);
  v7 = 0;
  v8 = qword_140D088C0[*(unsigned int *)(v6 + 588)];
  v9 = *(_QWORD **)(v8 + 192);
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v10 = sub_14045ADBE((__int64)v9, v4, SHIDWORD(v53), v54, &v55);
        v11 = v9[1];
        if ( v7 && !v11 )
          v11 = v9[5] & v9[11];
        v12 = v56;
        if ( (v56 & v11) == 0 && !v10 )
        {
          v12 = v56;
          if ( (v56 & v9[10]) == 0 )
          {
            v12 = v4;
            *((_QWORD *)&v55 + 1) = v4;
            v56 = v4;
            *(_QWORD *)&v55 = v4;
          }
        }
        v13 = v12 & v11;
        if ( v7 && !v13 )
          v13 = v56 & v9[5] & v9[11];
        v14 = sub_140574558(v6, (_DWORD)v9, v8, v13, (__int64)&v53, (__int64)&v55);
        v16 = v14;
        if ( !v14 )
          break;
        LODWORD(v17) = sub_140573DBC((_DWORD)v9, v8, v13, v14, (__int64)&v53, (__int64)&v55, a4);
        v20 = 0LL;
        if ( (int)v17 >= 0 )
          return v17;
        if ( (_DWORD)v17 != -1073741267 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          LODWORD(v57) = 0;
          while ( 1 )
          {
            v22 = *((_QWORD *)CurrentPrcb + 4375);
            if ( v22 )
            {
              if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
              {
                v23 = *(_DWORD *)(v22 + 24);
                *(_DWORD *)(v22 + 24) = v23 + 1;
                if ( v23 == -1 )
                  sub_140418E4C((__int64)CurrentPrcb);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v16 + 48), 0LL) )
              break;
            v24 = *((_QWORD *)CurrentPrcb + 4375);
            if ( v24 )
            {
              if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
              {
                v25 = *(_DWORD *)(v24 + 24) - 1;
                *(_DWORD *)(v24 + 24) = v25;
                if ( !v25 )
                  sub_140418E4C((__int64)CurrentPrcb);
              }
            }
            do
              sub_1402F32E0(&v57, v18, v20, v19);
            while ( *(_QWORD *)(v16 + 48) );
          }
          LOBYTE(v17) = *(_BYTE *)(v16 + 35);
          v4 = v52;
          if ( !(_BYTE)v17 || v7 && (_BYTE)v17 == 6 )
          {
            *(_QWORD *)a4 = v16;
            *(_DWORD *)(a4 + 8) = 1;
            return v17;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 48), 0LL);
          goto LABEL_54;
        }
LABEL_2:
        LODWORD(v6) = v58;
      }
      if ( v7 )
        break;
      v26 = sub_14045B8E6(v15, v8, 0LL);
      LODWORD(v6) = v58;
      v7 = v26;
    }
    while ( v26 );
    v27 = *((_QWORD *)&v55 + 1);
    v28 = v56;
    if ( *((_QWORD *)&v55 + 1) == v56 )
      v27 = 0LL;
    v17 = sub_14045B3DA(v58, v8, v56, v27);
    v31 = 0LL;
    v32 = v17;
    if ( (v28 & *(_QWORD *)(v17 + 200)) == 0 )
    {
      v33 = *(_BYTE *)(v17 + 209);
      v34 = *(unsigned __int8 *)(v17 + 208);
      _BitScanForward64(&v35, __ROR8__(v28, v33));
      v59 = ((_BYTE)v35 + v33) & 0x3F;
      v36 = (unsigned int)(v59 + (v34 << 6));
      v29 = 0x140000000uLL;
      v17 = (unsigned int)dword_140D105E0[v36];
      v32 = qword_140D088C0[v17];
    }
    v37 = KeGetCurrentPrcb();
    v51 = 0;
    while ( 1 )
    {
      v38 = *((_QWORD *)v37 + 4375);
      if ( v38 )
      {
        if ( *((_BYTE *)v37 + 32) <= 1u )
        {
          v39 = *(_DWORD *)(v38 + 24);
          v40 = v39 == -1;
          LODWORD(v17) = v39 + 1;
          *(_DWORD *)(v38 + 24) = v17;
          if ( v40 )
            LOBYTE(v17) = sub_140418E4C((__int64)v37);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v32 + 48), 0LL) )
        break;
      v41 = *((_QWORD *)v37 + 4375);
      if ( v41 )
      {
        if ( *((_BYTE *)v37 + 32) <= 1u )
        {
          v42 = *(_DWORD *)(v41 + 24) - 1;
          *(_DWORD *)(v41 + 24) = v42;
          if ( !v42 )
            sub_140418E4C((__int64)v37);
        }
      }
      do
      {
        sub_1402F32E0(&v51, v29, v31, v30);
        v17 = *(_QWORD *)(v32 + 48);
      }
      while ( v17 );
    }
    v43 = v9[1];
    v4 = v52;
    if ( v7 )
    {
      v17 = v9[5] & v9[11];
      v43 |= v17;
    }
    if ( (v43 & v56) == 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 48), 0LL);
LABEL_54:
    v44 = KeGetCurrentPrcb();
    LODWORD(v6) = v58;
    v45 = *((_QWORD *)v44 + 4375);
    if ( v45 )
    {
      if ( *((_BYTE *)v44 + 32) <= 1u )
      {
        v46 = *(_DWORD *)(v45 + 24) - 1;
        *(_DWORD *)(v45 + 24) = v46;
        if ( !v46 )
        {
          sub_140418E4C((__int64)v44);
          goto LABEL_2;
        }
      }
    }
  }
  v40 = (*(_BYTE *)(v32 + 35) & 2) == 0;
  *(_DWORD *)(a4 + 8) = 0;
  if ( !v40 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 48), 0LL);
    v47 = KeGetCurrentPrcb();
    v48 = *((_QWORD *)v47 + 4375);
    if ( v48 )
    {
      if ( *((_BYTE *)v47 + 32) <= 1u )
      {
        v49 = *(_DWORD *)(v48 + 24) - 1;
        *(_DWORD *)(v48 + 24) = v49;
        if ( !v49 )
          sub_140418E4C((__int64)v47);
      }
    }
    v17 = sub_14057D168(v32, v58, v56);
    v32 = v17;
    if ( (*(_BYTE *)(v17 + 35) & 1) == 0 )
      *(_DWORD *)(a4 + 8) = 1;
  }
  *(_QWORD *)a4 = v32;
  return v17;
}
