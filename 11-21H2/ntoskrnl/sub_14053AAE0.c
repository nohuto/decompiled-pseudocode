/*
 * XREFs of sub_14053AAE0 @ 0x14053AAE0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_14053AAE0(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v3; // r13
  _QWORD *v4; // r12
  int v6; // esi
  __int64 i; // rbx
  int v8; // edx
  unsigned __int64 v9; // rsi
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // edx
  unsigned __int64 v21; // rbx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  __int64 v24; // r8
  int v25; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  v3 = (KSPIN_LOCK *)(a1 + 704);
  v4 = (_QWORD *)(a1 + 624);
  v6 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
  for ( i = *v4 - 136LL; ; i = *(_QWORD *)(i + 136) - 136LL )
  {
    if ( (_QWORD *)(i + 136) == v4 )
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
            v18 = *((_QWORD *)CurrentPrcb + 4375);
            v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v14 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
            *(_DWORD *)(v18 + 20) &= v19;
            if ( v14 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      return 1;
    }
    v8 = *(_DWORD *)(i + 152);
    if ( (v8 & 0x800) == 0
      && *(_QWORD *)((*(_QWORD *)(i + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x10) == *(_QWORD *)a3
      && *(_DWORD *)(i + 112)
      && (*(_DWORD *)((*(_QWORD *)(i + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x50) & 0x8000) == 0 )
    {
      break;
    }
    if ( (unsigned int)++v6 >= 0x14 && (v8 & 0x820) == 0 )
    {
      *(_DWORD *)(i + 152) |= 0x20u;
      ++*(_DWORD *)(i + 112);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v9 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v10 = KeGetCurrentIrql();
          if ( v10 <= 0xFu && LockHandle.OldIrql <= 0xFu && v10 >= 2u )
          {
            v11 = KeGetCurrentPrcb();
            v12 = *((_QWORD *)v11 + 4375);
            v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
            *(_DWORD *)(v12 + 20) &= v13;
            if ( v14 )
              sub_140418E4C((__int64)v11);
          }
        }
      }
      __writecr8(v9);
      v6 = 0;
      KeAcquireInStackQueuedSpinLock(v3, &LockHandle);
      *(_DWORD *)(i + 152) &= ~0x20u;
      --*(_DWORD *)(i + 112);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v21 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = *((_QWORD *)v23 + 4375);
        v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
        *(_DWORD *)(v24 + 20) &= v25;
        if ( v14 )
          sub_140418E4C((__int64)v23);
      }
    }
  }
  __writecr8(v21);
  *(_BYTE *)(a3 + 8) = 1;
  return 0;
}
