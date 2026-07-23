/*
 * XREFs of sub_14053D730 @ 0x14053D730
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402766A0 @ 0x1402766A0 (sub_1402766A0.c)
 *     sub_140276728 @ 0x140276728 (sub_140276728.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140538E4C @ 0x140538E4C (sub_140538E4C.c)
 */

char __fastcall sub_14053D730(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // rbp
  __int64 v5; // rdx
  unsigned int v6; // r9d
  _QWORD *v7; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[6];
  a1[6] = 0LL;
  v4 = a1[7];
  v5 = a1[9];
  v2 = a1[8];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *(_DWORD *)(v1 + 16);
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_QWORD *)v1 = 0LL;
  sub_140538E4C(v2, v5, v1, v6);
  sub_1402766A0((PSLIST_ENTRY)v1);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 768), &LockHandle);
  v7 = *(_QWORD **)(v2 + 1552);
  if ( *v7 != v2 + 1544 )
    __fastfail(3u);
  a1[1] = v7;
  *a1 = v2 + 1544;
  *v7 = a1;
  *(_QWORD *)(v2 + 1552) = a1;
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
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  LOBYTE(v14) = sub_140276728(v4);
  if ( v2 )
  {
    v14 = _InterlockedDecrement64((volatile signed __int64 *)(v2 + 8));
    if ( v14 <= 0 )
    {
      if ( v14 )
        __fastfail(0xEu);
      LOBYTE(v14) = KeSetEvent((PRKEVENT)(v2 + 1200), 0, 0);
    }
  }
  return v14;
}
