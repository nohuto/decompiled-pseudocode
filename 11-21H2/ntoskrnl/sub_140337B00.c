/*
 * XREFs of sub_140337B00 @ 0x140337B00
 * Callers:
 *     sub_14023C8A4 @ 0x14023C8A4 (sub_14023C8A4.c)
 *     sub_14027F360 @ 0x14027F360 (sub_14027F360.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_14058B40C @ 0x14058B40C (sub_14058B40C.c)
 *     sub_14058BA98 @ 0x14058BA98 (sub_14058BA98.c)
 *     sub_1405A0774 @ 0x1405A0774 (sub_1405A0774.c)
 * Callees:
 *     sub_140273A80 @ 0x140273A80 (sub_140273A80.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14028DC40 @ 0x14028DC40 (sub_14028DC40.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_140337EA0 @ 0x140337EA0 (sub_140337EA0.c)
 *     sub_140337F0C @ 0x140337F0C (sub_140337F0C.c)
 *     sub_14033A510 @ 0x14033A510 (sub_14033A510.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140337B00(ULONG_PTR BugCheckParameter1, unsigned __int8 *a2)
{
  __int64 *v4; // r14
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r10
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  char v20; // si
  ULONG_PTR *v21; // rbx
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  unsigned __int64 v24; // rsi
  _BYTE *v25; // rbx
  char i; // al
  __int64 result; // rax
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v30; // r9
  int v31; // eax
  bool v32; // zf
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  __int64 v35; // r9
  int v36; // eax
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  __int64 v41; // r8
  int v42; // eax
  int v43; // [rsp+60h] [rbp+8h] BYREF
  int v44; // [rsp+70h] [rbp+18h] BYREF

  v4 = (__int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 2 )
  {
    v5 = 0x7FFFFFFFFFFFFFFFLL;
    v6 = 0xFFFFDE0000000000uLL;
    while ( 2 )
    {
      v7 = 0x40000000000000LL;
      v8 = 2LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = *v4;
          if ( (*v4 & 1) != 0 )
            break;
          if ( (*v4 & 0xC00) != 0x800 )
            goto LABEL_33;
          if ( sub_140273A80(*v4) )
          {
            v10 = v9;
            if ( qword_140C50780 && (v9 & 0x10) == 0 )
              v10 = v9 & ~qword_140C50780;
            goto LABEL_7;
          }
        }
        if ( (v9 & 0x200) != 0 )
          goto LABEL_33;
        v10 = *v4;
LABEL_7:
        v11 = (v10 >> 12) & 0xFFFFFFFFFFLL;
        if ( v11 <= qword_140C50840 )
        {
          v12 = 6 * v11;
          if ( (v7 & *(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL)) != 0 )
            break;
        }
      }
      v13 = v6 + 48 * v11;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v8);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v12 = (-1LL << (CurrentIrql + 1)) & 4;
        v7 = (unsigned int)v12 | *(_DWORD *)(v8 + 20);
        *(_DWORD *)(v8 + 20) = v7;
      }
      v43 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
        {
          do
            sub_1402F32E0(&v43, v12, v7, v8);
          while ( *(__int64 *)(v13 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
        v6 = 0xFFFFDE0000000000uLL;
        v5 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v15 = *v4;
      *a2 = CurrentIrql;
      if ( v15 != v9 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), v5);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v28 = KeGetCurrentIrql();
            if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v30 = *((_QWORD *)CurrentPrcb + 4375);
              v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v32 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
              *(_DWORD *)(v30 + 20) &= v31;
              if ( v32 )
              {
                sub_140418E4C(CurrentPrcb);
                v5 = 0x7FFFFFFFFFFFFFFFLL;
              }
              v6 = 0xFFFFDE0000000000uLL;
            }
          }
        }
        __writecr8(CurrentIrql);
        continue;
      }
      break;
    }
    if ( (v15 & 1) == 0 )
    {
      if ( (*(_BYTE *)(v13 + 34) & 7u) >= 6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), v5);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v33 = KeGetCurrentIrql();
            if ( v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
            {
              v34 = KeGetCurrentPrcb();
              v35 = *((_QWORD *)v34 + 4375);
              v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v32 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
              *(_DWORD *)(v35 + 20) &= v36;
              if ( v32 )
                sub_140418E4C(v34);
            }
          }
        }
        __writecr8(CurrentIrql);
        sub_14031C860(2uLL, BugCheckParameter1, 0, 0LL);
        continue;
      }
LABEL_35:
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), v5);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v39 = KeGetCurrentIrql();
          if ( v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            v41 = *((_QWORD *)v40 + 4375);
            v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v32 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
            *(_DWORD *)(v41 + 20) &= v42;
            if ( v32 )
              sub_140418E4C(v40);
          }
        }
      }
      __writecr8(CurrentIrql);
LABEL_33:
      result = 0LL;
      *a2 = 17;
      return result;
    }
    break;
  }
  if ( (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    goto LABEL_35;
  if ( !(unsigned int)sub_140337EA0(v13, v12, v7, v8) )
    goto LABEL_23;
  v19 = *(_QWORD *)(v13 + 40);
  if ( v19 < 0 && (*(_DWORD *)(v13 + 16) & 0x400LL) != 0 || (unsigned int)sub_140337F0C(v13, v16) )
  {
    v20 = 1;
    v21 = *(ULONG_PTR **)(qword_140C51F48 + 8 * (((unsigned __int64)v19 >> 43) & 0x3FF));
    if ( (unsigned int)sub_14032A4B0((__int64)v21, 1uLL, 4u) )
      goto LABEL_18;
  }
  else
  {
    v20 = 0;
    v21 = *(ULONG_PTR **)(qword_140C51F48 + 8 * (((unsigned __int64)v19 >> 43) & 0x3FF));
LABEL_18:
    if ( v21 == &StartContext )
    {
      v16 = (__int64)KeGetCurrentPrcb();
      v22 = *(_DWORD *)(v16 + 34460);
      if ( v22 )
      {
        v17 = 0xFFFFFFFFLL;
        do
        {
          if ( v22 == -1 )
            break;
          v23 = v22;
          v22 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 34460), v22 - 1, v22);
          if ( v23 == v22 )
            goto LABEL_23;
        }
        while ( v22 );
      }
    }
    if ( !(unsigned int)sub_14028DC40((__int64)v21, 1uLL, 0xFFFFFFFFLL) )
    {
      if ( v20 )
        sub_14028CE10((__int64)v21, 1LL);
      goto LABEL_24;
    }
LABEL_23:
    ++*(_WORD *)(v13 + 32);
  }
LABEL_24:
  v24 = *a2;
  v25 = (_BYTE *)(*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL);
  for ( i = *(_BYTE *)(v13 + 34); (i & 0x20) != 0; i = *(_BYTE *)(v13 + 34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)v24 != 17 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v37 = KeGetCurrentIrql();
          if ( v37 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v37 >= 2u )
          {
            v38 = KeGetCurrentPrcb();
            v18 = *((_QWORD *)v38 + 4375);
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
            v32 = ((unsigned int)v16 & *(_DWORD *)(v18 + 20)) == 0;
            v17 = (unsigned int)v16 & *(_DWORD *)(v18 + 20);
            *(_DWORD *)(v18 + 20) = v17;
            if ( v32 )
              sub_140418E4C(v38);
          }
        }
      }
      __writecr8(v24);
    }
    v44 = 0;
    while ( (*(_BYTE *)(v13 + 34) & 0x20) != 0 )
      sub_1402F32E0(&v44, v16, v17, v18);
    sub_1402F2700(v13);
  }
  *(_BYTE *)(v13 + 34) = i | 0x20;
  if ( (*(_QWORD *)(v13 + 24) & 0x4000000000000000LL) == 0 && (*v25 & 0x20) == 0 )
    sub_14033A510(v25, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v13;
}
