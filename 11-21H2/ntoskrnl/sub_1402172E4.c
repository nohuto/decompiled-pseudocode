/*
 * XREFs of sub_1402172E4 @ 0x1402172E4
 * Callers:
 *     sub_140216BC0 @ 0x140216BC0 (sub_140216BC0.c)
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 *     sub_140693C24 @ 0x140693C24 (sub_140693C24.c)
 * Callees:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

unsigned __int64 __fastcall sub_1402172E4(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rbx
  char v4; // al
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  struct _KPRCB *v16; // r9
  __int64 v17; // r8
  _DWORD v18[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+28h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v18[0] = 393479;
  v18[1] = 0;
  v19[1] = v19;
  v19[0] = v19;
  p_LockHandle = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
  {
    p_LockHandle = &LockHandle;
    KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  }
  while ( 1 )
  {
    v4 = *(_BYTE *)(a1 + 185);
    if ( (v4 & 6) == 0 && (v4 & 0xF0) == 0 )
      break;
    *(_QWORD *)(a1 + 104) = v18;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(p_LockHandle);
    OldIrql = p_LockHandle->OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    sub_140217454(v18, 18LL);
    KeAcquireInStackQueuedSpinLock(&qword_140C53340, p_LockHandle);
  }
  v5 = (_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 )
  {
    v7 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD **)(v6 + 8) != v5 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = 0LL;
  }
  *(_QWORD *)(a1 + 104) = MmBadPointer;
  result = (unsigned __int64)&LockHandle;
  if ( p_LockHandle == &LockHandle )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(p_LockHandle);
    result = (unsigned int)dword_140D06B08;
    v9 = p_LockHandle->OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v17 = *((_QWORD *)v16 + 4375);
          v15 = ((unsigned int)result & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= result;
          if ( v15 )
            result = sub_140418E4C(v16);
        }
      }
    }
    __writecr8(v9);
  }
  return result;
}
