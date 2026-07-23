/*
 * XREFs of sub_140218288 @ 0x140218288
 * Callers:
 *     sub_140693A28 @ 0x140693A28 (sub_140693A28.c)
 * Callees:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140218288(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r8
  int v8; // eax
  bool v9; // zf
  struct _KPRCB *v10; // r10
  __int64 v11; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  *(_DWORD *)(a1 + 4) |= 2u;
  if ( *(_DWORD *)(a1 + 92) )
  {
    *(_DWORD *)(a1 + 100) = 0;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
    *(_WORD *)(a1 + 96) = 263;
    *(_BYTE *)(a1 + 98) = 6;
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
          v7 = *((_QWORD *)CurrentPrcb + 4375);
          v8 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
          *(_DWORD *)(v7 + 20) &= v8;
          if ( v9 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    return sub_140217454(a1 + 96, 0x12u);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = (unsigned int)dword_140D06B08;
    v3 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v10 = KeGetCurrentPrcb();
          v11 = *((_QWORD *)v10 + 4375);
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = ((unsigned int)result & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= result;
          if ( v9 )
            result = sub_140418E4C(v10);
        }
      }
    }
    __writecr8(v3);
  }
  return result;
}
