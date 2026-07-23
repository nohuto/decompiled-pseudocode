/*
 * XREFs of sub_1402678C8 @ 0x1402678C8
 * Callers:
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 *     sub_1405875A0 @ 0x1405875A0 (sub_1405875A0.c)
 * Callees:
 *     sub_140264C90 @ 0x140264C90 (sub_140264C90.c)
 *     sub_140267A5C @ 0x140267A5C (sub_140267A5C.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402678C8(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 result; // rax
  _BYTE *v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 OldIrql; // rsi
  __int64 v12; // r9
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  __int64 v20; // r9
  int v21; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  CurrentIrql = 17;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
  {
    result = *(unsigned int *)(a1 + 4);
    if ( (result & 0x40) != 0 )
      return result;
    v6 = a2;
    v7 = a2 + 24512;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = v6 + 24512LL * (unsigned __int16)word_140D05000;
  }
  result = *(unsigned int *)(a1 + 16100);
  if ( !(_DWORD)result && v6 < v7 )
  {
    v9 = (_BYTE *)(v6 + 22964);
    while ( 1 )
    {
      if ( v9[1] && !*v9 )
      {
        if ( a3 )
          break;
        if ( !a2 )
          goto LABEL_10;
        if ( (unsigned __int64)sub_140264C90((__int64)(v9 - 22964), 4u, 1) >= 0x400
          && (unsigned __int64)sub_140264C90((__int64)(v9 - 22964), 4u, 0) < 0x100000 )
        {
          break;
        }
      }
LABEL_19:
      v9 += 24512;
      result = 2LL;
      if ( (unsigned __int64)(v9 - 22964) >= v7 )
        return result;
    }
    if ( !a2 )
    {
LABEL_10:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
    }
    v10 = *(_QWORD *)(v9 - 20);
    if ( v10 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 24), &LockHandle);
      if ( !*v9 )
      {
        *v9 = 1;
        sub_140267A5C(v10, 2LL);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && LockHandle.OldIrql <= 0xFu && v13 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v17 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    if ( !a2 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
          {
            v19 = KeGetCurrentPrcb();
            v20 = *((_QWORD *)v19 + 4375);
            v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
            *(_DWORD *)(v20 + 20) &= v21;
            if ( v17 )
              sub_140418E4C(v19);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    goto LABEL_19;
  }
  return result;
}
