/*
 * XREFs of sub_1406342C8 @ 0x1406342C8
 * Callers:
 *     sub_140631A8C @ 0x140631A8C (sub_140631A8C.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_1402DA448 @ 0x1402DA448 (sub_1402DA448.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14046087A @ 0x14046087A (sub_14046087A.c)
 */

char __fastcall sub_1406342C8(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // r11
  char v7; // di
  unsigned int v8; // r15d
  unsigned __int64 v9; // r8
  unsigned int v10; // ebx
  PSLIST_ENTRY v11; // r13
  unsigned int v12; // r9d
  __int64 v13; // r10
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rdx
  int v17; // ebx
  _SLIST_ENTRY *v18; // r14
  __int64 CurrentIrql; // rbp
  _SLIST_ENTRY *Next; // rsi
  unsigned int v21; // eax
  unsigned int v22; // edx
  ULONGLONG Alignment; // rcx
  unsigned int v24; // r8d
  _SLIST_ENTRY *v25; // rdx
  _SLIST_ENTRY **v26; // rax
  _SLIST_ENTRY *v27; // rax
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v30; // r8
  int v31; // eax
  bool v32; // zf
  unsigned __int8 v33; // cl
  __int64 v34; // r9
  PSLIST_ENTRY *v35; // rax
  unsigned int v36; // ebx
  PSLIST_ENTRY v37; // rbp
  PSLIST_ENTRY v38; // r15
  unsigned int v39; // r12d
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r9
  __int64 v42; // r8
  int v43; // eax
  _SLIST_ENTRY *v44; // rbx
  _SLIST_ENTRY **v45; // rax
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r9
  __int64 v48; // r8
  int v49; // eax
  int v51; // [rsp+34h] [rbp-94h]
  unsigned int v52; // [rsp+38h] [rbp-90h]
  PSLIST_HEADER ListHead; // [rsp+40h] [rbp-88h]
  unsigned int v54; // [rsp+48h] [rbp-80h]
  __int64 v55; // [rsp+50h] [rbp-78h]
  PSLIST_ENTRY v56; // [rsp+58h] [rbp-70h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-68h]
  PKSPIN_LOCK SpinLock; // [rsp+68h] [rbp-60h]
  _SLIST_ENTRY *v59; // [rsp+70h] [rbp-58h]
  __int64 v60; // [rsp+78h] [rbp-50h]

  v6 = *(_QWORD *)(a1 + 1008);
  v7 = 0;
  v56 = 0LL;
  v55 = v6;
  if ( !v6 )
    return v7;
  v8 = a6;
  ListEntry = 0LL;
  v9 = 4LL * a6;
  v10 = 0;
  v52 = 0;
  v11 = 0LL;
  v12 = 0;
  if ( v9 )
  {
    v13 = 0LL;
    do
    {
      v14 = v12 + 1;
      v12 += 2;
      v15 = *(unsigned __int16 *)(a5 + 2 * v13) ^ *(unsigned __int16 *)(a5 + 2 * v14);
      v13 = v12;
      v10 += v15;
    }
    while ( v12 < v9 );
    v8 = a6;
    v52 = v10;
  }
  v16 = v10 % *(_DWORD *)(v6 + 8);
  v17 = 0;
  v18 = (_SLIST_ENTRY *)(v6 + 8 * (v16 + 2 * (v16 + 2)));
  v59 = v18;
  CurrentIrql = KeGetCurrentIrql();
  v60 = CurrentIrql;
  if ( (unsigned __int8)CurrentIrql <= 1u )
  {
    v33 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v33 <= 0xFu )
    {
      v34 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v34 + 20) |= (-1 << (v33 + 1)) & 4;
    }
  }
  else if ( (_BYTE)CurrentIrql != 2 )
  {
    SpinLock = (PKSPIN_LOCK)&v18[1];
    if ( !sub_1402DA448((volatile signed __int32 *)&v18[1]) )
      return v7;
    v17 = 0;
    goto LABEL_10;
  }
  SpinLock = (PKSPIN_LOCK)&v18[1];
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&v18[1]);
LABEL_10:
  Next = v18->Next;
  if ( v18->Next != v18 )
  {
    v21 = v52;
    do
    {
      ++v17;
      if ( *((_DWORD *)&Next[1].Next + 3) == v21 && LODWORD(Next[2].Next) == v8 )
      {
        v22 = 0;
        Alignment = (ULONGLONG)Next;
        v51 = 0;
        ListHead = (PSLIST_HEADER)Next;
        while ( 1 )
        {
          v24 = 32;
          if ( *(_DWORD *)(Alignment + 32) < 0x20u )
            v24 = *(_DWORD *)(Alignment + 32);
          v54 = v24;
          if ( RtlCompareMemory((const void *)(Alignment + 40), (const void *)(a5 + 8LL * v22), 8LL * v24) != 8LL * v24 )
            break;
          v22 = v54 + v51;
          v51 += v54;
          Alignment = ListHead[1].Alignment;
          ListHead = (PSLIST_HEADER)Alignment;
          if ( !Alignment )
          {
            _InterlockedIncrement((volatile signed __int32 *)&Next[1].Next + 2);
            v25 = Next->Next;
            v26 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1);
            if ( *(&Next->Next->Next + 1) == Next && *v26 == Next )
            {
              *v26 = v25;
              *((_QWORD *)&v25->Next + 1) = v26;
              v27 = v18->Next;
              if ( *(&v18->Next->Next + 1) == v18 )
              {
                Next->Next = v27;
                *((_QWORD *)&Next->Next + 1) = v18;
                *((_QWORD *)&v27->Next + 1) = Next;
                v18->Next = Next;
                KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v18[1]);
                if ( dword_140D06B08 )
                {
                  if ( (dword_140D06B08 & 1) != 0 )
                  {
                    v28 = KeGetCurrentIrql();
                    if ( v28 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v28 >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      v30 = *((_QWORD *)CurrentPrcb + 4375);
                      v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
                      v32 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
                      *(_DWORD *)(v30 + 20) &= v31;
                      if ( v32 )
                        sub_140418E4C((__int64)CurrentPrcb);
                    }
                  }
                }
                __writecr8((unsigned __int8)CurrentIrql);
                goto LABEL_78;
              }
            }
LABEL_68:
            __fastfail(3u);
          }
        }
        v21 = v52;
      }
      Next = Next->Next;
    }
    while ( Next != v18 );
    if ( v17 == 4 )
    {
      v11 = (PSLIST_ENTRY)*((_QWORD *)&v18->Next + 1);
      ListEntry = v11;
      v35 = (PSLIST_ENTRY *)*((_QWORD *)&v11->Next + 1);
      if ( v11->Next != v18 || *v35 != v11 )
        goto LABEL_68;
      *((_QWORD *)&v18->Next + 1) = v35;
      *v35 = v18;
    }
  }
  Next = 0LL;
  v36 = 0;
  if ( !v8 )
    goto LABEL_67;
  v37 = 0LL;
  while ( 1 )
  {
    v38 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v55 + 16));
    if ( !v38 )
      break;
    if ( v36 + 32 >= a6 )
      v39 = a6 - v36;
    else
      v39 = 32;
    memmove(&v38[2].Next + 1, (const void *)(a5 + 8LL * v36), 8LL * v39);
    if ( v36 )
      LODWORD(v38[2].Next) = v39;
    else
      Next = v38;
    if ( v37 )
      v37[1].Next = v38;
    v37 = v38;
    v38[1].Next = 0LL;
    v8 = a6;
    v36 += v39;
    if ( v36 >= a6 )
      goto LABEL_55;
  }
  v8 = a6;
LABEL_55:
  v18 = v59;
  LOBYTE(CurrentIrql) = v60;
  v11 = ListEntry;
  if ( v36 < v8 )
  {
    KeReleaseSpinLockFromDpcLevel(SpinLock);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v40 = KeGetCurrentIrql();
        if ( v40 <= 0xFu && (unsigned __int8)v60 <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = *((_QWORD *)v41 + 4375);
          v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
          v32 = (v43 & *(_DWORD *)(v42 + 20)) == 0;
          *(_DWORD *)(v42 + 20) &= v43;
          if ( v32 )
            sub_140418E4C((__int64)v41);
        }
      }
    }
    __writecr8((unsigned __int8)CurrentIrql);
    if ( Next )
    {
      do
      {
        v44 = Next[1].Next;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v55 + 16), Next);
        Next = v44;
      }
      while ( v44 );
    }
    if ( v11 )
      sub_14046087A(v11, (unsigned int **)v55);
  }
  else
  {
LABEL_67:
    *((_DWORD *)&Next[1].Next + 3) = v52;
    LODWORD(Next[2].Next) = v8;
    *((_DWORD *)&Next[1].Next + 2) = 2;
    v45 = (_SLIST_ENTRY **)*((_QWORD *)&v18->Next + 1);
    if ( *v45 != v18 )
      goto LABEL_68;
    Next->Next = v18;
    *((_QWORD *)&Next->Next + 1) = v45;
    *v45 = Next;
    *((_QWORD *)&v18->Next + 1) = Next;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v18[1]);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v46 = KeGetCurrentIrql();
        if ( v46 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v46 >= 2u )
        {
          v47 = KeGetCurrentPrcb();
          v48 = *((_QWORD *)v47 + 4375);
          v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
          v32 = (v49 & *(_DWORD *)(v48 + 20)) == 0;
          *(_DWORD *)(v48 + 20) &= v49;
          if ( v32 )
            sub_140418E4C((__int64)v47);
        }
      }
    }
    __writecr8((unsigned __int8)CurrentIrql);
    if ( v11 )
      sub_14046087A(v11, (unsigned int **)v55);
LABEL_78:
    v56 = Next;
    *(_QWORD *)(a4 + 16) = &v56;
    *(_QWORD *)(a4 + 24) = 8LL;
    sub_1402AB170(a4, *(_QWORD *)(a1 + 1096), *(_DWORD *)a1, 2u, a3, a2);
    sub_14046087A(v56, *(unsigned int ***)(a1 + 1008));
    return 1;
  }
  return v7;
}
