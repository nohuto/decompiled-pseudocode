/*
 * XREFs of sub_1403470F0 @ 0x1403470F0
 * Callers:
 *     KeUnstackDetachProcess @ 0x1402037B0 (KeUnstackDetachProcess.c)
 *     KeDetachProcess @ 0x140259B00 (KeDetachProcess.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030C260 @ 0x14030C260 (sub_14030C260.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402D0C60 @ 0x1402D0C60 (sub_1402D0C60.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140347550 @ 0x140347550 (sub_140347550.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     sub_14054CAE0 @ 0x14054CAE0 (sub_14054CAE0.c)
 */

unsigned __int64 __fastcall sub_1403470F0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v5; // r10
  char v6; // r12
  __int64 v8; // r13
  __int64 v9; // r11
  int v10; // ebp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  struct _KPRCB *v19; // rcx
  __int64 v20; // rdx
  struct _KPRCB *v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // r15
  __int64 v24; // r14
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int64 result; // rax
  unsigned __int8 v28; // si
  unsigned __int32 v29; // eax
  unsigned __int32 v30; // ett
  signed __int64 *v31; // r13
  signed __int64 v32; // rax
  signed __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  struct _KPRCB *v42; // r10
  bool v43; // zf
  unsigned __int8 v44; // r10
  struct _KPRCB *v45; // rdi
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  int v52; // eax
  unsigned __int64 v53; // rcx
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  int v56; // eax
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r9
  __int64 v59; // r8
  int v60; // eax
  unsigned __int8 v61; // [rsp+20h] [rbp-48h]
  char v62; // [rsp+78h] [rbp+10h]
  int v63; // [rsp+80h] [rbp+18h] BYREF
  int v64; // [rsp+88h] [rbp+20h] BYREF

  v62 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = 2LL;
  v6 = a2;
  v8 = *((_QWORD *)CurrentThread + 23);
  v9 = -1LL;
  v10 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    CurrentIrql = 15;
    v61 = 15;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v61 = CurrentIrql;
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
      *(_DWORD *)(a4 + 20) = a3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v63 = 0;
    v13 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v13 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v38 = *(_DWORD *)(v13 + 24);
        *(_DWORD *)(v13 + 24) = v38 + 1;
        if ( v38 == -1 )
LABEL_62:
          sub_140418E4C(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
    {
      v36 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v36 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v39 = *(_DWORD *)(v36 + 24) - 1;
          *(_DWORD *)(v36 + 24) = v39;
          if ( !v39 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v63, a2, a3, a4);
      while ( *((_QWORD *)CurrentThread + 8) );
      v37 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v37 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v40 = *(_DWORD *)(v37 + 24);
          *(_DWORD *)(v37 + 24) = v40 + 1;
          if ( v40 == -1 )
            goto LABEL_62;
        }
      }
    }
    v9 = -1LL;
    v5 = 2LL;
  }
  if ( *((_BYTE *)CurrentThread + 193) )
  {
    do
    {
      if ( *((_WORD *)CurrentThread + 243) || CurrentIrql )
        break;
      sub_140224100((__int64)CurrentThread);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v42 = KeGetCurrentPrcb();
          v41 = -2LL;
          a4 = *((_QWORD *)v42 + 4375);
          v43 = (*(_DWORD *)(a4 + 20) & 0xFFFF0001) == 0;
          a3 = *(_DWORD *)(a4 + 20) & 0xFFFF0001;
          *(_DWORD *)(a4 + 20) = a3;
          if ( v43 )
            sub_140418E4C(v42);
        }
      }
      __writecr8(0LL);
      v44 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v44 <= 0xFu )
      {
        a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v41 = (-1LL << (v44 + 1)) & 4;
        a3 = (unsigned int)v41 | *(_DWORD *)(a4 + 20);
        *(_DWORD *)(a4 + 20) = a3;
      }
      v45 = KeGetCurrentPrcb();
      CurrentIrql = v44;
      v64 = 0;
      v46 = *((_QWORD *)v45 + 4375);
      if ( v46 )
      {
        if ( *((_BYTE *)v45 + 32) <= 1u )
        {
          v47 = *(_DWORD *)(v46 + 24);
          *(_DWORD *)(v46 + 24) = v47 + 1;
          if ( v47 == -1 )
LABEL_83:
            sub_140418E4C(v45);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
      {
        v48 = *((_QWORD *)v45 + 4375);
        if ( v48 )
        {
          if ( *((_BYTE *)v45 + 32) <= 1u )
          {
            v49 = *(_DWORD *)(v48 + 24) - 1;
            *(_DWORD *)(v48 + 24) = v49;
            if ( !v49 )
              sub_140418E4C(v45);
          }
        }
        do
          sub_1402F32E0(&v64, v41, a3, a4);
        while ( *((_QWORD *)CurrentThread + 8) );
        v50 = *((_QWORD *)v45 + 4375);
        if ( v50 )
        {
          if ( *((_BYTE *)v45 + 32) <= 1u )
          {
            v51 = *(_DWORD *)(v50 + 24);
            *(_DWORD *)(v50 + 24) = v51 + 1;
            if ( v51 == -1 )
              goto LABEL_83;
          }
        }
      }
      v9 = -1LL;
    }
    while ( *((_BYTE *)CurrentThread + 193) );
    v6 = v62;
    v5 = 2LL;
    v61 = CurrentIrql;
  }
  if ( !*((_BYTE *)CurrentThread + 586)
    || (*((_BYTE *)CurrentThread + 192) & 1) != 0
    || (v14 = (_QWORD *)((char *)CurrentThread + 152), (_QWORD *)*v14 != v14)
    || *((struct _KTHREAD **)CurrentThread + 21) != (struct _KTHREAD *)((char *)CurrentThread + 168) )
  {
    KeBugCheck(6u);
  }
  *((_DWORD *)CurrentThread + 29) |= 0x800u;
  v15 = (_QWORD *)((char *)CurrentThread + 600);
  if ( a1 == (__int64 *)((char *)CurrentThread + 600) )
  {
    *((_QWORD *)CurrentThread + 23) = *((_QWORD *)CurrentThread + 79);
    *((_BYTE *)CurrentThread + 192) = *((_BYTE *)CurrentThread + 640);
    *((_BYTE *)CurrentThread + 193) = *((_BYTE *)CurrentThread + 641);
    *((_BYTE *)CurrentThread + 194) = *((_BYTE *)CurrentThread + 642);
    v16 = (_QWORD *)*v15;
    if ( (_QWORD *)*v15 == v15 )
    {
      *((_QWORD *)CurrentThread + 20) = (char *)CurrentThread + 152;
      *v14 = v14;
      *((_BYTE *)CurrentThread + 193) = 0;
    }
    else
    {
      v34 = (_QWORD *)*((_QWORD *)CurrentThread + 76);
      *v14 = v16;
      *((_QWORD *)CurrentThread + 20) = v34;
      v16[1] = v14;
      *v34 = v14;
    }
    v17 = *((_QWORD *)CurrentThread + 77);
    v18 = (_QWORD *)((char *)CurrentThread + 168);
    if ( (struct _KTHREAD *)v17 == (struct _KTHREAD *)((char *)CurrentThread + 616) )
    {
      *((_QWORD *)CurrentThread + 22) = (char *)CurrentThread + 168;
      *v18 = v18;
      *((_BYTE *)CurrentThread + 194) = 0;
    }
    else
    {
      v35 = (_QWORD *)*((_QWORD *)CurrentThread + 78);
      *v18 = v17;
      *((_QWORD *)CurrentThread + 22) = v35;
      *(_QWORD *)(v17 + 8) = v18;
      *v35 = v18;
    }
    *((_QWORD *)CurrentThread + 79) = 0LL;
    *((_BYTE *)CurrentThread + 586) = 0;
  }
  else
  {
    sub_1402D0C60(a1, (__int64)CurrentThread + 152);
  }
  if ( !v10 )
  {
    *((_QWORD *)CurrentThread + 8) = 0LL;
    v19 = KeGetCurrentPrcb();
    v20 = *((_QWORD *)v19 + 4375);
    if ( v20 )
    {
      if ( *((_BYTE *)v19 + 32) <= 1u )
      {
        v52 = *(_DWORD *)(v20 + 24) - 1;
        *(_DWORD *)(v20 + 24) = v52;
        if ( !v52 )
        {
          sub_140418E4C(v19);
          v9 = -1LL;
          v5 = 2LL;
        }
      }
    }
  }
  v21 = KeGetCurrentPrcb();
  v22 = *((_QWORD *)CurrentThread + 23);
  v23 = *((unsigned __int8 *)v21 + 209);
  v24 = 8LL * *((unsigned __int8 *)v21 + 208) + 376;
  _interlockedbittestandset64((volatile signed __int32 *)(v24 + v22), v23);
  v25 = *(_QWORD *)(v22 + 40);
  if ( byte_140E01840 )
  {
    v26 = *(_QWORD *)(v22 + 40);
    if ( (v25 & 2) != 0 )
      v26 = v25 | 0x8000000000000000uLL;
    __writegsqword(0xA000u, v26);
    sub_140347550(*(unsigned __int8 *)(v22 + 912));
    v9 = -1LL;
    v5 = 2LL;
  }
  result = (unsigned int)dword_140D0689C;
  if ( (dword_140D0689C & 1) != 0 )
  {
    result = sub_14054CAE0(v25);
    v9 = -1LL;
    v5 = 2LL;
  }
  else
  {
    __writecr3(v25);
  }
  if ( !byte_140D0688A && byte_140E01840 )
  {
    v53 = __readcr4();
    if ( (v53 & 0x20080) != 0 )
    {
      result = v53 ^ 0x80;
      __writecr4(v53 ^ 0x80);
      __writecr4(v53);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)(v24 + v8), v23);
  *((_DWORD *)CurrentThread + 29) &= ~0x800u;
  if ( !v10 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v54 = KeGetCurrentIrql();
        if ( v54 <= 0xFu && v61 <= 0xFu && v54 >= 2u )
        {
          v55 = KeGetCurrentPrcb();
          v22 = v9 << (v61 + 1);
          a4 = *((_QWORD *)v55 + 4375);
          v56 = ~(unsigned __int16)v22;
          v43 = (v56 & *(_DWORD *)(a4 + 20)) == 0;
          a3 = (unsigned int)v56 & *(_DWORD *)(a4 + 20);
          *(_DWORD *)(a4 + 20) = a3;
          if ( v43 )
          {
            sub_140418E4C(v55);
            v9 = -1LL;
          }
          v5 = 2LL;
        }
      }
    }
    result = v61;
    __writecr8(v61);
  }
  if ( (v6 & 1) == 0 )
  {
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 840), 0xFFFFFFF8) & 0xFFFFFFF8;
    if ( (_DWORD)result == 8 )
    {
      v28 = KeGetCurrentIrql();
      __writecr8(v5);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v28 <= 0xFu )
      {
        a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v22 = (v9 << (v28 + 1)) & 4;
        a3 = (unsigned int)v22 | *(_DWORD *)(a4 + 20);
        *(_DWORD *)(a4 + 20) = a3;
      }
      sub_1402F3290((volatile signed __int32 *)v8, v22, a3, a4);
      v29 = *(_DWORD *)(v8 + 840);
      if ( (v29 & 7) != 0 || *(_QWORD *)(v8 + 48) == v8 + 48 || v29 >= 8 )
      {
LABEL_58:
        _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
      }
      else
      {
        while ( 1 )
        {
          v30 = v29;
          v29 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 840), v29 & 0xFFFFFFF8 | 3, v29);
          if ( v30 == v29 )
            break;
          if ( v29 >= 8 )
            goto LABEL_58;
        }
        _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
        v31 = (signed __int64 *)(v8 + 360);
        _m_prefetchw(&qword_140C2BB68);
        v32 = qword_140C2BB68;
        do
        {
          *v31 = v32;
          v33 = v32;
          v32 = _InterlockedCompareExchange64(&qword_140C2BB68, (signed __int64)v31, v32);
        }
        while ( v32 != v33 );
        if ( !v32 )
          KeSetEvent(&Event, 10, 0);
      }
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v57 = KeGetCurrentIrql();
          if ( v57 <= 0xFu && v28 <= 0xFu && v57 >= 2u )
          {
            v58 = KeGetCurrentPrcb();
            v59 = *((_QWORD *)v58 + 4375);
            v60 = ~(unsigned __int16)(-1LL << (v28 + 1));
            v43 = (v60 & *(_DWORD *)(v59 + 20)) == 0;
            *(_DWORD *)(v59 + 20) &= v60;
            if ( v43 )
              sub_140418E4C(v58);
          }
        }
      }
      result = v28;
      __writecr8(v28);
    }
  }
  if ( (_QWORD *)*v14 != v14 )
  {
    *((_BYTE *)CurrentThread + 193) = 1;
    return HalRequestSoftwareInterrupt(1);
  }
  return result;
}
