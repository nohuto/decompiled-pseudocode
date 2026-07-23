/*
 * XREFs of sub_14039C944 @ 0x14039C944
 * Callers:
 *     sub_14039C830 @ 0x14039C830 (sub_14039C830.c)
 *     ExConvertFastResourceExclusiveToShared @ 0x14063C4D0 (ExConvertFastResourceExclusiveToShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_14035B8F4 @ 0x14035B8F4 (sub_14035B8F4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14039C944(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 *v5; // rax
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v15; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 96);
  sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)(a1 + 96));
  *(_WORD *)(a1 + 26) &= ~0x80u;
  v5 = *(__int64 **)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  v15 = v5;
  LODWORD(v5) = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 64) += (_DWORD)v5;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  sub_14035B8F4(&v15, 0LL, 0LL, v6);
  *(_BYTE *)(a2 + 17) &= ~4u;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
