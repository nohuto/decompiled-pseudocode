/*
 * XREFs of sub_140231240 @ 0x140231240
 * Callers:
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_1402A0EF8 @ 0x1402A0EF8 (sub_1402A0EF8.c)
 *     sub_1402EA5E4 @ 0x1402EA5E4 (sub_1402EA5E4.c)
 *     sub_140375ED0 @ 0x140375ED0 (sub_140375ED0.c)
 *     sub_1403A0B60 @ 0x1403A0B60 (sub_1403A0B60.c)
 *     sub_140687754 @ 0x140687754 (sub_140687754.c)
 *     sub_1406A1000 @ 0x1406A1000 (sub_1406A1000.c)
 *     sub_1406A8B68 @ 0x1406A8B68 (sub_1406A8B68.c)
 *     sub_1406A8EC8 @ 0x1406A8EC8 (sub_1406A8EC8.c)
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
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140231240(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_DWORD **)(a1 + 1368);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  --v2[23];
  if ( (v2[1] & 2) == 0 || v2[23] )
    v2 = 0LL;
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
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  sub_1402D0930(a2, 0LL);
  if ( v2 )
    sub_14024B0B4(v2 + 24);
  return 0LL;
}
