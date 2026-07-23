/*
 * XREFs of sub_14098AAF0 @ 0x14098AAF0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x1403CF350 (KeQueryActiveProcessorAffinity2.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C8A68 @ 0x1405C8A68 (sub_1405C8A68.c)
 *     sub_14098A28C @ 0x14098A28C (sub_14098A28C.c)
 *     sub_14099E088 @ 0x14099E088 (sub_14099E088.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14098AAF0(__int64 a1)
{
  __int64 v1; // r15
  unsigned int v2; // esi
  void *v3; // rdi
  char v4; // bp
  __int64 v5; // rbx
  unsigned int v6; // r12d
  unsigned int v7; // edx
  unsigned int v8; // eax
  _DWORD *v9; // rcx
  int v10; // r14d
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // r14
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r12d
  __int64 v18; // rdi
  _QWORD *v19; // rax
  unsigned int v20; // edi
  __int64 v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int128 v25; // xmm0
  __int64 v26; // r15
  __int64 v27; // rdi
  unsigned int v28; // r13d
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // ebx
  __int64 v34; // rdi
  __int64 v35; // rax
  unsigned int v36; // r9d
  __int64 v37; // r10
  __int64 v38; // r8
  __int64 v39; // rdx
  unsigned int v40; // r12d
  unsigned int v41; // edx
  __int64 v42; // rbx
  __int64 v43; // r13
  __int64 v44; // r11
  unsigned int v45; // ecx
  __int64 v46; // r15
  __int64 v47; // rdi
  unsigned int v48; // eax
  __int64 v49; // r9
  __int64 v50; // r8
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v52; // rbx
  __int64 v53; // rdi
  int v54; // edx
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned int i; // ebx
  unsigned int v58; // edi
  __int64 v59; // r13
  unsigned int v60; // eax
  __int64 v61; // rcx
  bool v62; // zf
  char v63; // al
  unsigned int v65; // [rsp+20h] [rbp-78h]
  __int64 v66; // [rsp+20h] [rbp-78h]
  int v67; // [rsp+28h] [rbp-70h]
  int v68; // [rsp+2Ch] [rbp-6Ch]
  __int64 Pool2; // [rsp+30h] [rbp-68h]
  __int64 v70; // [rsp+30h] [rbp-68h]
  unsigned int v72; // [rsp+A8h] [rbp+10h]
  unsigned int v73; // [rsp+A8h] [rbp+10h]
  __int64 v74; // [rsp+A8h] [rbp+10h]
  unsigned int v75; // [rsp+B0h] [rbp+18h]
  __int64 v76; // [rsp+B0h] [rbp+18h]
  unsigned int v77; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  v2 = 0;
  Pool2 = 0LL;
  v3 = 0LL;
  sub_1402D66A8((ULONG_PTR)&qword_140C23010);
  v4 = 1;
  if ( qword_140D068A8 && !*(_BYTE *)(v1 + 48) )
  {
    v2 = -1073741431;
LABEL_79:
    sub_1402935D0((ULONG_PTR)&qword_140C23010);
    return v2;
  }
  v5 = *(unsigned int *)(v1 + 4);
  if ( !(_DWORD)v5 || *(_DWORD *)(v1 + 8) > (unsigned int)v5 )
    goto LABEL_78;
  sub_14099E088(v1);
  v6 = dword_140D06884;
  v7 = 0;
  v8 = *(_DWORD *)(v1 + 8);
  v75 = dword_140D06884;
  if ( v8 )
  {
    v9 = (_DWORD *)(v1 + 72);
    while ( *v9 <= (unsigned int)dword_140D06884 )
    {
      ++v7;
      v9 += 12;
      if ( v7 >= v8 )
      {
        v10 = 0;
        if ( !(_DWORD)dword_140D06884 )
        {
LABEL_14:
          v12 = v8 * (v6 + v10);
          v3 = 0LL;
          v7 = v6 * v8;
          goto LABEL_16;
        }
        while ( 1 )
        {
          v11 = *(_QWORD *)(sub_140348800((unsigned int)v3) + 33600);
          if ( !v11 )
            goto LABEL_78;
          v10 += *(_DWORD *)(v11 + 32);
          LODWORD(v3) = (_DWORD)v3 + 1;
          if ( (unsigned int)v3 >= v6 )
          {
            v8 = *(_DWORD *)(v1 + 8);
            goto LABEL_14;
          }
        }
      }
    }
    goto LABEL_78;
  }
  v12 = 0;
LABEL_16:
  v13 = qword_140D068A8;
  if ( qword_140D068A8 )
  {
    if ( *(_DWORD *)(qword_140D068A8 + 8) == v6 && *(_DWORD *)qword_140D068A8 == (_DWORD)v5 )
    {
      LODWORD(v22) = v8;
      if ( *(_DWORD *)(qword_140D068A8 + 4) == 1 )
        goto LABEL_50;
    }
LABEL_78:
    v2 = -1073741811;
    goto LABEL_79;
  }
  v77 = (448 * v5 + 71) & 0xFFFFFFF8;
  v65 = v77 + 24 * v7;
  v72 = v65 + 24 * v12;
  v67 = (v72 + 1008 * v5 + 31) & 0xFFFFFFF8;
  v68 = (4 * v5 + 15) & 0xFFFFFFF8;
  if ( qword_140D01518 )
  {
    v14 = *((_DWORD *)qword_140D01518 + 1);
    if ( v14 )
    {
      Pool2 = ExAllocatePool2(64LL, (v5 * v14) << 6, 1766674512LL);
      v3 = (void *)Pool2;
      if ( !Pool2 )
        goto LABEL_23;
    }
  }
  else
  {
    v14 = 0;
  }
  v15 = ExAllocatePool2(72LL, v67 + v6 * ((4 * (_DWORD)v5 + 15) & 0xFFFFFFF8), 1766674512LL);
  v13 = v15;
  if ( !v15 )
  {
    ExFreePoolWithTag(v3, 0x694D5050u);
LABEL_23:
    v2 = -1073741670;
    goto LABEL_79;
  }
  *(_DWORD *)v15 = v5;
  *(_DWORD *)(v15 + 4) = *(_DWORD *)(v1 + 8) != 0;
  *(_DWORD *)(v15 + 8) = v6;
  *(_QWORD *)(v15 + 16) = *(_QWORD *)(v1 + 16);
  *(_QWORD *)(v15 + 24) = *(_QWORD *)(v1 + 24);
  *(_QWORD *)(v15 + 32) = *(_QWORD *)(v1 + 32);
  *(_QWORD *)(v15 + 40) = *(_QWORD *)(v1 + 40);
  v16 = v15 + v72;
  *(_QWORD *)(v13 + 48) = v16;
  *(_DWORD *)(v16 + 4) = v5;
  sub_1405C8A68((int *)(v13 + v72));
  if ( *(_DWORD *)(v1 + 4) )
  {
    v17 = 0;
    do
    {
      v18 = 448LL * v17;
      *(_BYTE *)(v18 + v13 + 121) = 1;
      *(_QWORD *)(v18 + v13 + 128) = 2097153LL;
      memset((void *)(v18 + v13 + 136), 0, 0x100uLL);
      KeQueryActiveProcessorAffinity2(v18 + v13 + 128);
      *(_BYTE *)(v18 + v13 + 104) = 7;
      v19 = (_QWORD *)(v18 + v13 + 88);
      v19[1] = v19;
      *v19 = v19;
      if ( dword_140D050BC )
        *(_DWORD *)(v18 + v13 + 80) = 0x80000000;
      if ( v14 )
      {
        if ( v17 == *(_DWORD *)(v1 + 4) - 1 )
          *(_BYTE *)(v18 + v13 + 105) = 1;
        *(_QWORD *)(v18 + v13 + 112) = Pool2;
        *(_DWORD *)(v18 + v13 + 108) = v14;
        Pool2 += (unsigned __int64)v14 << 6;
        *(_QWORD *)(1008LL * v17 + v13 + v72 + 192) = v18 + v13 + 80;
      }
      ++v17;
    }
    while ( v17 < *(_DWORD *)(v1 + 4) );
    v6 = v75;
  }
  v20 = 0;
  v21 = v13 + v77;
  LODWORD(v22) = *(_DWORD *)(v1 + 8);
  v70 = v13 + v65;
  v73 = 0;
  if ( (_DWORD)v22 )
  {
    v23 = 24LL * v6;
    do
    {
      v24 = 448LL * v20;
      v25 = *(_OWORD *)(v1 + 48LL * v20 + 80);
      *(_QWORD *)(v24 + v13 + 408) = v21;
      v21 += v23;
      *(_DWORD *)(v24 + v13 + 124) = v6;
      v66 = v21;
      *(_OWORD *)(v24 + v13 + 392) = v25;
      if ( v6 )
      {
        v26 = v70;
        v27 = 0LL;
        v28 = 0;
        v29 = v24;
        do
        {
          v30 = *(_QWORD *)(v29 + v13 + 408);
          v31 = *(_QWORD *)(sub_140348800(v28) + 33600);
          *(_DWORD *)(v27 + v30) = v28++;
          v27 += 24LL;
          v32 = *(_DWORD *)(v31 + 32);
          *(_QWORD *)(v27 + v30 - 8) = v26;
          *(_DWORD *)(v27 + v30 - 16) = v32;
          v26 += 24LL * *(unsigned int *)(v31 + 32);
        }
        while ( v28 < v6 );
        v20 = v73;
        v2 = 0;
        v21 = v66;
        v23 = 24LL * v6;
        v70 = v26;
        v1 = a1;
      }
      LODWORD(v22) = *(_DWORD *)(v1 + 8);
      v73 = ++v20;
    }
    while ( v20 < (unsigned int)v22 );
  }
  v33 = 0;
  if ( v6 )
  {
    v34 = v70;
    do
    {
      v35 = sub_140348800(v33);
      v36 = 0;
      v37 = *(_QWORD *)(v35 + 33600);
      *(_QWORD *)(v37 + 1040) = v13 + v67 + v33 * v68;
      *(_DWORD *)(v37 + 1064) = *(_DWORD *)(v1 + 8);
      *(_QWORD *)(v37 + 1072) = v34;
      v22 = *(unsigned int *)(v1 + 8);
      v34 += 24 * v22;
      if ( (_DWORD)v22 )
      {
        do
        {
          v38 = 448LL * v36;
          v39 = 3LL * ((unsigned int)v22 - v36 - 1);
          v22 = *(_QWORD *)(v37 + 1072);
          *(_DWORD *)(v22 + 8 * v39 + 4) = v36++;
          *(_DWORD *)(v22 + 8 * v39 + 8) = *(_DWORD *)(v38 + v13 + 124);
          *(_QWORD *)(v22 + 8 * v39 + 16) = *(_QWORD *)(v38 + v13 + 408);
          LODWORD(v22) = *(_DWORD *)(v1 + 8);
        }
        while ( v36 < (unsigned int)v22 );
      }
      ++v33;
    }
    while ( v33 < v6 );
  }
LABEL_50:
  if ( (_DWORD)v22 )
  {
    v40 = 0;
    do
    {
      v41 = 0;
      v42 = 448LL * v40;
      v43 = v1 + 48LL * v40;
      *(_DWORD *)(v42 + v13 + 72) = *(_DWORD *)(v43 + 64);
      *(_DWORD *)(v42 + v13 + 76) = *(_DWORD *)(v43 + 68);
      if ( *(_DWORD *)(v43 + 72) )
      {
        do
        {
          v44 = *(_QWORD *)(v43 + 96);
          v45 = 0;
          v46 = *(_QWORD *)(v42 + v13 + 408);
          v47 = 3LL * *(unsigned int *)(v44 + 8LL * v41);
          v48 = *(_DWORD *)(v46 + 24LL * *(unsigned int *)(v44 + 8LL * v41) + 8);
          if ( v48 )
          {
            do
            {
              v49 = *(_QWORD *)(v46 + 8 * v47 + 16);
              v50 = 3LL * (v48 - v45 - 1);
              *(_OWORD *)(v49 + 8 * v50) = 0LL;
              *(_QWORD *)(v49 + 8 * v50 + 16) = 0LL;
              *(_DWORD *)(v49 + 8 * v50 + 4) = v45;
              if ( !*(_BYTE *)(v43 + 60) && v45 == *(unsigned __int8 *)(v43 + 61) )
                *(_BYTE *)(v49 + 24LL * (v48 - v45 - 1) + 1) = 1;
              if ( v45 >= *(unsigned __int8 *)(v44 + 8LL * v41 + 4) )
              {
                *(_BYTE *)(v49 + 24LL * (v48 - v45 - 1) + 2) = 1;
                if ( !*(_BYTE *)(v44 + 8LL * v41 + 6) )
                  *(_BYTE *)(v49 + 24LL * (v48 - v45 - 1)) = 1;
              }
              v48 = *(_DWORD *)(v46 + 8 * v47 + 8);
              ++v45;
            }
            while ( v45 < v48 );
          }
          ++v41;
        }
        while ( v41 < *(_DWORD *)(v43 + 72) );
        v1 = a1;
      }
      if ( *(_BYTE *)(v43 + 60) )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v43 + 56));
        v52 = *(_QWORD *)(v42 + v13 + 408);
        v53 = 3LL * ProcessorIndexFromNumber;
        memset(
          *(void **)(v52 + 24LL * ProcessorIndexFromNumber + 16),
          0,
          24LL * *(unsigned int *)(v52 + 24LL * ProcessorIndexFromNumber + 8));
        v54 = *(unsigned __int8 *)(v43 + 61);
        v55 = 3LL * (unsigned int)(*(_DWORD *)(v52 + 8 * v53 + 8) - v54 - 1);
        v56 = *(_QWORD *)(v52 + 8 * v53 + 16);
        *(_DWORD *)(v56 + 8 * v55 + 4) = v54;
        *(_BYTE *)(v56 + 8 * v55 + 1) = 1;
      }
      ++v40;
    }
    while ( v40 < *(_DWORD *)(v1 + 8) );
    v6 = v75;
  }
  for ( i = 0; i < v6; ++i )
  {
    v58 = 0;
    v59 = *(_QWORD *)(sub_140348800(i) + 33600);
    v60 = *(_DWORD *)(v59 + 1064);
    if ( v60 )
    {
      do
      {
        v74 = 3LL * (v60 - v58 - 1);
        v76 = *(_QWORD *)(v59 + 1072);
        v61 = v1 + 48LL * v58 + 56;
        if ( !*(_BYTE *)(v61 + 4) || (v62 = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v61) == i, v63 = 0, v62) )
          v63 = 1;
        ++v58;
        *(_BYTE *)(v76 + 8 * v74 + 1) = v63;
        v60 = *(_DWORD *)(v59 + 1064);
      }
      while ( v58 < v60 );
    }
  }
  if ( !qword_140D068A8 )
  {
    sub_14098A28C((int *)v13, 0);
    v4 = 0;
  }
  if ( v4 )
    goto LABEL_79;
  return v2;
}
