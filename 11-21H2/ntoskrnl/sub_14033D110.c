/*
 * XREFs of sub_14033D110 @ 0x14033D110
 * Callers:
 *     sub_14033CBF0 @ 0x14033CBF0 (sub_14033CBF0.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_140259330 @ 0x140259330 (sub_140259330.c)
 *     sub_1402946B8 @ 0x1402946B8 (sub_1402946B8.c)
 *     sub_140294824 @ 0x140294824 (sub_140294824.c)
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     sub_1402EC3E4 @ 0x1402EC3E4 (sub_1402EC3E4.c)
 *     sub_1402EC920 @ 0x1402EC920 (sub_1402EC920.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_140340390 @ 0x140340390 (sub_140340390.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_140345AA0 @ 0x140345AA0 (sub_140345AA0.c)
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405786AC @ 0x1405786AC (sub_1405786AC.c)
 */

__int64 __fastcall sub_14033D110(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // r9
  char v7; // r12
  unsigned __int8 CurrentIrql; // r10
  int v9; // r15d
  unsigned __int8 v10; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v12; // rcx
  _QWORD *v13; // r14
  __int64 v14; // r13
  __int64 v15; // r9
  struct _KPRCB *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // esi
  unsigned __int64 v20; // rax
  struct _KPRCB *v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct _KPRCB *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 result; // rax
  __int64 v29; // r9
  struct _KPRCB *v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rsi
  unsigned int v33; // ebp
  __int64 v34; // rax
  struct _KPRCB *v35; // rdi
  struct _KPRCB *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // edx
  __int64 v41; // rcx
  unsigned __int8 v42; // r10
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  _QWORD *v51; // r11
  int v52; // eax
  int v53; // eax
  int v54; // eax
  struct _KPRCB *v55; // rcx
  __int64 v56; // rdx
  bool v57; // zf
  unsigned __int8 v58; // cl
  __int64 v59; // r9
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // ecx
  unsigned __int64 v65; // r11
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  struct _KPRCB *v70; // rsi
  __int64 v71; // rcx
  int v72; // eax
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // rcx
  int v76; // eax
  __int64 v77; // rdx
  struct _KTHREAD **v78; // rcx
  int v79; // [rsp+30h] [rbp-68h] BYREF
  int v80; // [rsp+34h] [rbp-64h] BYREF
  int v81; // [rsp+38h] [rbp-60h] BYREF
  __int64 v82; // [rsp+40h] [rbp-58h]
  char v84; // [rsp+A8h] [rbp+10h]
  unsigned int v85; // [rsp+B0h] [rbp+18h] BYREF
  int v86; // [rsp+B8h] [rbp+20h] BYREF

  v84 = a2;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = a3;
  v82 = 0LL;
  v85 = 0;
  if ( !_bittestandreset((signed __int32 *)CurrentThread + 29, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v29 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | *(_DWORD *)(v29 + 20);
      *(_DWORD *)(v29 + 20) = a3;
      v6 = 0LL;
    }
    *((_BYTE *)CurrentThread + 390) = CurrentIrql;
  }
  if ( a4 )
  {
    if ( *(int *)(a4 + 4) < 0 )
    {
      v50 = sub_1402F5718();
      v9 = 2;
      v82 = v50 - (*v51 + *((_QWORD *)CurrentThread + 31));
      v6 = 0LL;
    }
    else
    {
      v9 = 1;
      v82 = *(_QWORD *)a4;
    }
  }
  else
  {
    v9 = 0;
  }
  while ( 1 )
  {
    v10 = *((_BYTE *)CurrentThread + 390);
    while ( 1 )
    {
      *((_DWORD *)CurrentThread + 29) &= ~0x10u;
      *((_BYTE *)CurrentThread + 112) = 0;
      *((_BYTE *)CurrentThread + 391) = v84;
      if ( v7 )
        *((_DWORD *)CurrentThread + 29) |= 0x10u;
      CurrentPrcb = KeGetCurrentPrcb();
      v86 = 0;
      v12 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v12 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v52 = *(_DWORD *)(v12 + 24);
          *(_DWORD *)(v12 + 24) = v52 + 1;
          if ( v52 == -1 )
LABEL_80:
            sub_140418E4C(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
      {
        v44 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v44 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v53 = *(_DWORD *)(v44 + 24) - 1;
            *(_DWORD *)(v44 + 24) = v53;
            if ( !v53 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(&v86, a2, a3, v6);
        while ( *((_QWORD *)CurrentThread + 8) );
        v45 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v45 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v54 = *(_DWORD *)(v45 + 24);
            *(_DWORD *)(v45 + 24) = v54 + 1;
            if ( v54 == -1 )
              goto LABEL_80;
          }
        }
      }
      if ( !*((_BYTE *)CurrentThread + 193) || *((_WORD *)CurrentThread + 243) || v10 )
        break;
      sub_140224100((__int64)CurrentThread);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v55 = KeGetCurrentPrcb();
          v56 = *((_QWORD *)v55 + 4375);
          v57 = (*(_DWORD *)(v56 + 20) & 0xFFFF0003) == 0;
          *(_DWORD *)(v56 + 20) &= 0xFFFF0003;
          if ( v57 )
            sub_140418E4C(v55);
        }
      }
      __writecr8(1uLL);
      sub_1402F1DC0(0, 0LL, 0LL);
      v58 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v58 <= 0xFu )
      {
        v59 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        a3 = *(unsigned int *)(v59 + 20);
        a2 = (unsigned int)a3 | ~((unsigned __int8)(1LL << (v58 + 1)) - 1) & 4;
        *(_DWORD *)(v59 + 20) = a2;
      }
      *((_BYTE *)CurrentThread + 390) = 0;
      v6 = 0LL;
    }
    v13 = (_QWORD *)((char *)CurrentThread + 320);
    v14 = v82;
    if ( v7 )
    {
      if ( *((_BYTE *)CurrentThread + v84 + 114) )
      {
        *((_BYTE *)CurrentThread + v84 + 114) = 0;
        v32 = 257LL;
LABEL_76:
        sub_140224100((__int64)CurrentThread);
        sub_140294824((__int64)KeGetCurrentPrcb(), v10);
        return v32;
      }
      if ( v84 && *((struct _KTHREAD **)CurrentThread + 21) != (struct _KTHREAD *)((char *)CurrentThread + 168) )
      {
        *((_BYTE *)CurrentThread + 194) |= 2u;
LABEL_107:
        v32 = 192LL;
        goto LABEL_76;
      }
      if ( *((_BYTE *)CurrentThread + 114) )
      {
        *((_BYTE *)CurrentThread + 114) = 0;
        v32 = 257LL;
        goto LABEL_76;
      }
    }
    else if ( (*((_BYTE *)CurrentThread + 194) & 2) != 0 && v84 )
    {
      goto LABEL_107;
    }
    *((_BYTE *)CurrentThread + 388) = 5;
    v15 = 0LL;
    *((_BYTE *)CurrentThread + 643) = 15;
    *((_DWORD *)CurrentThread + 109) = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)CurrentThread + 8) = 0LL;
    v16 = KeGetCurrentPrcb();
    v17 = *((_QWORD *)v16 + 4375);
    if ( v17 )
    {
      if ( *((_BYTE *)v16 + 32) <= 1u )
      {
        v60 = *(_DWORD *)(v17 + 24) - 1;
        *(_DWORD *)(v17 + 24) = v60;
        if ( !v60 )
        {
          sub_140418E4C(v16);
          v15 = 0LL;
        }
      }
    }
    v18 = *((_QWORD *)CurrentThread + 29);
    if ( a1 != v18 )
    {
      sub_140259330((__int64)CurrentThread, a1, v18);
      v15 = 0LL;
    }
    *((_BYTE *)CurrentThread + 336) = 3;
    *((_BYTE *)CurrentThread + 337) = 4;
    v19 = 0;
    *((_WORD *)CurrentThread + 169) = 128;
    *((_QWORD *)CurrentThread + 44) = a1;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
      {
        if ( (++v19 & dword_140D0527C) == 0
          && (dword_140D0689C & 0x40) != 0
          && (unsigned __int8)sub_14039EA10(v16, v17, v18, v15) )
        {
          sub_14039D930(v19);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
      v15 = 0LL;
    }
    if ( *(_DWORD *)(a1 + 4) )
    {
      v30 = KeGetCurrentPrcb();
      v79 = 0;
      v31 = *((_QWORD *)v30 + 4375);
      if ( v31 )
      {
        if ( *((_BYTE *)v30 + 32) <= 1u )
        {
          v61 = *(_DWORD *)(v31 + 24);
          *(_DWORD *)(v31 + 24) = v61 + 1;
          if ( v61 == -1 )
LABEL_116:
            sub_140418E4C(v30);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
      {
        v46 = *((_QWORD *)v30 + 4375);
        if ( v46 )
        {
          if ( *((_BYTE *)v30 + 32) <= 1u )
          {
            v62 = *(_DWORD *)(v46 + 24) - 1;
            *(_DWORD *)(v46 + 24) = v62;
            if ( !v62 )
              sub_140418E4C(v30);
          }
        }
        do
          sub_1402F32E0(&v79, v17, v18, v15);
        while ( *((_QWORD *)CurrentThread + 8) );
        v47 = *((_QWORD *)v30 + 4375);
        if ( v47 )
        {
          if ( *((_BYTE *)v30 + 32) <= 1u )
          {
            v63 = *(_DWORD *)(v47 + 24);
            *(_DWORD *)(v47 + 24) = v63 + 1;
            if ( v63 == -1 )
              goto LABEL_116;
          }
        }
      }
      v32 = (__int64)sub_1402EC920(a1, (int *)&v85, (unsigned __int8)*((_DWORD *)CurrentThread + 135));
      if ( v32 )
      {
        v33 = v85;
        v34 = (unsigned __int8)*((_DWORD *)CurrentThread + 135);
        if ( (_DWORD)v34 != v85 )
        {
          v40 = *((_DWORD *)CurrentThread + 135) & 0x100;
          if ( !v40 )
          {
            v41 = *((_QWORD *)CurrentThread + 29);
            _InterlockedDecrement((volatile signed __int32 *)(v41 + 4 * v34 + 536));
            _InterlockedIncrement((volatile signed __int32 *)(v41 + 4LL * (int)v85 + 536));
            v33 = v85;
          }
          *((_DWORD *)CurrentThread + 135) = v40 | (unsigned __int8)v33;
        }
        *((_BYTE *)CurrentThread + 645) = 0;
        sub_1402EC3E4((__int64)CurrentThread, (char *)&v85, 0);
        if ( v33 != *((char *)CurrentThread + 195) )
        {
          v36 = KeGetCurrentPrcb();
          if ( *((_BYTE *)v36 + 32) )
          {
            v37 = *((_QWORD *)CurrentThread + 9);
          }
          else
          {
            _disable();
            v37 = sub_140345AA0(v36, CurrentThread, 0LL);
            _enable();
          }
          v38 = v37 + dword_140D050CC * (unsigned int)*((unsigned __int8 *)CurrentThread + 651);
          if ( (*((_DWORD *)CurrentThread + 30) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)CurrentThread + 30, 5u);
          v39 = v85;
          *((_QWORD *)CurrentThread + 4) = v38;
          sub_140344A30(CurrentThread, 0LL, v39);
        }
        sub_140224100((__int64)CurrentThread);
        goto LABEL_37;
      }
      sub_140224100((__int64)CurrentThread);
      v15 = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
    {
      v70 = KeGetCurrentPrcb();
      v81 = 0;
      v71 = *((_QWORD *)v70 + 4375);
      if ( v71 )
      {
        if ( *((_BYTE *)v70 + 32) <= 1u )
        {
          v72 = *(_DWORD *)(v71 + 24);
          *(_DWORD *)(v71 + 24) = v72 + 1;
          if ( v72 == -1 )
LABEL_143:
            sub_140418E4C(v70);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
      {
        v73 = *((_QWORD *)v70 + 4375);
        if ( v73 )
        {
          if ( *((_BYTE *)v70 + 32) <= 1u )
          {
            v74 = *(_DWORD *)(v73 + 24) - 1;
            *(_DWORD *)(v73 + 24) = v74;
            if ( !v74 )
              sub_140418E4C(v70);
          }
        }
        do
          sub_1402F32E0(&v81, v17, v18, v15);
        while ( *((_QWORD *)CurrentThread + 8) );
        v75 = *((_QWORD *)v70 + 4375);
        if ( v75 )
        {
          if ( *((_BYTE *)v70 + 32) <= 1u )
          {
            v76 = *(_DWORD *)(v75 + 24);
            *(_DWORD *)(v75 + 24) = v76 + 1;
            if ( v76 == -1 )
              goto LABEL_143;
          }
        }
      }
      if ( *((_QWORD *)CurrentThread + 29) == a1 )
      {
        *((_QWORD *)CurrentThread + 29) = 0LL;
        v77 = *((_QWORD *)CurrentThread + 65);
        v78 = (struct _KTHREAD **)*((_QWORD *)CurrentThread + 66);
        if ( *(struct _KTHREAD **)(v77 + 8) != (struct _KTHREAD *)((char *)CurrentThread + 520)
          || *v78 != (struct _KTHREAD *)((char *)CurrentThread + 520) )
        {
LABEL_159:
          __fastfail(3u);
        }
        *v78 = (struct _KTHREAD *)v77;
        *(_QWORD *)(v77 + 8) = v78;
      }
      sub_140224100((__int64)CurrentThread);
      v32 = 128LL;
      goto LABEL_37;
    }
    v20 = v14;
    if ( v9 == 2 )
    {
      sub_1402F5718();
      v20 = sub_1405786AC(CurrentThread, (unsigned int)(v64 + 2), v14, 0LL);
      goto LABEL_125;
    }
    if ( v9 )
      break;
LABEL_22:
    v21 = KeGetCurrentPrcb();
    v80 = v15;
    v22 = *((_QWORD *)v21 + 4375);
    if ( v22 )
    {
      if ( *((_BYTE *)v21 + 32) <= 1u )
      {
        v66 = *(_DWORD *)(v22 + 24);
        *(_DWORD *)(v22 + 24) = v66 + 1;
        if ( v66 == -1 )
LABEL_129:
          sub_140418E4C(v21);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
    {
      v48 = *((_QWORD *)v21 + 4375);
      if ( v48 )
      {
        if ( *((_BYTE *)v21 + 32) <= 1u )
        {
          v67 = *(_DWORD *)(v48 + 24) - 1;
          *(_DWORD *)(v48 + 24) = v67;
          if ( !v67 )
            sub_140418E4C(v21);
        }
      }
      do
        sub_1402F32E0(&v80, v17, v18, v15);
      while ( *((_QWORD *)CurrentThread + 8) );
      v49 = *((_QWORD *)v21 + 4375);
      if ( v49 )
      {
        if ( *((_BYTE *)v21 + 32) <= 1u )
        {
          v68 = *(_DWORD *)(v49 + 24);
          *(_DWORD *)(v49 + 24) = v68 + 1;
          if ( v68 == -1 )
            goto LABEL_129;
        }
      }
    }
    v23 = (unsigned __int8)*((_DWORD *)CurrentThread + 135);
    *((_DWORD *)CurrentThread + 135) = (unsigned __int8)*((_DWORD *)CurrentThread + 135) | 0x100;
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 4 * v23 + 536));
    *((_QWORD *)CurrentThread + 8) = 0LL;
    v24 = KeGetCurrentPrcb();
    v25 = *((_QWORD *)v24 + 4375);
    if ( v25 )
    {
      if ( *((_BYTE *)v24 + 32) <= 1u )
      {
        v69 = *(_DWORD *)(v25 + 24) - 1;
        *(_DWORD *)(v25 + 24) = v69;
        if ( !v69 )
          sub_140418E4C(v24);
      }
    }
    v26 = *(_QWORD *)(a1 + 8);
    v27 = (_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v26 + 8) != a1 + 8 )
      goto LABEL_159;
    *v13 = v26;
    *((_QWORD *)CurrentThread + 41) = v27;
    *(_QWORD *)(v26 + 8) = v13;
    *v27 = v13;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    *((_BYTE *)CurrentThread + 587) = 1;
    result = sub_1402B5240((__int64)CurrentThread, (__int64 *)CurrentThread + 40, v9, v14, 0LL);
    *((_BYTE *)CurrentThread + 643) = 0;
    if ( result != 256 )
      return result;
    v42 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v42 <= 0xFu )
    {
      v43 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      a3 = *(unsigned int *)(v43 + 20);
      a2 = (unsigned int)a3 | ~((unsigned __int8)(1LL << (v42 + 1)) - 1) & 4;
      *(_DWORD *)(v43 + 20) = a2;
    }
    *((_BYTE *)CurrentThread + 390) = v42;
    v6 = 0LL;
  }
  if ( !v14 )
    goto LABEL_58;
  v65 = MEMORY[0xFFFFF78000000014];
LABEL_125:
  if ( v65 <= v20 )
    goto LABEL_22;
LABEL_58:
  v32 = 258LL;
LABEL_37:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  *((_BYTE *)CurrentThread + 643) = 0;
  v35 = KeGetCurrentPrcb();
  if ( *((_QWORD *)v35 + 1441) )
    sub_140340390(v35, 1LL, 0LL, 2LL);
  LOBYTE(v18) = 1;
  sub_1402946B8((__int64)v35, (__int64)CurrentThread, v18);
  return v32;
}
