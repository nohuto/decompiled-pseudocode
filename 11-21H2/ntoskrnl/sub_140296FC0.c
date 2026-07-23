/*
 * XREFs of sub_140296FC0 @ 0x140296FC0
 * Callers:
 *     RtlVirtualUnwind @ 0x140294B90 (RtlVirtualUnwind.c)
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     RtlVirtualUnwind2 @ 0x140296070 (RtlVirtualUnwind2.c)
 *     sub_140296110 @ 0x140296110 (sub_140296110.c)
 * Callees:
 *     sub_14025D8EC @ 0x14025D8EC (sub_14025D8EC.c)
 *     sub_14025DAA8 @ 0x14025DAA8 (sub_14025DAA8.c)
 *     sub_14025DAE4 @ 0x14025DAE4 (sub_14025DAE4.c)
 *     sub_140297430 @ 0x140297430 (sub_140297430.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_1405EE570 @ 0x1405EE570 (sub_1405EE570.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140296FC0(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        _BYTE *a6,
        _QWORD *a7,
        unsigned __int64 *a8,
        __int64 *a9,
        __int64 a10)
{
  int v13; // ebx
  int v14; // r13d
  __int64 v15; // rdi
  char v16; // al
  unsigned int v17; // ecx
  _BYTE *v18; // r15
  int v19; // r14d
  __int64 v20; // r10
  unsigned __int64 v21; // rdx
  __int64 result; // rax
  _BYTE *v23; // rdx
  unsigned __int8 *v24; // r10
  unsigned int v25; // edx
  __int16 v26; // r8
  unsigned int v27; // r13d
  int v28; // r11d
  int v29; // r8d
  unsigned int j; // ecx
  unsigned __int16 v31; // r11
  int v32; // r8d
  bool v33; // zf
  int v34; // r8d
  _BYTE *v35; // r9
  int v36; // ecx
  int v37; // eax
  char *v38; // rcx
  char v39; // r13
  char v40; // dl
  char *v41; // r13
  __int64 v42; // r9
  unsigned __int64 v43; // rbx
  int v44; // ecx
  __int64 v45; // rax
  unsigned int i; // ecx
  __int64 v47; // rdx
  unsigned __int16 v48; // cx
  int v49; // r13d
  char v50; // dl
  __int64 v51; // rax
  int v52; // eax
  unsigned __int64 v53; // r13
  unsigned __int64 v54; // rcx
  _DWORD *v55; // rax
  __int64 v56; // r13
  char *v57; // rdx
  char v58; // al
  char v59; // al
  __int64 v60; // rcx
  __int64 v61; // rdi
  char v62; // r14
  unsigned __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  char v67; // r12
  unsigned __int64 v68; // r9
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  unsigned __int64 v72; // rdx
  _QWORD *v73; // rcx
  unsigned int v74; // [rsp+40h] [rbp-68h]
  unsigned int v75; // [rsp+40h] [rbp-68h]
  int v76; // [rsp+50h] [rbp-58h]
  int v77; // [rsp+50h] [rbp-58h]
  unsigned int v78; // [rsp+58h] [rbp-50h]
  unsigned int v79; // [rsp+58h] [rbp-50h]
  unsigned int v80; // [rsp+60h] [rbp-48h]
  __int64 v81; // [rsp+70h] [rbp-38h]
  unsigned int *v82; // [rsp+C8h] [rbp+20h] BYREF

  v82 = a4;
  if ( !a4 )
  {
    v42 = a5;
    v43 = *(_QWORD *)(a5 + 152);
    if ( a3 <= 0x7FFFFFFEFFFFLL && (v43 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( !*(_QWORD *)a10 || v43 >= **(_QWORD **)a10 && v43 <= **(_QWORD **)(a10 + 8) - 8LL )
    {
      if ( a3 == *(_QWORD *)v43 )
        return 3221225727LL;
      *(_QWORD *)(a5 + 248) = *(_QWORD *)v43;
      *(_QWORD *)(v42 + 152) += 8LL;
      sub_14025DAE4((_DWORD *)v42, 1, 1);
      *a8 = v43;
      if ( a6 )
        *a6 = 0;
      *a7 = 0LL;
      if ( a9 )
        *a9 = 0LL;
      return 0LL;
    }
    return 3221225512LL;
  }
  v13 = 0;
  v81 = 0LL;
  v14 = 0;
  v15 = a2 + a4[2];
  if ( a3 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (v15 & 3) != 0 )
      goto LABEL_65;
    a4 = v82;
  }
  v16 = *(_BYTE *)v15;
  v17 = *(_BYTE *)v15 & 7;
  v74 = v17;
  v18 = a6;
  if ( !a6 || *a6 )
  {
    if ( v17 < 2 )
    {
      v23 = (_BYTE *)v15;
      v77 = 0;
      v24 = (unsigned __int8 *)(v15 + 2);
      if ( *(_BYTE *)(v15 + 2) )
        goto LABEL_22;
      while ( 1 )
      {
        if ( (v16 & 0x20) == 0 )
        {
          v14 = 1;
          a4 = v82;
          v17 = *(_BYTE *)v15 & 7;
          goto LABEL_6;
        }
        v44 = *v24;
        v45 = (unsigned int)(v44 + 1);
        if ( (v44 & 1) == 0 )
          v45 = *v24;
        if ( (unsigned int)++v77 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v23 = (_BYTE *)(a2 + *(unsigned int *)&v23[2 * v45 + 12]);
        if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v23 & 3) != 0 )
          goto LABEL_65;
        v24 = v23 + 2;
        if ( v23[2] )
          break;
        v16 = *v23;
      }
      a4 = v82;
      v17 = *(_BYTE *)v15 & 7;
LABEL_22:
      if ( a1 < 0 )
        return 3221225512LL;
    }
  }
  else
  {
    v14 = 1;
  }
LABEL_6:
  v19 = a1 & 0x7FFFFFFF;
  v76 = 0;
  if ( (*(_BYTE *)(v15 + 3) & 0xF) != 0 )
  {
    v78 = a3 - a2 - *a4;
    if ( v78 >= *(unsigned __int8 *)(v15 + 1) || (*(_BYTE *)v15 & 0x20) != 0 )
    {
      v76 = 1;
      goto LABEL_19;
    }
    for ( i = 0; ; i = sub_14025DAA8(v48) + v80 )
    {
      v80 = i;
      v47 = i;
      if ( i >= *(unsigned __int8 *)(v15 + 2) )
        break;
      v48 = *(_WORD *)(v15 + 2LL * i + 4);
      if ( (HIBYTE(v48) & 0xF) == 3 )
        break;
    }
    a4 = v82;
    v17 = v74;
    if ( v78 >= *(unsigned __int8 *)(v15 + 2 * v47 + 4) )
      v76 = 1;
  }
  if ( v76 )
  {
LABEL_19:
    v20 = a5;
    v21 = *(_QWORD *)(a5 + 8LL * (*(_BYTE *)(v15 + 3) & 0xF) + 120) - (*(_BYTE *)(v15 + 3) & 0xF0);
    v17 = v74;
    goto LABEL_9;
  }
  v20 = a5;
  v21 = *(_QWORD *)(a5 + 152);
LABEL_9:
  *a8 = v21;
  if ( v14 )
  {
LABEL_10:
    result = sub_140297430(a2, a3, *a8, (_DWORD)a4, v20, (__int64)v18, (__int64)&v82, a10);
    if ( (int)result < 0 )
      return result;
    if ( !v19 )
      goto LABEL_12;
    v35 = (_BYTE *)(a2 + v82[2]);
    if ( a3 > 0x7FFFFFFEFFFFLL || ((unsigned __int8)v35 & 3) == 0 )
    {
      if ( (_DWORD)a3 - (_DWORD)a2 - *v82 >= (unsigned __int8)v35[1] && ((*v35 >> 3) & (unsigned __int8)v19) != 0 )
      {
        v36 = (unsigned __int8)v35[2];
        v37 = v36 + 1;
        if ( (v36 & 1) == 0 )
          v37 = (unsigned __int8)v35[2];
        *a7 = &v35[2 * (v37 + 2) + 4];
        v81 = a2 + *(unsigned int *)&v35[2 * v37 + 4];
      }
      goto LABEL_12;
    }
LABEL_65:
    ExRaiseDatatypeMisalignment();
  }
  if ( v17 >= 2 )
  {
    v25 = *(unsigned __int8 *)(v15 + 2);
    if ( (_BYTE)v25 )
    {
      v26 = *(_WORD *)(v15 + 4);
      if ( (HIBYTE(v26) & 0xF) == 6 )
      {
        v27 = (unsigned __int8)v26;
        v79 = (unsigned __int8)v26;
        v28 = a3 - a2;
        if ( (v26 & 0x1000) != 0 )
        {
          v29 = a4[1] - (unsigned __int8)v26;
          LOBYTE(v13) = v28 - v29 < v27;
        }
        else
        {
          v29 = 0;
        }
        if ( !v13 )
        {
          for ( j = 1; ; ++j )
          {
            if ( j >= v25 )
              goto LABEL_10;
            v31 = *(_WORD *)(v15 + 2LL * j + 4);
            if ( (HIBYTE(v31) & 0xF) != 6 )
              goto LABEL_10;
            v32 = (unsigned __int16)HIBYTE(v31) >> 4 << 8;
            v33 = (unsigned __int8)v31 + v32 == 0;
            v34 = (unsigned __int8)v31 + v32;
            v28 = a3 - a2;
            if ( v33 )
              goto LABEL_10;
            v29 = a4[1] - v34;
            if ( (int)a3 - (int)a2 - v29 < v79 )
              break;
          }
          v13 = 1;
        }
        sub_14025D8EC(a2, a3, v28 - v29, a4, v20, a10);
        if ( v18 )
          *v18 = 0;
        goto LABEL_12;
      }
    }
    goto LABEL_10;
  }
  v38 = (char *)a3;
  v75 = 0;
  v39 = *(_BYTE *)a3;
  if ( *(_BYTE *)a3 == 72 )
  {
    if ( *(_BYTE *)(a3 + 1) == 0x83 && *(_BYTE *)(a3 + 2) == 0xC4 )
    {
      v38 = (char *)(a3 + 4);
      goto LABEL_50;
    }
    if ( *(_BYTE *)(a3 + 1) == 0x81 && *(_BYTE *)(a3 + 2) == 0xC4 )
      goto LABEL_107;
  }
  if ( (v39 & 0xFE) == 0x48 && *(_BYTE *)(a3 + 1) == 0x8D )
  {
    v49 = *(_BYTE *)(a3 + 2) & 7 | (8 * (v39 & 1));
    v75 = v49;
    if ( v49 )
    {
      if ( v49 == (*(_BYTE *)(v15 + 3) & 0xF) )
      {
        v50 = *(_BYTE *)(a3 + 2) & 0xF8;
        if ( v50 == 96 )
        {
          v38 = (char *)(a3 + 4);
          goto LABEL_50;
        }
        if ( v50 == -96 )
LABEL_107:
          v38 = (char *)(a3 + 7);
      }
    }
  }
  while ( 1 )
  {
LABEL_50:
    v40 = *v38;
    if ( (*v38 & 0xF8) == 0x58 )
    {
      v51 = 1LL;
      goto LABEL_111;
    }
    v41 = v38 + 1;
    if ( (v40 & 0xF0) != 0x40 || (*v41 & 0xF8) != 0x58 )
      break;
    v51 = 2LL;
LABEL_111:
    v38 += v51;
  }
  if ( v40 == -14 )
  {
    ++v38;
    v40 = *v41;
  }
  if ( (unsigned __int8)(v40 + 62) <= 1u || v40 == -13 && v38[1] == -61 )
    goto LABEL_133;
  if ( ((v40 + 23) & 0xFD) != 0 )
  {
    if ( v40 != -1 || v38[1] != 37 )
    {
      if ( (v40 & 0xF8) == 0x48 && v38[1] == -1 && (v38[2] & 0x38) == 0x20 )
        v13 = 1;
      goto LABEL_59;
    }
LABEL_133:
    v13 = 1;
    goto LABEL_134;
  }
  if ( v40 == -21 )
    v52 = v38[1] + 2;
  else
    v52 = *(_DWORD *)(v38 + 1) + 5;
  v53 = (unsigned __int64)&v38[v52 - a2];
  v54 = *a4;
  if ( v53 < v54 || v53 >= a4[1] )
  {
    if ( a3 <= 0x7FFFFFFEFFFFLL )
      a4 = v82;
    v55 = (_DWORD *)sub_1405EE570(a4, a2, a2 + v53);
    if ( v55 && v53 != *v55 )
    {
      LODWORD(a4) = (_DWORD)v82;
      v20 = a5;
      goto LABEL_59;
    }
    v20 = a5;
    goto LABEL_133;
  }
  if ( v53 == v54 && (*(_BYTE *)v15 & 0x20) == 0 )
    v13 = 1;
LABEL_59:
  if ( !v13 )
    goto LABEL_10;
LABEL_134:
  v56 = v20 + 120;
  v57 = (char *)a3;
  if ( (*(_BYTE *)a3 & 0xF8) != 0x48 )
    goto LABEL_145;
  v58 = *(_BYTE *)(a3 + 1);
  switch ( v58 )
  {
    case -125:
      *(_QWORD *)(v20 + 152) += *(char *)(a3 + 3);
      v57 = (char *)(a3 + 4);
      break;
    case -127:
      *(_QWORD *)(v20 + 152) += ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8) | *(unsigned __int8 *)(a3 + 3);
      goto LABEL_144;
    case -115:
      v59 = *(_BYTE *)(a3 + 2) & 0xF8;
      if ( v59 == 96 )
      {
        v60 = *(_QWORD *)(v56 + 8LL * v75);
        *(_QWORD *)(v20 + 152) = v60;
        *(_QWORD *)(v20 + 152) = v60 + *(char *)(a3 + 3);
        v57 = (char *)(a3 + 4);
      }
      else if ( v59 == -96 )
      {
        *(_QWORD *)(v20 + 152) = *(_QWORD *)(v56 + 8LL * v75)
                               + (*(unsigned __int8 *)(a3 + 3) | ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8));
LABEL_144:
        v57 = (char *)(a3 + 7);
      }
      break;
  }
LABEL_145:
  v61 = a10;
  while ( 2 )
  {
    v62 = *v57;
    if ( (*v57 & 0xF8) == 0x58 )
    {
      v63 = *(_QWORD *)(v20 + 152);
      if ( a3 <= 0x7FFFFFFEFFFFLL && (v63 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( *(_QWORD *)v61 )
      {
        if ( v63 < **(_QWORD **)v61 )
          return 3221225512LL;
        if ( v63 > **(_QWORD **)(v61 + 8) - 8LL )
          return 3221225512LL;
      }
      v64 = v62 & 7;
      *(_QWORD *)(v56 + 8 * v64) = *(_QWORD *)v63;
      v65 = *(_QWORD *)(v61 + 16);
      if ( v65 )
        *(_QWORD *)(v65 + 8 * v64 + 128) = v63;
      v66 = 1LL;
LABEL_169:
      *(_QWORD *)(v20 + 152) += 8LL;
      v57 += v66;
      continue;
    }
    break;
  }
  if ( (v62 & 0xF0) == 0x40 )
  {
    v67 = v57[1];
    if ( (v67 & 0xF8) == 0x58 )
    {
      v68 = *(_QWORD *)(v20 + 152);
      if ( a3 <= 0x7FFFFFFEFFFFLL && (v68 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( *(_QWORD *)v61 )
      {
        if ( v68 < **(_QWORD **)v61 )
          return 3221225512LL;
        if ( v68 > **(_QWORD **)(v61 + 8) - 8LL )
          return 3221225512LL;
      }
      v69 = v67 & 7 | (8LL * (v62 & 1));
      *(_QWORD *)(v56 + 8 * v69) = *(_QWORD *)v68;
      v70 = *(_QWORD *)(v61 + 16);
      if ( v70 )
        *(_QWORD *)(v70 + 8 * v69 + 128) = v68;
      v66 = 2LL;
      goto LABEL_169;
    }
  }
  if ( a3 <= 0x7FFFFFFEFFFFLL )
  {
    v71 = *(_QWORD *)(v20 + 152);
    if ( (v71 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  if ( !*(_QWORD *)v61 )
    goto LABEL_177;
  v72 = *(_QWORD *)(v20 + 152);
  if ( v72 < **(_QWORD **)v61 )
    return 3221225512LL;
  if ( v72 > **(_QWORD **)(v61 + 8) - 8LL )
    return 3221225512LL;
LABEL_177:
  v73 = *(_QWORD **)(v20 + 152);
  *(_QWORD *)(v20 + 248) = *v73;
  *(_QWORD *)(v20 + 152) = v73 + 1;
  sub_14025DAE4((_DWORD *)v20, 1, 1);
  if ( v18 )
    *v18 = 0;
LABEL_12:
  if ( a9 )
    *a9 = v81;
  if ( v13 )
  {
    if ( v76 )
      *a8 = *(_QWORD *)(a5 + 152) - 8LL;
  }
  return 0LL;
}
