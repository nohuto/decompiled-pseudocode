/*
 * XREFs of sub_1405038DC @ 0x1405038DC
 * Callers:
 *     sub_140505560 @ 0x140505560 (sub_140505560.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045764A @ 0x14045764A (sub_14045764A.c)
 */

__int64 __fastcall sub_1405038DC(__int64 a1, __int64 a2, ULONG a3, char a4, char a5, ULONG *a6)
{
  __int64 v9; // r15
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
  _RTL_BITMAP *v20; // rbx
  __int64 v21; // r12
  __int64 v22; // r14
  ULONG v23; // ebx
  ULONG v24; // r10d
  ULONG ClearBitsAndSet; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  __int64 v30; // r8
  int v31; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

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
LABEL_3:
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
  if ( a4 )
  {
    v20 = *(_RTL_BITMAP **)(a2 + 16);
    if ( v20->SizeOfBitMap - RtlNumberOfSetBits(v20) < a3 )
      goto LABEL_3;
  }
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v24 = 0;
  if ( a3 )
  {
    do
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(*(PRTL_BITMAP *)(a2 + 16), 1u, v24);
      if ( ClearBitsAndSet == -1 )
        break;
      v26 = sub_14045764A(a2, ClearBitsAndSet, 0LL);
      if ( v21 )
        *(_QWORD *)(v22 + 8) = v26;
      else
        v21 = v26;
      ++v23;
      v22 = v26;
    }
    while ( v23 < a3 );
    if ( v22 )
      *(_QWORD *)(v22 + 8) = 0LL;
  }
  if ( a5 )
    *(_DWORD *)(v9 + 200) -= v23;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v27 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v28 = KeGetCurrentIrql();
      if ( v28 <= 0xFu && LockHandle.OldIrql <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = *((_QWORD *)v29 + 4375);
        v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v17 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
        *(_DWORD *)(v30 + 20) &= v31;
        if ( v17 )
          sub_140418E4C((__int64)v29);
      }
    }
  }
  __writecr8(v27);
  if ( !v23 )
    goto LABEL_11;
  result = v21;
  *a6 = v23;
  return result;
}
