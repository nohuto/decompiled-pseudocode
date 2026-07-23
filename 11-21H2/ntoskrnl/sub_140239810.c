/*
 * XREFs of sub_140239810 @ 0x140239810
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x140239790 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140343010 @ 0x140343010 (sub_140343010.c)
 *     sub_14035B8F4 @ 0x14035B8F4 (sub_14035B8F4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140239810(__int64 a1)
{
  int v2; // ebp
  __int64 v3; // rax
  char v4; // si
  unsigned __int64 OldIrql; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  v2 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 72) = 0;
  *(_WORD *)(a1 + 26) &= ~0x80u;
  v3 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 64) += v2;
  v4 = *(_BYTE *)(a1 + 27);
  v13 = v3;
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
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  result = sub_14035B8F4(&v13, 0LL, 0LL);
  if ( v2 && v4 )
    result = sub_140343010(a1, 65280LL, KeGetCurrentThread());
  __incgsdword(0x8A74u);
  return result;
}
