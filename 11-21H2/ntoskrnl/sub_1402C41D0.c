/*
 * XREFs of sub_1402C41D0 @ 0x1402C41D0
 * Callers:
 *     sub_1403C6B00 @ 0x1403C6B00 (sub_1403C6B00.c)
 * Callees:
 *     sub_140205FD4 @ 0x140205FD4 (sub_140205FD4.c)
 *     sub_140220C30 @ 0x140220C30 (sub_140220C30.c)
 *     sub_1402452D4 @ 0x1402452D4 (sub_1402452D4.c)
 *     sub_14028F8E4 @ 0x14028F8E4 (sub_14028F8E4.c)
 *     sub_1402C4BF0 @ 0x1402C4BF0 (sub_1402C4BF0.c)
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 *     sub_1402C5D00 @ 0x1402C5D00 (sub_1402C5D00.c)
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     sub_14034FD50 @ 0x14034FD50 (sub_14034FD50.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 */

struct _KTHREAD *__fastcall sub_1402C41D0(unsigned __int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  volatile __int32 *v7; // rbx
  __int64 CurrentIrql; // r11
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // r8
  int v13; // r15d
  unsigned int v14; // r13d
  int v15; // r14d
  unsigned int v16; // edx
  ULONG_PTR v17; // rsi
  int v18; // edi
  __int64 v19; // r9
  char v20; // cl
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r9
  int v24; // eax
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  char v32; // cl
  int *v33; // r15
  __int64 v34; // rdx
  struct _KTHREAD *v35; // rsi
  struct _KPRCB *v36; // rdi
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  int i; // ecx
  unsigned __int64 v42; // rdx
  bool v43; // r10
  __int64 v44; // rsi
  _BYTE *v45; // r9
  char v46; // r8
  char v47; // cl
  char v48; // di
  unsigned __int8 v49; // al
  unsigned int v50; // r9d
  __int64 v51; // r10
  _QWORD *v52; // r9
  unsigned __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  char v58; // r9
  _QWORD *v59; // rdx
  struct _KPRCB *v60; // rcx
  __int64 v61; // rdx
  int v62; // eax
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r10
  __int64 v65; // r9
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rax
  LARGE_INTEGER v69; // rax
  struct _KTHREAD *result; // rax
  signed __int32 v71[8]; // [rsp+0h] [rbp-C8h] BYREF
  int v72; // [rsp+50h] [rbp-78h]
  __int64 v73; // [rsp+58h] [rbp-70h]
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-68h]
  __int64 v75; // [rsp+68h] [rbp-60h]
  volatile __int32 *v76; // [rsp+70h] [rbp-58h]
  __int64 v77; // [rsp+78h] [rbp-50h]
  __int64 v78; // [rsp+80h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-40h]
  void *retaddr; // [rsp+C8h] [rbp+0h]
  int v81; // [rsp+D0h] [rbp+8h] BYREF
  int v82; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v83; // [rsp+E0h] [rbp+18h]
  int v84; // [rsp+E8h] [rbp+20h] BYREF

  v81 = 0;
  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)CurrentThread + 345) |= 0x400u;
  v2 = *(_QWORD *)(a1 + 232);
  v77 = v2;
  v3 = *(_QWORD *)(v2 + 72);
  v78 = v3;
  v4 = sub_14028F8E4(a1);
  v5 = *(unsigned int *)(a1 + 264);
  v6 = 0;
  v72 = v4;
  v83 = 0;
  v7 = (volatile __int32 *)(*(_QWORD *)(v2 + 144) + 40 * v5);
  _InterlockedExchange(v7, 0);
  v76 = v7;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  _InterlockedOr(v71, 0);
  if ( !(unsigned int)sub_1402C4BF0(a1, &v81) )
  {
LABEL_148:
    ++dword_140C29708;
    goto LABEL_149;
  }
  while ( 2 )
  {
    if ( v81 )
    {
      _InterlockedExchange(v7, 0);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      _InterlockedOr(v71, 0);
    }
    ++*(_DWORD *)(v2 + 288);
    if ( !v6 )
    {
      v9 = sub_140205FD4(v3, a1);
      goto LABEL_9;
    }
    v10 = *(_DWORD *)(a1 + 260) >> byte_140C506CC;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_BYTE *)(a1 + 70) = 0;
    if ( v6 < 3 )
    {
      v11 = sub_1402CA5E0(v3, 0, v6, 1, v10, 4, 1, 256, a1);
      if ( v11 )
        goto LABEL_8;
      break;
    }
    v12 = *(_QWORD *)(v3 + 2440);
    v13 = 0;
    v14 = *(_DWORD *)(a1 + 260);
    LOBYTE(CurrentIrql) = 17;
    v73 = CurrentIrql;
    v15 = 0;
    v75 = v12;
    v16 = v14;
    while ( 1 )
    {
      v17 = *(_QWORD *)(88LL * v16 + v12 + 16);
      if ( v17 == 0x3FFFFFFFFFLL )
        goto LABEL_17;
      v11 = 48 * v17 - 0x220000000000LL;
      if ( !v15 && *(__int64 *)(v11 + 24) < 0 )
      {
        v13 = 1;
LABEL_17:
        v11 = 0LL;
LABEL_18:
        v16 = dword_140C506C0 & (*(_DWORD *)(a1 + 260) + 1) | *(_DWORD *)(a1 + 260) & ~dword_140C506C0;
        *(_DWORD *)(a1 + 260) = v16;
        goto LABEL_19;
      }
      if ( 48 * v17 == 0x220000000000LL )
        goto LABEL_18;
      CurrentIrql = KeGetCurrentIrql();
      v73 = CurrentIrql;
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
      {
        v19 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v12 = (-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(v19 + 20);
        *(_DWORD *)(v19 + 20) = v12;
      }
      v84 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
        {
          do
            sub_1402F32E0(&v84);
          while ( *(__int64 *)(v11 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
        LOBYTE(CurrentIrql) = v73;
      }
      if ( v17 <= qword_140C50840 )
      {
        if ( _bittest64((const signed __int64 *)(48 * v17 - 0x21FFFFFFFFD8LL), 0x36u) )
        {
          v20 = *(_BYTE *)(v11 + 34);
          if ( (v20 & 7) == 1 && !_bittest64((const signed __int64 *)(v11 + 40), 0x28u) )
          {
            if ( (v20 & 8) == 0 )
              goto LABEL_23;
            _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v21 = KeGetCurrentIrql();
                if ( v21 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v21 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v23 = *((_QWORD *)CurrentPrcb + 4375);
                  v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
                  v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
                  *(_DWORD *)(v23 + 20) &= v24;
                  if ( v25 )
                  {
                    sub_140418E4C(CurrentPrcb);
                    LOBYTE(CurrentIrql) = v73;
                  }
                }
              }
            }
            __writecr8((unsigned __int8)CurrentIrql);
            goto LABEL_17;
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v26 = KeGetCurrentIrql();
          if ( v26 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v26 >= 2u )
          {
            v27 = KeGetCurrentPrcb();
            v28 = *((_QWORD *)v27 + 4375);
            v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
            v25 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
            *(_DWORD *)(v28 + 20) &= v29;
            if ( v25 )
            {
              sub_140418E4C(v27);
              LOBYTE(CurrentIrql) = v73;
            }
          }
        }
      }
      __writecr8((unsigned __int8)CurrentIrql);
      v16 = *(_DWORD *)(a1 + 260);
      v11 = 0LL;
LABEL_19:
      v12 = v75;
      if ( v16 == v14 )
      {
        if ( !v13 )
          break;
        if ( (unsigned int)++v15 >= 2 )
          break;
      }
    }
    if ( !v11 )
      goto LABEL_149;
LABEL_23:
    if ( *(_WORD *)(v11 + 32) )
      KeBugCheckEx(0x4Eu, 0x8DuLL, v17, *(unsigned int *)(v11 + 32), *(_QWORD *)(v11 + 8));
    *(_BYTE *)(a1 + 72) = 0;
    if ( (*(_BYTE *)(v11 + 34) & 8) != 0 )
    {
      v18 = 0;
      goto LABEL_131;
    }
    *(_QWORD *)(a1 + 24) = v11;
    v30 = qword_140C50780;
    *(_BYTE *)(v11 + 34) |= 8u;
    v31 = *(_QWORD *)(v11 + 16);
    if ( v30 && (v31 & 0x10) == 0 )
      v31 &= ~v30;
    v32 = *(_BYTE *)(a1 + 72);
    v33 = &dword_140C51DF0;
    v34 = 4294967293LL;
    if ( HIDWORD(v31) == 4294967293 )
      v32 = 1;
    *(_BYTE *)(a1 + 72) = v32;
    *(_QWORD *)(v11 + 16) = a1;
    v35 = KeGetCurrentThread();
    v25 = *(_BYTE *)(a1 + 73) == 0;
    *(_QWORD *)(a1 + 56) = v35;
    if ( !v25 )
      v33 = &dword_140C51DE0;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_WORD *)(a1 + 70) = 0;
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      LOBYTE(v34) = -1;
      sub_140461A66(v33, v34);
    }
    else
    {
      v36 = KeGetCurrentPrcb();
      v82 = 0;
      v37 = *((_QWORD *)v36 + 4375);
      if ( v37 )
      {
        if ( *((_BYTE *)v36 + 32) <= 1u )
        {
          v38 = *(_DWORD *)(v37 + 24);
          *(_DWORD *)(v37 + 24) = v38 + 1;
          if ( v38 == -1 )
            sub_140418E4C(v36);
        }
      }
      if ( _interlockedbittestandset(v33, 0x1Fu) )
      {
        v39 = *((_QWORD *)v36 + 4375);
        if ( v39 )
        {
          if ( *((_BYTE *)v36 + 32) <= 1u )
          {
            v40 = *(_DWORD *)(v39 + 24) - 1;
            *(_DWORD *)(v39 + 24) = v40;
            if ( !v40 )
              sub_140418E4C(v36);
          }
        }
        v82 = sub_140220C30(v33, 0xFFu);
      }
      for ( i = *v33; (*v33 & 0xBFFFFFFF) != 0x80000000; i = *v33 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr(v33, 0x40000000u);
        sub_1402F32E0(&v82);
      }
    }
    if ( *(_BYTE *)(a1 + 73) )
    {
      v59 = (_QWORD *)qword_140C51DE8;
      LOBYTE(v12) = 0;
      if ( qword_140C51DE8 )
      {
        while ( 1 )
        {
          while ( (unsigned __int64)v35 < v59[7] )
          {
            if ( !*v59 )
              goto LABEL_122;
            v59 = (_QWORD *)*v59;
          }
          if ( !v59[1] )
            break;
          v59 = (_QWORD *)v59[1];
        }
        v12 = 1LL;
      }
LABEL_122:
      RtlAvlInsertNodeEx(&qword_140C51DE8, v59, v12, a1);
      goto LABEL_123;
    }
    v42 = qword_140C51DF8;
    v43 = 0;
    if ( qword_140C51DF8 )
    {
      while ( 1 )
      {
        while ( a1 < v42 )
        {
          if ( !*(_QWORD *)v42 )
            goto LABEL_87;
          v42 = *(_QWORD *)v42;
        }
        if ( !*(_QWORD *)(v42 + 8) )
          break;
        v42 = *(_QWORD *)(v42 + 8);
      }
      v43 = 1;
    }
LABEL_87:
    *(_QWORD *)a1 = 0LL;
    v44 = a1;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = v42;
    if ( v42 )
    {
      v45 = (_BYTE *)(v42 + 16);
      *(_QWORD *)(v42 + 8LL * v43) = a1;
      v46 = *(_BYTE *)(v42 + 16);
      v47 = (-1 - 2 * v43) & 3;
      v48 = v46 & 3;
      if ( (v46 & 3) == 0 )
      {
        v49 = v73;
        do
        {
          v44 = v42;
          *v45 = v47 | v46 & 0xFC;
          v42 = *(_QWORD *)v45 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v42 )
            goto LABEL_123;
          v45 = (_BYTE *)(v42 + 16);
          v46 = *(_BYTE *)(v42 + 16);
          v43 = *(_QWORD *)v42 != v44;
          v47 = (-1 - 2 * v43) & 3;
          v73 = v49;
          v48 = v46 & 3;
        }
        while ( (v46 & 3) == 0 );
        v73 = v49;
      }
      if ( v48 != v47 )
      {
        *(_BYTE *)(v42 + 16) &= 0xFCu;
        goto LABEL_123;
      }
      if ( (*(_BYTE *)(v44 + 16) & 3) != v48 )
      {
        v56 = sub_14034FD50(&qword_140C51DF8, v42, v44, v43);
        *(_BYTE *)(v57 + 16) &= 0xFCu;
        v58 = *(_BYTE *)(v44 + 16) & 0xFC;
        *(_BYTE *)(v44 + 16) = v58;
        if ( v48 == (*(_BYTE *)(v56 + 16) & 3) )
        {
          *(_BYTE *)(v57 + 16) ^= (*(_BYTE *)(v57 + 16) ^ v48 ^ 0xFE) & 3;
          *(_BYTE *)(v56 + 16) &= 0xFCu;
        }
        else
        {
          if ( v48 == ((*(_BYTE *)(v56 + 16) ^ 0xFE) & 3) )
            *(_BYTE *)(v44 + 16) = v58 | v48;
          *(_BYTE *)(v56 + 16) &= 0xFCu;
        }
        goto LABEL_123;
      }
      v50 = !v43;
      if ( (*(_QWORD *)(v44 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == v42 )
      {
        v51 = v50;
        v52 = (_QWORD *)(v42 + 8 * (v50 ^ 1LL));
        if ( *v52 == v44 )
        {
          v53 = *(_QWORD *)(v42 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v53 )
          {
            if ( *(_QWORD *)(v53 + 8) == v42 )
            {
              *(_QWORD *)(v53 + 8) = v44;
            }
            else
            {
              if ( *(_QWORD *)v53 != v42 )
                goto LABEL_150;
              *(_QWORD *)v53 = v44;
            }
          }
          else
          {
            if ( qword_140C51DF8 != v42 )
              goto LABEL_150;
            qword_140C51DF8 = v44;
          }
          *(_QWORD *)(v44 + 16) = v53 | *(_DWORD *)(v44 + 16) & 3;
          v54 = *(_QWORD *)(v44 + 8 * v51);
          if ( !v54 )
          {
LABEL_109:
            *v52 = v54;
            *(_QWORD *)(v44 + 8 * v51) = v42;
            *(_QWORD *)(v42 + 16) = v44 | *(_DWORD *)(v42 + 16) & 3;
            *(_BYTE *)(v44 + 16) &= 0xFCu;
            *(_BYTE *)(v42 + 16) &= 0xFCu;
            goto LABEL_123;
          }
          v55 = *(_QWORD *)(v54 + 16);
          if ( (v55 & 0xFFFFFFFFFFFFFFFCuLL) == v44 )
          {
            *(_QWORD *)(v54 + 16) = v42 | v55 & 3;
            goto LABEL_109;
          }
        }
      }
LABEL_150:
      __fastfail(0x1Du);
    }
    qword_140C51DF8 = a1;
LABEL_123:
    *(_BYTE *)(a1 + 69) = 1;
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
      sub_14063D8B0(v33, retaddr);
    else
      *v33 = 0;
    v60 = KeGetCurrentPrcb();
    v61 = *((_QWORD *)v60 + 4375);
    if ( v61 )
    {
      if ( *((_BYTE *)v60 + 32) <= 1u )
      {
        v62 = *(_DWORD *)(v61 + 24) - 1;
        *(_DWORD *)(v61 + 24) = v62;
        if ( !v62 )
          sub_140418E4C(v60);
      }
    }
    LOBYTE(CurrentIrql) = v73;
    v18 = 1;
LABEL_131:
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v63 = KeGetCurrentIrql();
        if ( v63 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v63 >= 2u )
        {
          v64 = KeGetCurrentPrcb();
          v65 = *((_QWORD *)v64 + 4375);
          v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
          v25 = (v66 & *(_DWORD *)(v65 + 20)) == 0;
          *(_DWORD *)(v65 + 20) &= v66;
          if ( v25 )
            sub_140418E4C(v64);
        }
      }
    }
    __writecr8((unsigned __int8)v73);
    if ( !v18 )
      goto LABEL_149;
    v6 = v83;
    v2 = v77;
    v3 = v78;
LABEL_8:
    v9 = sub_1402C5D00(a1, v11, v6);
    v7 = v76;
LABEL_9:
    if ( v9 )
    {
      sub_1402C4E50(a1, v3);
      if ( v6 == 3 )
      {
        v67 = 1LL;
      }
      else
      {
        v68 = v6;
        if ( !v6 )
          v68 = 1LL;
        v67 = qword_14001C780[v68];
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 40), v67);
      _InterlockedExchangeAdd(v7, v67);
      if ( *v7 >= 0x1000u )
      {
        _InterlockedOr(v71, 0);
        v69 = KeQueryPerformanceCounter(0LL);
        sub_1402452D4(a1, v69.QuadPart - PerformanceCounter.QuadPart);
        _InterlockedExchange(v7, 0);
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        _InterlockedOr(v71, 0);
      }
LABEL_147:
      if ( !(unsigned int)sub_1402C4BF0(a1, &v81) )
        goto LABEL_148;
      continue;
    }
    break;
  }
  if ( v6 < 3 )
  {
    v7 = v76;
    v83 = ++v6;
    goto LABEL_147;
  }
LABEL_149:
  sub_14028F8E4(a1);
  result = CurrentThread;
  *((_DWORD *)CurrentThread + 345) &= ~0x400u;
  return result;
}
