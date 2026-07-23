/*
 * XREFs of sub_140A32064 @ 0x140A32064
 * Callers:
 *     sub_140A32934 @ 0x140A32934 (sub_140A32934.c)
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_14041ADA8 @ 0x14041ADA8 (sub_14041ADA8.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_140652894 @ 0x140652894 (sub_140652894.c)
 *     sub_140659E70 @ 0x140659E70 (sub_140659E70.c)
 *     sub_14065A018 @ 0x14065A018 (sub_14065A018.c)
 *     sub_140A31CD8 @ 0x140A31CD8 (sub_140A31CD8.c)
 *     sub_140A31E68 @ 0x140A31E68 (sub_140A31E68.c)
 *     sub_140A31EE0 @ 0x140A31EE0 (sub_140A31EE0.c)
 *     sub_140A31F7C @ 0x140A31F7C (sub_140A31F7C.c)
 *     sub_140A32018 @ 0x140A32018 (sub_140A32018.c)
 *     sub_140A330F8 @ 0x140A330F8 (sub_140A330F8.c)
 *     sub_140A33A58 @ 0x140A33A58 (sub_140A33A58.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A32064(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  int v6; // r12d
  int v7; // edi
  __int64 Pool2; // rax
  _DWORD *v9; // r15
  int v10; // ebx
  unsigned int i; // edx
  __int64 v12; // r8
  char v13; // cl
  __int64 v14; // r12
  char *v15; // r13
  int v16; // edi
  char *v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // eax
  int v20; // eax
  char v21; // cl
  char v22; // r12
  __int64 j; // rbx
  unsigned int v24; // eax
  __int64 *v25; // rcx
  _OWORD *v26; // rdx
  unsigned int v27; // r8d
  unsigned int v28; // r12d
  __int64 k; // rbx
  __int64 *v30; // r13
  unsigned int v31; // eax
  __int64 v33; // [rsp+48h] [rbp-F0h]
  int v34; // [rsp+50h] [rbp-E8h] BYREF
  int v35; // [rsp+54h] [rbp-E4h]
  unsigned int v36; // [rsp+58h] [rbp-E0h]
  char v37; // [rsp+5Ch] [rbp-DCh]
  int v38; // [rsp+60h] [rbp-D8h]
  char v39; // [rsp+64h] [rbp-D4h]
  char v40; // [rsp+65h] [rbp-D3h]
  int v41; // [rsp+68h] [rbp-D0h]
  int v42; // [rsp+6Ch] [rbp-CCh] BYREF
  int v43; // [rsp+70h] [rbp-C8h]
  unsigned int v44; // [rsp+74h] [rbp-C4h]
  int v45; // [rsp+78h] [rbp-C0h]
  int v46; // [rsp+7Ch] [rbp-BCh]
  unsigned int v47; // [rsp+80h] [rbp-B8h]
  int v48; // [rsp+84h] [rbp-B4h]
  __int64 v49; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+98h] [rbp-A0h]
  int v52; // [rsp+A0h] [rbp-98h]
  int v53; // [rsp+A4h] [rbp-94h]
  _DWORD *v54; // [rsp+A8h] [rbp-90h]
  __int64 v55; // [rsp+B0h] [rbp-88h]
  void *Src; // [rsp+B8h] [rbp-80h]
  unsigned int v57; // [rsp+C0h] [rbp-78h]
  unsigned int v58; // [rsp+C4h] [rbp-74h]
  __int64 v59; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-68h]
  __int64 v61; // [rsp+D8h] [rbp-60h]
  __int64 v62; // [rsp+E0h] [rbp-58h]
  char *v63; // [rsp+E8h] [rbp-50h]
  __int64 v64; // [rsp+F0h] [rbp-48h]

  v62 = a3;
  v58 = a2;
  v5 = a1;
  v64 = a5;
  v35 = 0;
  v48 = 0;
  v42 = 50;
  v45 = 0;
  v44 = 0;
  v34 = 0;
  v6 = 0;
  v36 = 0;
  v7 = 48;
  v38 = 48;
  v43 = 0;
  v60 = 0LL;
  v46 = 0;
  v59 = 0LL;
  v41 = 0;
  Src = 0LL;
  v51 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v37 = 0;
  v55 = 0x7FFFFFFFFFFFFFFFLL;
  v61 = a1;
  Pool2 = ExAllocatePool2(258LL, 2976LL, 1919109443LL);
  v9 = (_DWORD *)Pool2;
  v54 = (_DWORD *)Pool2;
  if ( !Pool2 )
  {
    v10 = -1073741801;
    v35 = -1073741801;
    goto LABEL_83;
  }
  v51 = Pool2 + 800;
  Src = (void *)(Pool2 + 1776);
  v10 = sub_140A31F7C((_DWORD *)(v5 + 224), &v42, Pool2);
  v35 = v10;
  if ( v10 >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      v57 = i;
      if ( i >= v42 )
        break;
      v7 += ((v9[4 * i] + 3) & 0xFFFFFFFC) + 16;
      v38 = v7;
    }
    if ( !(unsigned __int8)sub_140A33A58(v5 + 128, &v49, 1LL) || !(unsigned __int8)sub_140A33A58(v5 + 144, &v50, v12) )
    {
      v49 = 0LL;
      v50 = 0LL;
    }
    v40 = sub_140A31E68((const void **)&qword_140A38A00, v42, (__int64)v9);
    if ( v40 && qword_140D3B2A8 > 0 && v49 < qword_140D3B2A8 )
    {
      v34 |= 0x600000u;
      v10 = -1073740283;
      v35 = -1073740283;
      v38 = v7;
      goto LABEL_83;
    }
    if ( !byte_140D01138 && sub_140A31E68((const void **)&qword_140A389E0, v42, (__int64)v9) )
    {
      v13 = 0;
      v39 = 0;
      if ( !v40 && MEMORY[0xFFFFF78000000014] < v49 || MEMORY[0xFFFFF78000000014] > v50 )
      {
        v39 = 1;
        v13 = 1;
      }
      if ( v13 )
      {
        v34 |= 0x400000u;
        v10 = -1073740283;
        v35 = -1073740283;
        v38 = v7;
        v9 = v54;
LABEL_82:
        v6 = v36;
        goto LABEL_83;
      }
      v10 = v35;
      v5 = v61;
      v9 = v54;
    }
    v38 = v7;
    while ( 1 )
    {
      if ( v45 )
        goto LABEL_82;
      v14 = 120LL * (unsigned int)v43;
      v15 = (char *)Src;
      v63 = (char *)Src + v14 + 8;
      v47 = sub_140A31CD8(v5 + 48);
      v10 = sub_140652894(v47);
      v35 = v10;
      if ( v10 < 0 )
        goto LABEL_27;
      *(_DWORD *)&v15[v14] = v47;
      *(_DWORD *)&v15[v14 + 4] = v44;
      *(_OWORD *)&v15[v14 + 104] = *(_OWORD *)(v5 + 16);
      v16 = ((*(_DWORD *)(v5 + 16) + 3) & 0xFFFFFFFC) + v7;
      v38 = v16;
      v17 = &v15[v14 + 72];
      *(_OWORD *)v17 = 0LL;
      *(_OWORD *)&v15[v14 + 88] = 0LL;
      if ( a5 )
      {
        if ( (unsigned __int8)sub_140A32018(v5 + 160, (__int64)v17) )
        {
          v16 += (*(unsigned __int16 *)&v15[v14 + 80] + 3) & 0xFFFFFFFC;
          v38 = v16;
        }
        if ( (unsigned __int8)sub_140A32018(v5 + 112, (__int64)&v15[v14 + 88]) )
        {
          v16 += (*(unsigned __int16 *)&v15[v14 + 96] + 3) & 0xFFFFFFFC;
          v38 = v16;
        }
      }
      ++v43;
      v7 = v16 + 120;
      v38 = v7;
      if ( sub_14041ADA8(v47, &v15[v14 + 8], v44, &v59) )
      {
        v35 = -1073740285;
        v46 = 1;
        v34 |= 0x200000u;
        v18 = v55;
        if ( v59 < v55 )
          v18 = v59;
        v55 = v18;
      }
      v35 = 0;
      v19 = *(_DWORD *)(v5 + 112);
      if ( v19 == *(_DWORD *)(v5 + 160) )
      {
        v20 = memcmp(*(const void **)(v5 + 120), *(const void **)(v5 + 168), v19);
        v21 = v37;
        if ( !v20 )
          v21 = 1;
        v37 = v21;
      }
      v22 = v37;
      v10 = sub_14065A018((_DWORD *)(v5 + 224), v48, v37, &v34);
      v35 = v10;
      if ( v10 < 0 )
        goto LABEL_82;
      if ( v22 )
      {
        v52 = 0;
        for ( j = 0LL; ; j = (unsigned int)(j + 1) )
        {
          v52 = j;
          if ( (unsigned int)j >= 0x13 )
            break;
          v24 = *(_DWORD *)(v5 + 176);
          if ( v24 == LODWORD(qword_140A3B810[5 * j + 2])
            && RtlCompareMemory(*(const void **)(v5 + 184), (const void *)qword_140A3B810[5 * j + 3], v24) == *(_DWORD *)(v5 + 176) )
          {
            v25 = &qword_140A3B810[5 * j];
            goto LABEL_50;
          }
        }
        v25 = 0LL;
LABEL_50:
        if ( v25 )
        {
          v26 = v25 + 2;
          v34 |= *((_DWORD *)v25 + 8) | 1;
          v41 = *((_DWORD *)v25 + 9);
        }
        else
        {
          if ( !a5 )
            goto LABEL_52;
          v26 = (_OWORD *)(v5 + 176);
          v34 |= 1u;
          v41 = 2;
        }
        if ( a5 )
        {
          v27 = v36;
          *(_OWORD *)(v51 + 16LL * v36) = *v26;
          v36 = v27 + 1;
          v7 += ((*(_DWORD *)v26 + 3) & 0xFFFFFFFC) + 16;
          v38 = v7;
        }
        v45 = 1;
      }
      else
      {
        v28 = v36;
        if ( a5 )
        {
          *(_OWORD *)(v51 + 16LL * v36) = *(_OWORD *)(v5 + 176);
          v36 = ++v28;
          v7 += ((*(_DWORD *)(v5 + 176) + 3) & 0xFFFFFFFC) + 16;
          v38 = v7;
        }
        v53 = 0;
        for ( k = 0LL; ; k = (unsigned int)(k + 1) )
        {
          v53 = k;
          if ( (unsigned int)k >= 0x13 )
            break;
          v30 = &qword_140A3B810[5 * k];
          v31 = *(_DWORD *)(v5 + 112);
          if ( v31 == *(_DWORD *)v30
            && RtlCompareMemory(*(const void **)(v5 + 120), (const void *)qword_140A3B810[5 * k + 1], v31) == *(_DWORD *)(v5 + 112) )
          {
            goto LABEL_67;
          }
        }
        v30 = 0LL;
LABEL_67:
        if ( v30 )
        {
          v26 = v30 + 2;
          v34 |= *((_DWORD *)v30 + 8);
          v41 = *((_DWORD *)v30 + 9);
          v45 = 1;
          if ( a5 )
          {
            *(_OWORD *)(v51 + 16LL * v28) = *v26;
            v36 = v28 + 1;
            v7 += ((*(_DWORD *)v26 + 3) & 0xFFFFFFFC) + 16;
            v38 = v7;
          }
        }
        else
        {
          v60 = sub_140A31EE0((unsigned int *)(v5 + 112), v58, v62);
          if ( !v60 )
          {
            v41 = 1;
            goto LABEL_72;
          }
          v26 = (_OWORD *)(v60 + 176);
        }
      }
      v10 = sub_140659E70(v47, (int)v63, v44, (unsigned int *)(v5 + 64), (__int64)v26);
      v35 = v10;
      if ( v10 < 0 )
      {
LABEL_27:
        v34 |= 0x40000u;
        goto LABEL_82;
      }
      if ( !v45 )
      {
        if ( (unsigned int)++v48 >= 0xA )
        {
          v41 = 1;
LABEL_72:
          if ( a5 )
          {
            v34 |= 0x10u;
            v10 = 0;
          }
          else
          {
            v34 |= 0x20000u;
LABEL_52:
            v10 = -1073740760;
          }
          v35 = v10;
          goto LABEL_82;
        }
        v5 = v60;
        v61 = v60;
      }
    }
  }
LABEL_83:
  if ( a5 )
  {
    *(_DWORD *)a5 = 48;
    *(_DWORD *)(a5 + 4) = v10;
    *(_DWORD *)(a5 + 8) = v34;
    *(_QWORD *)(a5 + 16) = 0LL;
    *(_QWORD *)(a5 + 32) = v49;
    *(_QWORD *)(a5 + 40) = v50;
    if ( v46 )
      *(_QWORD *)(a5 + 24) = v55;
    if ( v10 >= 0 )
      v10 = sub_140A330F8(a5, v7, v42, v6, v43, v41, (__int64)v9, v51, Src, v33);
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x72634943u);
  if ( v10 >= 0 && v46 )
    return (unsigned int)-1073740285;
  return (unsigned int)v10;
}
