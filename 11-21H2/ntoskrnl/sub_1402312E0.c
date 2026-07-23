/*
 * XREFs of sub_1402312E0 @ 0x1402312E0
 * Callers:
 *     sub_140230F28 @ 0x140230F28 (sub_140230F28.c)
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_1402A0EF8 @ 0x1402A0EF8 (sub_1402A0EF8.c)
 *     sub_140375ED0 @ 0x140375ED0 (sub_140375ED0.c)
 *     sub_1403A0B60 @ 0x1403A0B60 (sub_1403A0B60.c)
 *     sub_1405D89F0 @ 0x1405D89F0 (sub_1405D89F0.c)
 *     sub_140687754 @ 0x140687754 (sub_140687754.c)
 *     sub_1406A1000 @ 0x1406A1000 (sub_1406A1000.c)
 *     sub_1406A8B68 @ 0x1406A8B68 (sub_1406A8B68.c)
 *     sub_1406A8EEC @ 0x1406A8EEC (sub_1406A8EEC.c)
 *     sub_1406A8F48 @ 0x1406A8F48 (sub_1406A8F48.c)
 *     sub_1406EC048 @ 0x1406EC048 (sub_1406EC048.c)
 *     sub_14078D3DC @ 0x14078D3DC (sub_14078D3DC.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_140790CF8 @ 0x140790CF8 (sub_140790CF8.c)
 *     sub_140814DC0 @ 0x140814DC0 (sub_140814DC0.c)
 *     sub_1409234E0 @ 0x1409234E0 (sub_1409234E0.c)
 *     sub_1409A5C10 @ 0x1409A5C10 (sub_1409A5C10.c)
 *     sub_1409EAB74 @ 0x1409EAB74 (sub_1409EAB74.c)
 *     sub_1409F5D80 @ 0x1409F5D80 (sub_1409F5D80.c)
 *     sub_140A93644 @ 0x140A93644 (sub_140A93644.c)
 *     sub_140A937C4 @ 0x140A937C4 (sub_140A937C4.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402312E0(ULONG_PTR BugCheckParameter1)
{
  __int64 v1; // rdi
  ULONG_PTR v2; // rbx
  ULONG_PTR v3; // rsi
  __int64 v4; // r14
  unsigned __int64 v5; // rbp
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  __int64 v15; // r8
  int v16; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter1 + 1368);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = BugCheckParameter1;
  v3 = *((_QWORD *)KeGetCurrentThread() + 23);
  v4 = *(_QWORD *)(v3 + 1368);
  KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  if ( (*(_DWORD *)(v1 + 4) & 2) != 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    return 3221225738LL;
  }
  else
  {
    ++*(_DWORD *)(v1 + 92);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v5 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && LockHandle.OldIrql <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = *((_QWORD *)v14 + 4375);
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v12 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v12 )
            sub_140418E4C(v14);
        }
      }
    }
    __writecr8(v5);
    if ( v4 && (*(_DWORD *)(v3 + 2172) & 0x1000) == 0 && v4 == v1 )
      v2 = v3;
    sub_14030D5C0(v2);
    return 0LL;
  }
}
