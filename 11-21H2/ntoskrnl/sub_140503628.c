/*
 * XREFs of sub_140503628 @ 0x140503628
 * Callers:
 *     sub_140456892 @ 0x140456892 (sub_140456892.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140457684 @ 0x140457684 (sub_140457684.c)
 */

__int64 __fastcall sub_140503628(__int64 a1, __int64 a2, ULONG a3, char a4, char a5, ULONG *a6)
{
  __int64 v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r8
  int v16; // eax
  bool v17; // zf
  __int64 result; // rax
  ULONG v19; // eax
  ULONG ClearBitsAndSet; // ebp
  unsigned __int64 v21; // rsi
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 120), &LockHandle);
  if ( a5 )
  {
    v10 = *(_DWORD *)(a2 + 200);
    v9 = a2;
    v11 = *(_DWORD *)(a2 + 204);
    if ( v10 <= v11 )
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
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v17 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
LABEL_11:
      *a6 = 0;
      return 0LL;
    }
    v19 = v10 - v11;
    if ( a3 > v19 )
      a3 = v19;
  }
  ClearBitsAndSet = -1;
  if ( a3 )
  {
    while ( 1 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(*(PRTL_BITMAP *)(a2 + 16), a3, 0);
      if ( ClearBitsAndSet != -1 )
        break;
      if ( !a4 )
      {
        a3 >>= 1;
        if ( a3 )
          continue;
      }
      goto LABEL_21;
    }
    if ( a5 )
      *(_DWORD *)(v9 + 200) -= a3;
  }
LABEL_21:
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
        v17 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
        *(_DWORD *)(v24 + 20) &= v25;
        if ( v17 )
          sub_140418E4C((__int64)v23);
      }
    }
  }
  __writecr8(v21);
  if ( ClearBitsAndSet == -1 )
    goto LABEL_11;
  result = sub_140457684(a2, ClearBitsAndSet, a3);
  v26 = 0LL;
  v27 = result;
  if ( a3 )
  {
    v28 = a3;
    do
    {
      v26 = v27;
      v27 = *(_QWORD *)(v27 + 8);
      --v28;
    }
    while ( v28 );
  }
  *(_QWORD *)(v26 + 8) = 0LL;
  *a6 = a3;
  return result;
}
