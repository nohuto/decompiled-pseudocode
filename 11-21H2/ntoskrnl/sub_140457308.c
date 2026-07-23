/*
 * XREFs of sub_140457308 @ 0x140457308
 * Callers:
 *     sub_1404584D6 @ 0x1404584D6 (sub_1404584D6.c)
 *     sub_140512444 @ 0x140512444 (sub_140512444.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 *__fastcall sub_140457308(__int64 a1, char a2)
{
  __int64 **v4; // rcx
  __int64 *v5; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf
  __int64 *result; // rax
  __int64 v13; // rdx
  __int64 *v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r11
  __int64 v18; // r9
  int v19; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 120), &LockHandle);
  v4 = (__int64 **)(a1 + 168);
  if ( !a2 )
    v4 = (__int64 **)(a1 + 152);
  v5 = *v4;
  if ( *v4 == (__int64 *)v4 )
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
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( v11 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    result = 0LL;
    __writecr8(OldIrql);
  }
  else
  {
    v13 = *v5;
    if ( (__int64 **)v5[1] != v4 || *(__int64 **)(v13 + 8) != v5 )
      __fastfail(3u);
    *v4 = (__int64 *)v13;
    v14 = v5 - 20;
    *(_QWORD *)(v13 + 8) = v4;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v15 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && LockHandle.OldIrql <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = *((_QWORD *)v17 + 4375);
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v11 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v19;
          if ( v11 )
            sub_140418E4C((__int64)v17);
        }
      }
    }
    __writecr8(v15);
    return v14;
  }
  return result;
}
