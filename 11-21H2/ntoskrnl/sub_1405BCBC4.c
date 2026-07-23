/*
 * XREFs of sub_1405BCBC4 @ 0x1405BCBC4
 * Callers:
 *     sub_1405BDB0C @ 0x1405BDB0C (sub_1405BDB0C.c)
 *     sub_1405BE588 @ 0x1405BE588 (sub_1405BE588.c)
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 *     sub_1405BF56C @ 0x1405BF56C (sub_1405BF56C.c)
 *     sub_140981BB0 @ 0x140981BB0 (sub_140981BB0.c)
 *     sub_140981F58 @ 0x140981F58 (sub_140981F58.c)
 *     sub_140982150 @ 0x140982150 (sub_140982150.c)
 * Callees:
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140586A44 @ 0x140586A44 (sub_140586A44.c)
 *     sub_140588F74 @ 0x140588F74 (sub_140588F74.c)
 *     sub_1405AD9AC @ 0x1405AD9AC (sub_1405AD9AC.c)
 *     sub_1405BF6B4 @ 0x1405BF6B4 (sub_1405BF6B4.c)
 *     sub_1405BF718 @ 0x1405BF718 (sub_1405BF718.c)
 *     sub_1405BFE08 @ 0x1405BFE08 (sub_1405BFE08.c)
 *     sub_140968AF4 @ 0x140968AF4 (sub_140968AF4.c)
 *     sub_14096A988 @ 0x14096A988 (sub_14096A988.c)
 *     sub_14098194C @ 0x14098194C (sub_14098194C.c)
 *     sub_140981EE4 @ 0x140981EE4 (sub_140981EE4.c)
 */

void __fastcall sub_1405BCBC4(__int64 a1, unsigned __int64 a2, __int64 a3, __int16 **a4)
{
  int v5; // r14d
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // r9
  unsigned __int64 v13; // r10
  __int64 v14; // r11
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r8
  _QWORD *v17; // rbx
  unsigned __int64 i; // rax
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rsi
  _DWORD *v22; // r10
  _DWORD *v23; // r8
  _DWORD *v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // r15
  unsigned __int64 v27; // rax
  __int64 v28; // r9
  ULONG_PTR v29; // r15
  int v30; // ecx
  ULONG_PTR *v31; // rax
  unsigned __int64 v32; // r8
  ULONG_PTR *v33; // rcx
  __int16 v34; // r10
  __int64 v35; // r14
  unsigned __int8 CurrentIrql; // r13
  __int64 v37; // rbx
  unsigned __int64 v38; // r12
  unsigned __int8 v39; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v41; // r9
  int v42; // eax
  unsigned __int64 *v43; // r14
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  unsigned __int64 *v46; // r12
  _QWORD *v47; // r13
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rdx
  unsigned __int64 *v50; // rax
  unsigned __int64 *v51; // rcx
  unsigned __int64 v52; // rcx
  __int64 *v53; // r8
  __int64 v54; // r9
  bool v55; // zf
  bool j; // zf
  unsigned __int64 *v57; // rbx
  __int16 *v58; // rdx
  bool v59; // r8
  __int16 *v60; // rax
  __int64 v61; // r14
  unsigned __int64 v62; // r8
  int v63; // r9d
  int v64; // edx
  int v65; // ecx
  int v66; // edx
  char v67; // al
  int v68; // r8d
  int v69; // r14d
  int v70; // eax
  unsigned __int64 v71; // [rsp+30h] [rbp-48h]
  unsigned __int64 v72; // [rsp+30h] [rbp-48h]
  signed __int64 v73; // [rsp+38h] [rbp-40h] BYREF
  int v74; // [rsp+40h] [rbp-38h]
  int v75; // [rsp+44h] [rbp-34h] BYREF
  unsigned __int64 *v76; // [rsp+48h] [rbp-30h]
  __int64 v77; // [rsp+50h] [rbp-28h]
  ULONG_PTR v78; // [rsp+58h] [rbp-20h] BYREF
  unsigned __int64 v79; // [rsp+60h] [rbp-18h]
  int v81; // [rsp+C8h] [rbp+50h]
  unsigned int v82; // [rsp+D0h] [rbp+58h]
  unsigned int v83; // [rsp+D8h] [rbp+60h]

  v82 = a3;
  v81 = a2;
  v78 = 0LL;
  v73 = 0LL;
  v5 = a2;
  *((_DWORD *)a4 + 6) = 0;
  v6 = a1;
  v83 = 0;
  if ( (unsigned int)a2 <= 3 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( (v7 & 0x4000000000000000LL) != 0 )
    {
      v83 = 1;
      *(_QWORD *)(a1 + 24) = v7 & 0xBFFFFFFFFFFFFFFFuLL;
    }
  }
  v8 = a1 + 32;
  v9 = 0LL;
  v77 = a1 + 32;
  while ( 1 )
  {
    if ( *(__int64 *)(v6 + 24) < 0 )
    {
      v10 = *(_QWORD *)v8;
      v11 = 0LL;
      v12 = 0LL;
      goto LABEL_48;
    }
    v13 = *(_QWORD *)v8;
    v14 = *(_QWORD *)(v8 + 8);
    v15 = v9 & -(__int64)(v9 < *(_QWORD *)v8);
    v16 = *(_QWORD *)v8 - 1LL;
    while ( 1 )
    {
      v74 = 0;
      if ( v16 - v15 == -1LL )
        goto LABEL_9;
      a2 = (1LL << (v15 & 0x3F)) - 1;
      v17 = (_QWORD *)(v14 + 8 * (v15 >> 6));
      for ( i = a2 | ~*v17; i == -1LL; i = ~*v17 )
      {
        if ( (unsigned __int64)++v17 > v14 + 8 * (v16 >> 6) )
          goto LABEL_9;
      }
      _BitScanForward64(&i, ~i);
      v11 = i + (((__int64)v17 - v14) >> 3 << 6);
      v74 = i;
      if ( v11 > v16 )
      {
LABEL_9:
        v11 = -1LL;
      }
      else if ( v11 != -1LL )
      {
        break;
      }
      if ( !v15 )
        break;
      v19 = v9 + 1;
      if ( v9 + 1 > v13 )
        v19 = v13;
      v16 = v19 - 1;
      v15 = 0LL;
    }
    if ( v11 < v9 || v11 == -1LL )
      return;
    v20 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 <= v11 )
    {
      v12 = 0LL;
LABEL_46:
      v21 = *(_QWORD *)v8;
      goto LABEL_47;
    }
    v21 = v11;
    v22 = (_DWORD *)(v14 + 4 * ((v20 - 1) >> 5));
    v23 = (_DWORD *)(v14 + 4 * (v11 >> 5));
    if ( v23 != v22 )
    {
      a2 = 0xFFFFFFFFLL;
      if ( (*v23 | *((_DWORD *)qword_140015FA0 + (v11 & 0x1F))) == -1 )
      {
        v21 = (v11 & 0xFFFFFFFFFFFFFFE0uLL) + 32;
        for ( ++v23; v23 < v22 && *v23 == -1; ++v23 )
          v21 += 32LL;
      }
    }
    for ( ; v21 < v20; ++v21 )
    {
      if ( !_bittest64(*(const signed __int64 **)(v8 + 8), v21) )
        break;
    }
    v12 = 0LL;
    if ( v23 != v22 )
    {
      a2 = (unsigned int)*v23;
      if ( ((unsigned int)a2 & ~*((_DWORD *)qword_140015FA0 + (v21 & 0x1F))) == 0 )
      {
        v12 = 32 - (v21 & 0x1F);
        if ( v12 == -1 )
          goto LABEL_45;
        v24 = v23 + 1;
        while ( v24 < v22 && !*v24 )
        {
          ++v24;
          v12 += 32LL;
          if ( v12 == -1 )
            goto LABEL_45;
        }
      }
    }
    v25 = v12 + v21;
    if ( v12 + v21 < *(_QWORD *)v8 )
    {
      a2 = *(_QWORD *)(v8 + 8);
      do
      {
        if ( _bittest64((const signed __int64 *)a2, v25) )
          break;
        if ( v12 == -1 )
          break;
        ++v25;
        ++v12;
      }
      while ( v25 < *(_QWORD *)v8 );
    }
LABEL_45:
    if ( !v12 )
      goto LABEL_46;
LABEL_47:
    a3 = v82;
    v10 = v21 - v11;
LABEL_48:
    v26 = *(_QWORD *)(v6 + 24);
    v27 = v12 + v11 + v10;
    v71 = v10;
    v28 = 0x3FFFFFFFFFFFFFFFLL;
    v79 = v27;
    v29 = v11 + (v26 & 0x3FFFFFFFFFFFFFFFLL);
    v30 = 0;
    if ( (unsigned int)(v5 - 11) > 1 )
    {
      if ( v29 > qword_140C50840
        || (a2 = 0xFFFFDE0000000028uLL, (*(_QWORD *)(48 * v29 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0) )
      {
        v30 = 1;
      }
      if ( v5 == 7 )
        goto LABEL_170;
      if ( v5 == 8 )
      {
        v31 = (ULONG_PTR *)&a4[7][8 * ((_QWORD)a4[5] + 1)];
        *v31 = v29;
        v31[1] = v10;
        goto LABEL_170;
      }
    }
    if ( !v5 )
    {
      sub_14098194C(*a4, v29, v10, v83);
      goto LABEL_170;
    }
    if ( ((v5 - 1) & 0xFFFFFFFD) != 0 )
      break;
    if ( v30 )
    {
      sub_140586A44(v29, v10, 1);
      *((_DWORD *)a4 + 6) = 0;
    }
    else
    {
      v70 = sub_140981EE4(v29, v10, v5, v83, a3);
      *((_DWORD *)a4 + 6) = v70;
      if ( v70 < 0 )
        return;
    }
    RtlClearBitsEx(v8, v11, v10);
    *(_QWORD *)(v6 + 24) &= ~0x8000000000000000uLL;
LABEL_170:
    a4[5] = (__int16 *)((char *)a4[5] + 1);
    a4[6] = (__int16 *)((char *)a4[6] + v10);
    v9 = v79;
    if ( v79 >= *(_QWORD *)v8 )
      return;
    a3 = v82;
  }
  switch ( v5 )
  {
    case 4:
      if ( !v30 )
      {
        a2 = (v29 + 511) & 0xFFFFFFFFFFFFFE00uLL;
        v32 = (a2 + v10) & 0xFFFFFFFFFFFFFE00uLL;
        if ( a2 < v32 )
          sub_1402C38D0((__int64)*a4, a2, v32 - a2, 1, 0);
      }
      goto LABEL_170;
    case 5:
      if ( !(unsigned int)sub_1405BF6B4(*a4, v29, v10) )
        *((_DWORD *)a4 + 6) = -1073741670;
      goto LABEL_170;
    case 6:
      if ( !v30 && *a4 == (__int16 *)&StartContext )
        sub_1402C38D0((__int64)*a4, v29, v10, 0, 0);
      sub_1405BF718(a4[1], *a4, v29, v10);
      goto LABEL_170;
    case 10:
      if ( v30 )
      {
        sub_140588F74((unsigned __int16 *)*a4, (__int64)a4[1], v29, v10);
        goto LABEL_170;
      }
      v33 = (ULONG_PTR *)a4[1];
      if ( v33 != &StartContext )
        sub_1402C38D0((__int64)v33, v29, v10, 0, 0);
      v34 = **a4;
      v35 = 48 * v29 - 0x220000000000LL;
      v72 = v35 + 48 * v10;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v28 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        a2 = (-1LL << (CurrentIrql + 1)) & 4;
        a3 = (unsigned int)a2 | *(_DWORD *)(v28 + 20);
        *(_DWORD *)(v28 + 20) = a3;
      }
      v37 = v35 + 24;
      v38 = (unsigned __int64)(v34 & 0x3FF) << 43;
      do
      {
        v75 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v37, 0x3FuLL) )
        {
          do
            sub_1402F32E0(&v75, a2, a3, v28);
          while ( *(__int64 *)v37 < 0 );
        }
        if ( (*(_BYTE *)(v37 + 11) & 0x40) != 0 )
          sub_1405AD9AC(v35, (__int64)a4[1], (__int64)*a4);
        *(_QWORD *)(v37 + 16) = v38 | *(_QWORD *)(v37 + 16) & 0xFFE007FFFFFFFFFFuLL;
        _InterlockedAnd64((volatile signed __int64 *)v37, 0x7FFFFFFFFFFFFFFFuLL);
        v35 += 48LL;
        v37 += 48LL;
      }
      while ( v35 != v72 );
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v39 = KeGetCurrentIrql();
          if ( v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v41 = *((_QWORD *)CurrentPrcb + 4375);
            v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v55 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
            *(_DWORD *)(v41 + 20) &= v42;
            if ( v55 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      sub_1405BFE08(*a4, a4[1], v29, v10);
LABEL_137:
      v5 = v81;
      v8 = v77;
      v6 = a1;
      goto LABEL_170;
  }
  if ( v5 != 2 && (unsigned int)(v5 - 11) > 1 )
  {
    if ( v5 == 13 )
    {
      __debugbreak();
      goto LABEL_170;
    }
    *((_QWORD *)*a4 + 2090) -= v10;
    *((_BYTE *)*a4 + 12) = 1;
    v43 = (unsigned __int64 *)*((_QWORD *)*a4 + 3);
    if ( !v43 )
      goto LABEL_105;
    v44 = *(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    do
    {
      v45 = v43[3] & 0x3FFFFFFFFFFFFFFFLL;
      if ( v44 >= v45 )
      {
        if ( v44 < v43[4] + v45 )
          goto LABEL_105;
        v43 = (unsigned __int64 *)v43[1];
      }
      else
      {
        v43 = (unsigned __int64 *)*v43;
      }
    }
    while ( v43 );
    do
    {
LABEL_105:
      v46 = v43 + 4;
      v76 = v43;
      v47 = v43 + 3;
      v48 = v10;
      v49 = v29 - (v43[3] & 0x3FFFFFFFFFFFFFFFLL);
      if ( v43[4] - v49 <= v10 )
        v48 = v43[4] - v49;
      RtlClearBitsEx((__int64)(v43 + 4), v49, v48);
      v29 += v48;
      *v47 &= ~0x8000000000000000uLL;
      v10 -= v48;
      if ( v10 )
      {
        v50 = (unsigned __int64 *)v43[1];
        v51 = v43;
        if ( v50 )
        {
          do
          {
            v43 = v50;
            v50 = (unsigned __int64 *)*v50;
          }
          while ( v50 );
        }
        else
        {
          while ( 1 )
          {
            v43 = (unsigned __int64 *)(v43[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v43 || (unsigned __int64 *)*v43 == v51 )
              break;
            v51 = v43;
          }
        }
      }
      v52 = *v46;
      if ( !*v46 )
        continue;
      if ( v52 <= 1 )
      {
        if ( v52 != 1 || _bittest64((const signed __int64 *)v46[1], 0) )
          continue;
LABEL_127:
        v57 = v76;
        RtlAvlRemoveNode((unsigned __int64 *)*a4 + 3, v76);
        v58 = a4[4];
        v59 = 0;
        if ( !v58 )
          goto LABEL_134;
        while ( 1 )
        {
          if ( (*v47 & 0x3FFFFFFFFFFFFFFFuLL) >= (*((_QWORD *)v58 + 3) & 0x3FFFFFFFFFFFFFFFuLL) )
          {
            v60 = (__int16 *)*((_QWORD *)v58 + 1);
            if ( !v60 )
            {
              v59 = 1;
LABEL_134:
              RtlAvlInsertNodeEx((unsigned __int64 *)a4 + 4, (unsigned __int64)v58, v59, v57);
              goto LABEL_135;
            }
          }
          else
          {
            v60 = *(__int16 **)v58;
            if ( !*(_QWORD *)v58 )
            {
              v59 = 0;
              goto LABEL_134;
            }
          }
          v58 = v60;
        }
      }
      v53 = (__int64 *)v46[1];
      v54 = *v53;
      a2 = (unsigned __int64)&v53[(v52 - 1) >> 6];
      if ( v53 == (__int64 *)a2 )
      {
        a2 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v52);
        v55 = (v54 & a2) == 0;
      }
      else
      {
        for ( j = v54 == 0; ; j = *v53 == 0 )
        {
          if ( !j )
            goto LABEL_135;
          if ( ++v53 == (__int64 *)a2 )
            break;
        }
        a2 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v52 - 1);
        v55 = (a2 & *v53) == 0;
      }
      if ( v55 )
        goto LABEL_127;
LABEL_135:
      ;
    }
    while ( v10 );
    v10 = v71;
    goto LABEL_137;
  }
  v55 = *((_BYTE *)a4 + 18) == 0;
  v73 = v10 << 12;
  if ( v55 )
  {
    v78 = v29 << 12;
    if ( v5 == 2 )
    {
      v63 = 0;
      v64 = (v83 + 128) << 9;
    }
    else
    {
      v64 = 128;
      v63 = 1;
      if ( v5 != 11 )
        v64 = 0x40000;
    }
    v65 = v64 | 0x400;
    if ( !*((_BYTE *)a4 + 17) )
      v65 = v64;
    v66 = v65 | 0x20000;
    v67 = a3;
    if ( (a3 & 0x40) == 0 )
      v66 = v65;
    v68 = v66 | 0x800;
    if ( v67 >= 0 )
      v68 = v66;
    v69 = v68 | 0x100000;
    if ( (*((_DWORD *)*a4 + 1) & 0x100) == 0 )
      v69 = v68;
    if ( (int)sub_140968AF4((unsigned int)*a4, (unsigned int)&v78, (unsigned int)&v73, v69, v63) >= 0
      && (v69 & 0x80u) == 0
      && *a4 != (__int16 *)&StartContext
      && (v69 & 0x100000) == 0 )
    {
      _InterlockedExchangeAdd64(&qword_140C53530, v73 / 4096);
    }
  }
  else
  {
    if ( v83 && *((_DWORD *)a4 + 5) == 2 )
      *((_DWORD *)a4 + 5) = 1;
    sub_14096A988((unsigned int)*a4, v29, v10, *((unsigned __int8 *)a4 + 17), *((_DWORD *)a4 + 5), 0);
  }
  a2 = v73 % 4096;
  v61 = v73 / 4096;
  if ( !*((_BYTE *)a4 + 18) && *a4 != (__int16 *)&StartContext )
  {
    a2 = (v29 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v62 = (a2 + v61) & 0xFFFFFFFFFFFFFE00uLL;
    if ( a2 < v62 )
      sub_1402C38D0((__int64)&StartContext, a2, v62 - a2, 1, 0);
  }
  if ( v61 == v10 )
  {
    v5 = v81;
    goto LABEL_170;
  }
  *((_DWORD *)a4 + 6) = -1073741823;
  RtlClearBitsEx(v8, v11 + v61, *(_QWORD *)v8 - v11 - v61);
  if ( v61 )
    a4[5] = (__int16 *)((char *)a4[5] + 1);
  *(_QWORD *)(v6 + 24) &= ~0x8000000000000000uLL;
  a4[6] = (__int16 *)((char *)a4[6] + v61);
}
