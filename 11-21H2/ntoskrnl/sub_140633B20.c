/*
 * XREFs of sub_140633B20 @ 0x140633B20
 * Callers:
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402DA448 @ 0x1402DA448 (sub_1402DA448.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14046087A @ 0x14046087A (sub_14046087A.c)
 */

char __fastcall sub_140633B20(__int64 a1, __int64 a2, PSLIST_ENTRY *a3)
{
  char v3; // di
  __int64 v5; // rsi
  unsigned int v6; // r15d
  _SLIST_ENTRY *v7; // r12
  unsigned int v8; // r11d
  unsigned __int64 v9; // r8
  unsigned int v10; // r9d
  __int64 v11; // r10
  __int64 v12; // rax
  int v13; // edx
  int v14; // ebx
  _QWORD *v15; // r14
  unsigned __int8 CurrentIrql; // bp
  PSLIST_ENTRY v17; // rsi
  unsigned int v18; // eax
  unsigned int v19; // edx
  PSLIST_ENTRY v20; // rcx
  unsigned int Next; // r8d
  _SLIST_ENTRY *v22; // rdx
  PSLIST_ENTRY *v23; // rax
  __int64 v24; // rax
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v27; // r8
  int v28; // eax
  bool v29; // zf
  unsigned __int8 v30; // cl
  __int64 v31; // r9
  _SLIST_ENTRY **v32; // rax
  unsigned int v33; // ebx
  PSLIST_ENTRY v34; // rbp
  __int64 v35; // r12
  PSLIST_ENTRY v36; // r13
  unsigned int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  __int64 v40; // r8
  int v41; // eax
  _SLIST_ENTRY *v42; // rbx
  PSLIST_ENTRY *v43; // rax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r9
  __int64 v46; // r8
  int v47; // eax
  unsigned int v49; // [rsp+20h] [rbp-88h]
  unsigned int v50; // [rsp+28h] [rbp-80h]
  __int64 v51; // [rsp+30h] [rbp-78h]
  PSLIST_ENTRY v52; // [rsp+38h] [rbp-70h]
  _SLIST_ENTRY *ListEntry; // [rsp+40h] [rbp-68h]
  KSPIN_LOCK *SpinLock; // [rsp+48h] [rbp-60h]
  unsigned __int8 v55; // [rsp+58h] [rbp-50h]
  unsigned int v57; // [rsp+B8h] [rbp+10h]
  int v59; // [rsp+C8h] [rbp+20h]

  v3 = 0;
  *a3 = 0LL;
  if ( (*(_DWORD *)(a1 + 820) & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 1008);
    v6 = ((unsigned int)*(unsigned __int16 *)(a2 + 6) - 8) >> 3;
    v7 = 0LL;
    v8 = 0;
    v9 = 4LL * v6;
    v10 = 0;
    v51 = v5;
    ListEntry = 0LL;
    v50 = 0;
    if ( v9 )
    {
      v11 = 0LL;
      do
      {
        v12 = v10 + 1;
        v10 += 2;
        v13 = *(unsigned __int16 *)(a2 + 2 * v11 + 16) ^ *(unsigned __int16 *)(a2 + 2 * v12 + 16);
        v11 = v10;
        v8 += v13;
      }
      while ( v10 < v9 );
      v50 = v8;
    }
    v14 = 0;
    v15 = (_QWORD *)(v5 + 8 * (v8 % *(_DWORD *)(v5 + 8) + 2 * (v8 % *(_DWORD *)(v5 + 8) + 2LL)));
    CurrentIrql = KeGetCurrentIrql();
    v55 = CurrentIrql;
    if ( CurrentIrql <= 1u )
    {
      v30 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v30 <= 0xFu )
      {
        v31 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v31 + 20) |= (-1 << (v30 + 1)) & 4;
      }
    }
    else if ( CurrentIrql != 2 )
    {
      SpinLock = v15 + 2;
      if ( !sub_1402DA448((volatile signed __int32 *)v15 + 4) )
        return v3;
      v14 = 0;
LABEL_10:
      v17 = (PSLIST_ENTRY)*v15;
      if ( (_QWORD *)*v15 != v15 )
      {
        v18 = v50;
        do
        {
          ++v14;
          if ( *((_DWORD *)&v17[1].Next + 3) == v18 && LODWORD(v17[2].Next) == v6 )
          {
            v19 = 0;
            v20 = v17;
            v59 = 0;
            v52 = v17;
            while ( 1 )
            {
              Next = 32;
              if ( LODWORD(v20[2].Next) < 0x20 )
                Next = (unsigned int)v20[2].Next;
              v49 = Next;
              if ( RtlCompareMemory(&v20[2].Next + 1, (const void *)(a2 + 8LL * v19 + 16), 8LL * Next) != 8LL * Next )
                break;
              v19 = v49 + v59;
              v59 += v49;
              v20 = v52[1].Next;
              v52 = v20;
              if ( !v20 )
              {
                _InterlockedIncrement((volatile signed __int32 *)&v17[1].Next + 2);
                v22 = v17->Next;
                v23 = (PSLIST_ENTRY *)*((_QWORD *)&v17->Next + 1);
                if ( *(&v17->Next->Next + 1) == v17 && *v23 == v17 )
                {
                  *v23 = v22;
                  *((_QWORD *)&v22->Next + 1) = v23;
                  v24 = *v15;
                  if ( *(_QWORD **)(*v15 + 8LL) == v15 )
                  {
                    v17->Next = (_SLIST_ENTRY *)v24;
                    *((_QWORD *)&v17->Next + 1) = v15;
                    *(_QWORD *)(v24 + 8) = v17;
                    *v15 = v17;
                    KeReleaseSpinLockFromDpcLevel(v15 + 2);
                    if ( dword_140D06B08 )
                    {
                      if ( (dword_140D06B08 & 1) != 0 )
                      {
                        v25 = KeGetCurrentIrql();
                        if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
                        {
                          CurrentPrcb = KeGetCurrentPrcb();
                          v27 = *((_QWORD *)CurrentPrcb + 4375);
                          v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                          v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
                          *(_DWORD *)(v27 + 20) &= v28;
                          if ( v29 )
                            sub_140418E4C((__int64)CurrentPrcb);
                        }
                      }
                    }
                    __writecr8(CurrentIrql);
                    goto LABEL_76;
                  }
                }
LABEL_66:
                __fastfail(3u);
              }
            }
            v18 = v50;
          }
          v17 = v17->Next;
        }
        while ( v17 != (PSLIST_ENTRY)v15 );
        if ( v14 == 4 )
        {
          v7 = (_SLIST_ENTRY *)v15[1];
          ListEntry = v7;
          v32 = (_SLIST_ENTRY **)*((_QWORD *)&v7->Next + 1);
          if ( v7->Next != (_SLIST_ENTRY *)v15 || *v32 != v7 )
            goto LABEL_66;
          v15[1] = v32;
          *v32 = (_SLIST_ENTRY *)v15;
        }
      }
      v17 = 0LL;
      v33 = 0;
      if ( !v6 )
        goto LABEL_65;
      v34 = 0LL;
      v35 = a2;
      do
      {
        v36 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v51 + 16));
        if ( !v36 )
          break;
        if ( v33 + 32 >= v6 )
          v37 = v6 - v33;
        else
          v37 = 32;
        v57 = v37;
        memmove(&v36[2].Next + 1, (const void *)(v35 + 8 * (v33 + 2LL)), 8LL * v37);
        if ( v33 )
          LODWORD(v36[2].Next) = v57;
        else
          v17 = v36;
        if ( v34 )
          v34[1].Next = v36;
        v33 += v57;
        v36[1].Next = 0LL;
        v34 = v36;
      }
      while ( v33 < v6 );
      CurrentIrql = v55;
      v7 = ListEntry;
      if ( v33 < v6 )
      {
        KeReleaseSpinLockFromDpcLevel(SpinLock);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v38 = KeGetCurrentIrql();
            if ( v38 <= 0xFu && v55 <= 0xFu && v38 >= 2u )
            {
              v39 = KeGetCurrentPrcb();
              v40 = *((_QWORD *)v39 + 4375);
              v41 = ~(unsigned __int16)(-1LL << (v55 + 1));
              v29 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
              *(_DWORD *)(v40 + 20) &= v41;
              if ( v29 )
                sub_140418E4C((__int64)v39);
            }
          }
        }
        __writecr8(v55);
        if ( v17 )
        {
          do
          {
            v42 = v17[1].Next;
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(v51 + 16), v17);
            v17 = v42;
          }
          while ( v42 );
        }
        if ( ListEntry )
          sub_14046087A(ListEntry, (unsigned int **)v51);
      }
      else
      {
LABEL_65:
        *((_DWORD *)&v17[1].Next + 3) = v50;
        *((_DWORD *)&v17[1].Next + 2) = 2;
        LODWORD(v17[2].Next) = v6;
        v43 = (PSLIST_ENTRY *)v15[1];
        if ( *v43 != (PSLIST_ENTRY)v15 )
          goto LABEL_66;
        v17->Next = (_SLIST_ENTRY *)v15;
        *((_QWORD *)&v17->Next + 1) = v43;
        *v43 = v17;
        v15[1] = v17;
        KeReleaseSpinLockFromDpcLevel(v15 + 2);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v44 = KeGetCurrentIrql();
            if ( v44 <= 0xFu && CurrentIrql <= 0xFu && v44 >= 2u )
            {
              v45 = KeGetCurrentPrcb();
              v46 = *((_QWORD *)v45 + 4375);
              v47 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v29 = (v47 & *(_DWORD *)(v46 + 20)) == 0;
              *(_DWORD *)(v46 + 20) &= v47;
              if ( v29 )
                sub_140418E4C((__int64)v45);
            }
          }
        }
        __writecr8(CurrentIrql);
        if ( v7 )
          sub_14046087A(v7, (unsigned int **)v51);
LABEL_76:
        v3 = 1;
        *a3 = v17;
      }
      return v3;
    }
    SpinLock = v15 + 2;
    KeAcquireSpinLockAtDpcLevel(v15 + 2);
    goto LABEL_10;
  }
  return 0;
}
