/*
 * XREFs of sub_1402864A0 @ 0x1402864A0
 * Callers:
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 *     sub_140286210 @ 0x140286210 (sub_140286210.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_14096CA00 @ 0x14096CA00 (sub_14096CA00.c)
 * Callees:
 *     sub_1402426F4 @ 0x1402426F4 (sub_1402426F4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140286630 @ 0x140286630 (sub_140286630.c)
 *     sub_140287B4C @ 0x140287B4C (sub_140287B4C.c)
 *     sub_140287BAC @ 0x140287BAC (sub_140287BAC.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_1403295C0 @ 0x1403295C0 (sub_1403295C0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1402864A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  KIRQL CurrentIrql; // r11
  unsigned int v5; // esi
  unsigned __int64 OldIrql; // rdi
  __int64 v7; // r10
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf
  signed __int32 v13[8]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v14[2]; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
  {
    v3 = sub_1403295C0(a2, a2);
    v2 = *(_QWORD *)(qword_140C51F48 + 8LL * ((*(_DWORD *)(v3 + 32) >> 6) & 0x3FF));
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 16732) )
      return;
    v3 = 0LL;
  }
  v14[1] = v14;
  v14[0] = v14;
  LockHandle.LockQueue.Lock = &qword_140C51C30;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  sub_1403119F0(&LockHandle);
  _InterlockedOr(v13, 0);
  v5 = dword_140D31080;
  sub_140286630(v2, (unsigned int)dword_140D31080, 0LL);
  if ( v3 )
    sub_140287BAC(v2, v5, v3);
  else
    sub_140287B4C(v2, v14);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && LockHandle.OldIrql <= 0xFu && v8 >= 2u )
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
  if ( v14[0] != v14 )
    sub_1402426F4(v2, v14);
}
