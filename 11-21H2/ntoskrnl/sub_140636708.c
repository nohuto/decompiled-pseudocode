/*
 * XREFs of sub_140636708 @ 0x140636708
 * Callers:
 *     sub_1409EEA80 @ 0x1409EEA80 (sub_1409EEA80.c)
 *     sub_1409EF190 @ 0x1409EF190 (sub_1409EF190.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140636708(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v5; // ebx
  _SLIST_ENTRY *v6; // rdi
  KSPIN_LOCK *v7; // r14
  unsigned __int64 v8; // rsi
  unsigned int v9; // eax
  _SLIST_ENTRY *v10; // rax
  __int64 v11; // rbp
  _SLIST_ENTRY *v12; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf

  v2 = *(_QWORD *)(a2 + 32);
  KeGetCurrentIrql();
  if ( *(_DWORD *)(a2 + 52) < *(_DWORD *)(a2 + 56) )
  {
    v6 = (_SLIST_ENTRY *)sub_14042A5E0(a1, a2);
    if ( v6 )
    {
      v7 = (KSPIN_LOCK *)(a1 + 368);
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 368));
      if ( *(_DWORD *)(a2 + 40) && (v9 = *(_DWORD *)(a2 + 52), v9 < *(_DWORD *)(a2 + 56)) )
      {
        *(_DWORD *)(a2 + 52) = v9 + 1;
        v10 = (_SLIST_ENTRY *)((char *)v6 + 24);
        ++*(_DWORD *)(v2 + 72);
        v11 = v2 + 32;
        v12 = *(_SLIST_ENTRY **)(v11 + 8);
        if ( v12->Next != (_SLIST_ENTRY *)v11 )
          __fastfail(3u);
        v6[2].Next = v12;
        v10->Next = (_SLIST_ENTRY *)v11;
        v12->Next = v10;
        *(_QWORD *)(v11 + 8) = v10;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)a2, v6);
        v6 = 0LL;
        v5 = 0;
      }
      else
      {
        v5 = 255;
      }
      KeReleaseSpinLockFromDpcLevel(v7);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v17 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x56777445u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 255;
  }
  return v5;
}
