/*
 * XREFs of sub_1403A9A80 @ 0x1403A9A80
 * Callers:
 *     sub_1403AA550 @ 0x1403AA550 (sub_1403AA550.c)
 * Callees:
 *     sub_1403A8C98 @ 0x1403A8C98 (sub_1403A8C98.c)
 *     sub_1403A9A4C @ 0x1403A9A4C (sub_1403A9A4C.c)
 *     sub_1403A9E4C @ 0x1403A9E4C (sub_1403A9E4C.c)
 *     sub_1403AA258 @ 0x1403AA258 (sub_1403AA258.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403A9A80(__int64 a1, int a2, __int64 *a3, _QWORD *a4)
{
  int v6; // ecx
  unsigned int v7; // ebx
  __int64 v8; // r12
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  unsigned int v11; // ebx
  unsigned __int16 v12; // r13
  unsigned __int16 v13; // bx
  char *v14; // rax
  char *v15; // rdi
  __int64 v16; // r14
  int v17; // ecx
  _WORD *v18; // rdi
  int v19; // eax
  int v20; // esi
  unsigned int v21; // esi
  __int64 v22; // rbx
  unsigned int v23; // esi
  _QWORD *v24; // r15
  unsigned int v25; // esi
  char *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rbx
  int v29; // r15d
  __int64 v30; // r11
  __int64 v31; // r8
  __int16 v32; // r9
  __int64 v33; // r10
  __int64 v34; // rdx
  unsigned int v35; // esi
  char *v36; // rdi
  __int16 v37; // r13
  char *v38; // rbx
  char v39; // dl
  char *v40; // rax
  __int16 v41; // di
  char *v42; // rbx
  char v43; // cl
  _QWORD *v44; // rdx
  __int64 v45; // rcx
  __int64 v47; // rdx
  __int64 v48; // rax
  unsigned int v49; // edx
  __int16 v50; // [rsp+20h] [rbp-48h] BYREF
  size_t Size; // [rsp+28h] [rbp-40h]
  __int64 v52; // [rsp+30h] [rbp-38h]
  __int64 v53; // [rsp+38h] [rbp-30h]
  __int64 v54; // [rsp+48h] [rbp-20h] BYREF
  __int16 v55[12]; // [rsp+50h] [rbp-18h] BYREF
  char *v56; // [rsp+B0h] [rbp+48h] BYREF
  int v57; // [rsp+B8h] [rbp+50h]
  __int64 *v58; // [rsp+C0h] [rbp+58h]
  _QWORD *v59; // [rsp+C8h] [rbp+60h]

  v59 = a4;
  v58 = a3;
  v57 = a2;
  v54 = 0LL;
  v55[0] = 0;
  LOWORD(v56) = 0;
  v50 = 0;
  if ( !a1 )
    return 3221225473LL;
  v6 = *(_DWORD *)(a1 + 60);
  if ( !v6 )
    return 3221225473LL;
  v7 = v6 + a2;
  v53 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  v8 = v53;
  sub_1403A9A4C(v53, (unsigned int)(v6 + a2), &v54);
  sub_1403A9A4C(v53, v7 + 2, (_WORD *)&v54 + 1);
  v7 += 4;
  sub_1403A9A4C(v53, v7, (_WORD *)&v54 + 2);
  sub_1403A9A4C(v53, v7 + 2, (_WORD *)&v54 + 3);
  v9 = v7 + 4;
  sub_1403A9A4C(v53, v9, v55);
  v10 = (unsigned __int16)v54;
  if ( (v54 & 0x8000u) != 0LL )
    return 3221225485LL;
  if ( (_WORD)v54 )
  {
    v11 = v9 + 2 * (__int16)v54;
    sub_1403A9A4C(v53, v11, &v50);
    v12 = v50 + 1;
    sub_1403A9A4C(v8, v11 + 2, &v56);
    v13 = (unsigned __int16)v56;
    v52 = (unsigned __int16)v56;
    Size = v12 + (unsigned __int64)(unsigned __int16)v56 + 8LL * v12 + 2 * ((__int16)v10 + 41LL);
    v14 = (char *)sub_1403AA258(Size);
    v15 = v14;
    if ( v14 )
    {
      memset(v14, 0, Size);
      v16 = (__int64)v15;
      v17 = SWORD1(v54);
      *(_DWORD *)(v15 + 6) = SWORD2(v54);
      *(_DWORD *)(v15 + 10) = SHIWORD(v54);
      *(_DWORD *)(v15 + 14) = v55[0];
      *(_WORD *)v15 = v10;
      *(_DWORD *)(v15 + 2) = v17;
      *(_DWORD *)(v15 + 18) = v17;
      *((_WORD *)v15 + 11) = v13;
      *((_WORD *)v15 + 12) = v12;
      v18 = v15 + 66;
      v19 = *(_DWORD *)(a1 + 60);
      v20 = v57 + 10;
      *(_QWORD *)(v16 + 26) = v18;
      v21 = v19 + v20;
      if ( (__int16)v10 > 0 )
      {
        v22 = v10;
        do
        {
          sub_1403A9A4C(v8, v21, v18);
          v21 += 2;
          ++v18;
          --v22;
        }
        while ( v22 );
        v13 = (unsigned __int16)v56;
      }
      v23 = v21 + 2;
      *(_QWORD *)(v16 + 34) = v18;
      sub_1403A9E4C(v8, v23, v13, v18);
      v24 = v59;
      v25 = v13 + v23;
      v26 = (char *)v18 + v52;
      *(_QWORD *)(v16 + 42) = v26;
      v27 = sub_1403AA258(v12);
      v52 = v27;
      v28 = v27;
      if ( v27 )
      {
        v29 = v12;
        sub_1403A9E4C(v8, v25, v12, v27);
        LODWORD(v30) = 0;
        LODWORD(v31) = 0;
        v32 = 0;
        if ( v12 )
        {
          do
          {
            v33 = (unsigned int)v31;
            v34 = v32++;
            *(_BYTE *)(v34 + *(_QWORD *)(v16 + 42)) = *(_BYTE *)((unsigned int)v31 + v28);
            if ( (*(_BYTE *)((unsigned int)v31 + v28) & 8) != 0 )
            {
              v31 = (unsigned int)(v31 + 1);
              if ( *(_BYTE *)(v31 + v28) )
              {
                v30 = *(unsigned __int8 *)(v31 + v28);
                do
                {
                  v47 = v32++;
                  *(_BYTE *)(v47 + *(_QWORD *)(v16 + 42)) = *(_BYTE *)(v33 + v28);
                  --v30;
                }
                while ( v30 );
                v29 = v12;
              }
            }
            LODWORD(v31) = v31 + 1;
          }
          while ( v32 < v29 );
          v8 = v53;
        }
        v35 = v31 + v25;
        v36 = &v26[v12];
        v37 = v30;
        *(_QWORD *)(v16 + 50) = v36;
        if ( v29 )
        {
          while ( 1 )
          {
            v38 = &v36[4 * v37];
            *(_DWORD *)v38 = v30;
            v39 = *(_BYTE *)(v37 + *(_QWORD *)(v16 + 42));
            if ( (v39 & 2) != 0 )
            {
              sub_1403A9E4C(v8, v35++, 1LL, &v36[4 * v37]);
              if ( (*(_BYTE *)(v37 + *(_QWORD *)(v16 + 42)) & 0x10) == 0 )
                *(_DWORD *)v38 = -*(_DWORD *)v38;
            }
            else
            {
              if ( (v39 & 0x10) != 0 )
                goto LABEL_20;
              sub_1403A9A4C(v8, v35, &v36[4 * v37]);
              v35 += 2;
            }
            LODWORD(v30) = 0;
LABEL_20:
            if ( ++v37 >= v29 )
            {
              v36 = *(char **)(v16 + 50);
              break;
            }
          }
        }
        v40 = &v36[4 * v29 + 8];
        v41 = v30;
        v56 = v40;
        *(_QWORD *)(v16 + 58) = v40;
        if ( v29 )
        {
          do
          {
            v42 = &v40[4 * v41];
            *(_DWORD *)v42 = v30;
            v43 = *(_BYTE *)(*(_QWORD *)(v16 + 42) + v41);
            if ( (v43 & 4) != 0 )
            {
              sub_1403A9E4C(v8, v35++, 1LL, v42);
              if ( (*(_BYTE *)(*(_QWORD *)(v16 + 42) + v41) & 0x20) == 0 )
                *(_DWORD *)v42 = -*(_DWORD *)v42;
            }
            else
            {
              if ( (v43 & 0x20) != 0 )
                goto LABEL_27;
              sub_1403A9A4C(v8, v35, v42);
              v35 += 2;
            }
            LODWORD(v30) = 0;
LABEL_27:
            ++v41;
            v40 = v56;
          }
          while ( v41 < v29 );
        }
        v44 = v59;
        v45 = v52;
        *v58 = v16;
        sub_1403A8C98(v45, v44);
        return 0LL;
      }
      sub_1403A8C98(v16, v24);
    }
  }
  else
  {
    v48 = sub_1403AA258(66LL);
    if ( v48 )
    {
      v49 = SWORD1(v54);
      *(_DWORD *)(v48 + 6) = SWORD2(v54);
      *(_DWORD *)(v48 + 10) = SHIWORD(v54);
      *(_DWORD *)(v48 + 14) = v55[0];
      *(_WORD *)v48 = 0;
      *(_DWORD *)(v48 + 2) = v49;
      *(_QWORD *)(v48 + 18) = v49;
      *a3 = v48;
      return 0LL;
    }
  }
  return 3221225626LL;
}
