/*
 * XREFs of sub_14098A510 @ 0x14098A510
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C6FD0 @ 0x1405C6FD0 (sub_1405C6FD0.c)
 *     sub_1405C8A68 @ 0x1405C8A68 (sub_1405C8A68.c)
 *     sub_14098A28C @ 0x14098A28C (sub_14098A28C.c)
 *     sub_14099DF74 @ 0x14099DF74 (sub_14099DF74.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14098A510(unsigned int *a1)
{
  unsigned int *v1; // r14
  char *Pool2; // r15
  char v3; // si
  int v4; // ebx
  __int64 v5; // rbp
  unsigned int v6; // r13d
  int v7; // r8d
  int v8; // r9d
  _DWORD *v9; // rcx
  __int64 v10; // r10
  int v11; // eax
  int v12; // eax
  int *v13; // rdi
  unsigned int v14; // r12d
  unsigned int v15; // edi
  unsigned int v16; // ebx
  __int64 v17; // rax
  int *v18; // r13
  unsigned int i; // edx
  __int64 v20; // rcx
  int *v21; // rax
  char *v22; // r15
  unsigned __int16 *v23; // r12
  char *v24; // r14
  char *v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // ebx
  char *v30; // r12
  __int64 v31; // rax
  unsigned int v32; // r9d
  __int64 v33; // r8
  _QWORD *v34; // r10
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  int *v38; // r8
  __int64 v39; // r12
  unsigned int *v40; // r14
  __int64 v41; // r10
  __int64 v42; // rbp
  __int64 v43; // r13
  __int64 v44; // r15
  __int64 v45; // r9
  unsigned int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // r11
  unsigned int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int j; // ebx
  unsigned int v54; // r14d
  __int64 v55; // r9
  __int64 k; // r15
  char v57; // al
  __int64 v58; // r10
  __int64 v59; // r11
  unsigned int v61; // [rsp+20h] [rbp-68h]
  unsigned int v62; // [rsp+28h] [rbp-60h]
  int v63; // [rsp+30h] [rbp-58h]
  int v64; // [rsp+34h] [rbp-54h]
  unsigned int v66; // [rsp+98h] [rbp+10h]
  unsigned int v67; // [rsp+A0h] [rbp+18h]
  unsigned int v68; // [rsp+A8h] [rbp+20h]

  v1 = a1;
  Pool2 = 0LL;
  sub_1402D66A8((ULONG_PTR)&qword_140C23010);
  v3 = 1;
  if ( qword_140D068A8 && !*((_BYTE *)v1 + 40) )
  {
    v4 = -1073741431;
LABEL_56:
    sub_1402935D0((ULONG_PTR)&qword_140C23010);
    return (unsigned int)v4;
  }
  v4 = sub_14099DF74(v1);
  if ( v4 < 0 )
    goto LABEL_56;
  v5 = *v1;
  v66 = v5;
  if ( !(_DWORD)v5 )
    goto LABEL_55;
  v6 = dword_140D06884;
  v7 = 0;
  v67 = dword_140D06884;
  v8 = dword_140D06884 * v5;
  v9 = v1 + 86;
  v10 = (unsigned int)v5;
  do
  {
    v11 = v9[1];
    v7 += v11;
    v12 = *v9 * v11;
    v9 += 80;
    v8 += v12;
    --v10;
  }
  while ( v10 );
  v13 = (int *)qword_140D068A8;
  if ( qword_140D068A8 )
  {
    if ( *(_DWORD *)(qword_140D068A8 + 8) == (_DWORD)dword_140D06884
      && *(_QWORD *)qword_140D068A8 == ((unsigned int)v5 | 0x100000000LL) )
    {
      goto LABEL_36;
    }
LABEL_55:
    v4 = -1073741811;
    goto LABEL_56;
  }
  v68 = (448 * v5 + 71) & 0xFFFFFFF8;
  v61 = v68 + 24 * v7;
  v62 = v61 + 24 * v8;
  v14 = (v62 + 4 * dword_140D06884 * v5 + 7) & 0xFFFFFFF8;
  v63 = (4 * v5 + 15) & 0xFFFFFFF8;
  v15 = ((v14 + 1008 * v5 + 31) & 0xFFFFFFF8) + dword_140D06884 * v63;
  v64 = (v14 + 1008 * v5 + 31) & 0xFFFFFFF8;
  if ( qword_140D01518 )
  {
    v16 = *((_DWORD *)qword_140D01518 + 1);
    if ( v16 )
    {
      Pool2 = (char *)ExAllocatePool2(64LL, (v5 * v16) << 6, 1766674512LL);
      if ( !Pool2 )
        goto LABEL_15;
    }
  }
  else
  {
    v16 = 0;
  }
  v17 = ExAllocatePool2(72LL, v15, 1766674512LL);
  v13 = (int *)v17;
  if ( !v17 )
  {
    ExFreePoolWithTag(Pool2, 0x694D5050u);
LABEL_15:
    v4 = -1073741670;
    goto LABEL_56;
  }
  *(_DWORD *)(v17 + 8) = v6;
  *(_DWORD *)v17 = v5;
  *(_DWORD *)(v17 + 4) = 1;
  *(_BYTE *)(v17 + 12) = 1;
  *(_QWORD *)(v17 + 16) = *((_QWORD *)v1 + 1);
  *(_QWORD *)(v17 + 24) = *((_QWORD *)v1 + 2);
  *(_QWORD *)(v17 + 32) = *((_QWORD *)v1 + 3);
  *(_QWORD *)(v17 + 40) = *((_QWORD *)v1 + 4);
  v18 = (int *)(v17 + v14);
  *(_QWORD *)(v17 + 48) = v18;
  v18[1] = v5;
  sub_1405C8A68(v18);
  for ( i = 0; i < *v1; ++i )
  {
    v20 = 112LL * i;
    v21 = &v13[v20 + 22];
    *((_QWORD *)v21 + 1) = v21;
    *(_QWORD *)v21 = v21;
    LOBYTE(v13[v20 + 26]) = 7;
    if ( dword_140D050BC )
      v13[v20 + 20] = 0x80000000;
    if ( v16 )
    {
      if ( i == *v1 - 1 )
        BYTE1(v13[v20 + 26]) = 1;
      *(_QWORD *)&v13[v20 + 28] = Pool2;
      v13[v20 + 27] = v16;
      Pool2 += 64 * (unsigned __int64)v16;
      *(_QWORD *)&v18[252 * i + 48] = &v13[v20 + 20];
    }
  }
  v22 = (char *)v13 + v61;
  v23 = (unsigned __int16 *)(v1 + 87);
  v24 = (char *)v13 + v68;
  v25 = (char *)v13 + 130;
  do
  {
    *(_OWORD *)(v25 + 262) = *(_OWORD *)(v23 - 18);
    *(_QWORD *)(v25 - 66) = *(_QWORD *)(v23 - 10);
    *(_DWORD *)(v25 + 2) = 0;
    *(_DWORD *)(v25 - 2) = 2097153;
    memset(v25 + 6, 0, 0x100uLL);
    sub_140300030((__int64)(v25 - 2), *(_WORD *)v25, v23 - 150);
    v26 = 0LL;
    *(_DWORD *)(v25 - 6) = *(_DWORD *)v23;
    *(_QWORD *)(v25 + 278) = v24;
    v27 = *(unsigned int *)v23;
    v24 += 24 * v27;
    if ( (_DWORD)v27 )
    {
      do
      {
        v28 = 3 * v26;
        v26 = (unsigned int)(v26 + 1);
        *(_QWORD *)(*(_QWORD *)(v25 + 278) + 8 * v28 + 16) = v22;
        v22 += 24 * *((unsigned int *)v23 - 1);
      }
      while ( (unsigned int)v26 < *(_DWORD *)v23 );
    }
    v23 += 160;
    v25 += 448;
    --v5;
  }
  while ( v5 );
  LODWORD(v5) = v66;
  v1 = a1;
  v29 = 0;
  v6 = v67;
  v30 = (char *)v13 + v62;
  if ( v67 )
  {
    do
    {
      v31 = sub_140348800(v29);
      v32 = 0;
      v33 = *(_QWORD *)(v31 + 33600);
      *(_QWORD *)(v33 + 1072) = v22;
      v22 += 24 * v66;
      *(_QWORD *)(v33 + 1096) = v30;
      v30 += 4 * v66;
      *(_DWORD *)(v33 + 1064) = v66;
      *(_QWORD *)(v33 + 1040) = (char *)v13 + v64 + v29 * v63;
      *(_DWORD *)(v33 + 1080) = v66;
      if ( v66 )
      {
        v34 = v13 + 102;
        do
        {
          v35 = *(_QWORD *)(v33 + 1072);
          v36 = 3LL * (v66 - v32 - 1);
          *(_DWORD *)(v35 + 8 * v36 + 4) = v32++;
          *(_DWORD *)(v35 + 8 * v36 + 8) = *((_DWORD *)v34 - 71);
          v37 = *v34;
          v34 += 56;
          *(_QWORD *)(v35 + 8 * v36 + 16) = v37;
        }
        while ( v32 < v66 );
      }
      ++v29;
    }
    while ( v29 < v67 );
    v1 = a1;
  }
LABEL_36:
  if ( (_DWORD)v5 )
  {
    v38 = v13 + 19;
    v39 = (unsigned int)v5;
    v40 = v1 + 85;
    do
    {
      v41 = 0LL;
      *(v38 - 1) = *(v40 - 1);
      *v38 = *v40;
      for ( *((_BYTE *)v38 + 45) = *((_BYTE *)v40 + 12); (unsigned int)v41 < v40[2]; v41 = (unsigned int)(v41 + 1) )
      {
        v42 = *(_QWORD *)(v38 + 83);
        v43 = 3 * v41;
        v44 = 0LL;
        v45 = *(_QWORD *)(v40 + 5) + 16LL * (unsigned int)v41;
        *(_DWORD *)(v42 + 8 * v43) = *(_DWORD *)v45;
        *(_DWORD *)(v42 + 8 * v43 + 8) = *(_DWORD *)(v45 + 4);
        v46 = *(_DWORD *)(v45 + 4);
        if ( v46 )
        {
          do
          {
            v47 = *(_QWORD *)(v45 + 8);
            v48 = *(_QWORD *)(v42 + 24 * v41 + 16);
            v49 = 3LL * (v46 - (unsigned int)v44 - 1);
            v50 = *(unsigned __int8 *)(v47 + 4 * v44);
            *(_DWORD *)(v48 + 8 * v49 + 4) = v50;
            *(_BYTE *)(v48 + 8 * v49) = *(_BYTE *)(v47 + 4 * v44 + 1) == 0;
            *(_BYTE *)(v48 + 8 * v49 + 1) = *(_BYTE *)(v47 + 4 * v44 + 2);
            *(_BYTE *)(v48 + 8 * v49 + 2) = *(_BYTE *)(v47 + 4 * v44 + 3);
            if ( *(_DWORD *)(v42 + 24 * v41) == -1 )
            {
              v51 = 112LL * v50;
              *(_DWORD *)(v48 + 8 * v49 + 8) = v13[v51 + 31];
              v52 = *(_QWORD *)&v13[v51 + 102];
            }
            else
            {
              *(_DWORD *)(v48 + 8 * v49 + 8) = 0;
              v52 = 0LL;
            }
            *(_QWORD *)(v48 + 8 * v49 + 16) = v52;
            v44 = (unsigned int)(v44 + 1);
            v46 = *(_DWORD *)(v45 + 4);
          }
          while ( (unsigned int)v44 < v46 );
        }
      }
      v38 += 112;
      v40 += 80;
      --v39;
    }
    while ( v39 );
    LODWORD(v5) = v66;
    v6 = v67;
  }
  for ( j = 0; j < v6; ++j )
  {
    v54 = 0;
    for ( k = *(_QWORD *)(sub_140348800(j) + 33600); v54 < (unsigned int)v5; *(_BYTE *)(v58 + 8 * v59 + 1) = v57 )
    {
      v57 = sub_1405C6FD0(
              j,
              *(_DWORD *)(*(_QWORD *)(k + 1072) + 24LL * ((unsigned int)v5 - v54 - 1) + 8),
              *(_QWORD *)(*(_QWORD *)(k + 1072) + 24LL * ((unsigned int)v5 - v54 - 1) + 16),
              v55);
      ++v54;
    }
  }
  if ( !qword_140D068A8 )
  {
    sub_14098A28C(v13, 1);
    v3 = 0;
  }
  v4 = 0;
  if ( v3 )
    goto LABEL_56;
  return (unsigned int)v4;
}
