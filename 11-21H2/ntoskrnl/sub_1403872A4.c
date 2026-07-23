/*
 * XREFs of sub_1403872A4 @ 0x1403872A4
 * Callers:
 *     sub_14038719C @ 0x14038719C (sub_14038719C.c)
 *     sub_1403D5CF4 @ 0x1403D5CF4 (sub_1403D5CF4.c)
 *     sub_1405AF3BC @ 0x1405AF3BC (sub_1405AF3BC.c)
 *     sub_1405C2478 @ 0x1405C2478 (sub_1405C2478.c)
 * Callees:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     sub_140235E10 @ 0x140235E10 (sub_140235E10.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402CB2D0 @ 0x1402CB2D0 (sub_1402CB2D0.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403872A4(__int64 a1, ULONG_PTR a2, unsigned int a3, __int64 a4, char a5, int *a6)
{
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // r13d
  unsigned __int8 CurrentIrql; // r15
  __int64 v13; // r8
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // al
  __int64 v21; // r8
  ULONG_PTR v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // r14
  int v25; // eax
  volatile LONG *v26; // rcx
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v29; // r9
  int v30; // edx
  bool v31; // zf
  unsigned __int8 v32; // cl
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  __int64 v41; // r9
  int v42; // edx
  unsigned int v43; // [rsp+38h] [rbp-69h]
  int v44; // [rsp+3Ch] [rbp-65h]
  char v45; // [rsp+40h] [rbp-61h]
  __int64 v46; // [rsp+48h] [rbp-59h]
  int v47; // [rsp+50h] [rbp-51h] BYREF
  int v48; // [rsp+54h] [rbp-4Dh] BYREF
  _QWORD *v49; // [rsp+58h] [rbp-49h]
  _QWORD *v50; // [rsp+60h] [rbp-41h]
  __int64 v51; // [rsp+68h] [rbp-39h]
  __int64 v52; // [rsp+70h] [rbp-31h]
  __int64 v53; // [rsp+78h] [rbp-29h] BYREF
  _DWORD v54[2]; // [rsp+80h] [rbp-21h] BYREF
  _QWORD v55[2]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v56; // [rsp+98h] [rbp-9h]
  unsigned __int64 BugCheckParameter2; // [rsp+100h] [rbp+5Fh]

  BugCheckParameter2 = a2;
  v7 = 0LL;
  v49 = 0LL;
  v52 = qword_14001C780[a3];
  v8 = 48 * a2;
  v9 = *((unsigned int *)sub_1402C1550(a2) + 2);
  v10 = v8 - 0x220000000000LL;
  v43 = sub_1402E8990(v8 - 0x220000000000LL);
  v11 = 0;
  v56 = 24512 * v9;
  v44 = 0;
  v46 = *(_QWORD *)(a1 + 16) + 24512 * v9;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v21 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v21 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( !a4 )
    return v7;
  v13 = v52;
  v45 = CurrentIrql + 1;
  v14 = 48 * v52;
  v51 = 48 * v52;
  v15 = (_QWORD *)(v8 - 0x21FFFFFFFFD8LL);
  v50 = (_QWORD *)(v8 - 0x21FFFFFFFFD8LL);
  while ( 1 )
  {
    if ( v11 )
    {
      v22 = v13 + BugCheckParameter2;
      v23 = (_QWORD *)((char *)v15 + v14);
      BugCheckParameter2 = v22;
      v50 = v23;
      if ( v22 > qword_140C50840 )
        goto LABEL_25;
      if ( (*v23 & 0x40000000000000LL) == 0 )
        goto LABEL_25;
      if ( *((_DWORD *)sub_1402C1550(v22) + 2) != (_DWORD)v9 )
        goto LABEL_25;
      v24 = v10 + v51;
      if ( (unsigned int)sub_1402E8990(v10 + v51) != v43
        || _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
      {
        goto LABEL_25;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v10 = v24;
    }
    else
    {
      if ( BugCheckParameter2 > qword_140C50840
        || (*v15 & 0x40000000000000LL) == 0
        || *((_DWORD *)sub_1402C1550(BugCheckParameter2) + 2) != (_DWORD)v9
        || (unsigned int)sub_1402E8990(v10) != v43 )
      {
        goto LABEL_26;
      }
      v47 = 0;
      v44 = 1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v47, v16, v17, v18);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
    }
    if ( *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) != a1 )
      break;
    if ( !v11 )
    {
      v11 = 1;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v46 + 22848));
    }
    if ( (unsigned int)sub_140235E10(v10) == a3 )
    {
      v19 = *(_BYTE *)(v10 + 34) & 7;
      if ( v19 <= 1u )
      {
        if ( !(unsigned int)sub_1402CB2D0((_QWORD *)v46, v10, a3, v43, a5) )
        {
          if ( !v7 )
            *a6 = 0;
          goto LABEL_24;
        }
        if ( a5 < 0 && !v7 )
        {
          ++*(_DWORD *)(v56 + *(_QWORD *)(a1 + 16) + 22788);
          *(_QWORD *)v10 = 0LL;
          goto LABEL_21;
        }
        *(_QWORD *)v10 = 0LL;
        if ( v7 )
          *v49 = v10;
        else
LABEL_21:
          v7 = v10;
        --a4;
        v49 = (_QWORD *)v10;
        goto LABEL_23;
      }
      if ( v7 )
        goto LABEL_24;
      if ( v19 == 5 )
      {
        v25 = 0;
        goto LABEL_46;
      }
    }
    else if ( v7 )
    {
      goto LABEL_24;
    }
    v25 = 1;
LABEL_46:
    *a6 = v25;
    if ( !*(_DWORD *)(v46 + 22788) )
      goto LABEL_24;
    v26 = (volatile LONG *)(v46 + 22848);
    if ( (a5 & 0x40) != 0 )
    {
      v54[1] = 0;
      v55[1] = v55;
      v55[0] = v55;
      v53 = *(_QWORD *)(v46 + 22792);
      *(_QWORD *)(v46 + 22792) = &v53;
      v54[0] = 393479;
      ExReleaseSpinLockExclusiveFromDpcLevel(v26);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v29 = *((_QWORD *)CurrentPrcb + 4375);
            v30 = ~(unsigned __int16)(-1LL << v45);
            v31 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
            *(_DWORD *)(v29 + 20) &= v30;
            if ( v31 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      sub_140217454((__int64)v54, 0x12u);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v26);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v37 = KeGetCurrentIrql();
          if ( v37 <= 0xFu && CurrentIrql <= 0xFu && v37 >= 2u )
          {
            v38 = KeGetCurrentPrcb();
            v36 = *((_QWORD *)v38 + 4375);
            v34 = ~(unsigned __int16)(-1LL << v45);
            v31 = ((unsigned int)v34 & *(_DWORD *)(v36 + 20)) == 0;
            v35 = (unsigned int)v34 & *(_DWORD *)(v36 + 20);
            *(_DWORD *)(v36 + 20) = v35;
            if ( v31 )
              sub_140418E4C(v38);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( CurrentIrql != 2 )
      {
        *a6 = 0;
        return 0LL;
      }
      v48 = 0;
      while ( *(_DWORD *)(v46 + 22788) )
        sub_1402F32E0(&v48, v34, v35, v36);
    }
    v11 = 0;
    v44 = 0;
    v32 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v32 <= 0xFu )
    {
      v33 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v33 + 20) |= (-1 << (v32 + 1)) & 4;
    }
LABEL_23:
    if ( !a4 )
      goto LABEL_24;
    v15 = v50;
    v14 = v51;
    v13 = v52;
  }
  if ( !v7 )
    *a6 = 1;
LABEL_24:
  if ( !v11 )
    goto LABEL_26;
LABEL_25:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v46 + 22848));
LABEL_26:
  if ( v7 && a5 < 0 )
    CurrentIrql = 2;
  if ( v44 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
          v31 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
          *(_DWORD *)(v41 + 20) &= v42;
          if ( v31 )
            sub_140418E4C(v40);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return v7;
}
