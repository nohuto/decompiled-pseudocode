/*
 * XREFs of sub_1405994E4 @ 0x1405994E4
 * Callers:
 *     sub_1405A2D30 @ 0x1405A2D30 (sub_1405A2D30.c)
 *     sub_140970E00 @ 0x140970E00 (sub_140970E00.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140693EA8 @ 0x140693EA8 (sub_140693EA8.c)
 */

__int64 *__fastcall sub_1405994E4(_QWORD *P)
{
  __int64 *v2; // rdi
  __int64 *v3; // rdx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r8
  int v8; // eax
  bool v9; // zf
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned __int64 v13; // rsi
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  __int64 v16; // r8
  int v17; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  if ( P )
  {
    v3 = (__int64 *)P[15];
  }
  else
  {
    v3 = (__int64 *)qword_140C53480;
    if ( !qword_140C53480 )
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
            v7 = *((_QWORD *)CurrentPrcb + 4375);
            v8 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
            *(_DWORD *)(v7 + 20) &= v8;
            if ( v9 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      return 0LL;
    }
  }
  while ( v3 != &qword_140C53480 )
  {
    v2 = v3 - 15;
    v11 = *((_DWORD *)v3 - 27);
    while ( v11 )
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)v2 + 3, v11 + 1, v11);
      if ( v12 == v11 )
        goto LABEL_18;
    }
    v3 = (__int64 *)*v3;
  }
LABEL_18:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v13 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && LockHandle.OldIrql <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = *((_QWORD *)v15 + 4375);
        v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v9 )
          sub_140418E4C((__int64)v15);
      }
    }
  }
  __writecr8(v13);
  if ( P )
    sub_140693EA8(P);
  return v2;
}
