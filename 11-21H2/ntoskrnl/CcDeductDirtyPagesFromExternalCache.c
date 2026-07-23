/*
 * XREFs of CcDeductDirtyPagesFromExternalCache @ 0x14039EA50
 * Callers:
 *     CcUnregisterExternalCache @ 0x140539D20 (CcUnregisterExternalCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14053A100 @ 0x14053A100 (sub_14053A100.c)
 */

__int64 __fastcall CcDeductDirtyPagesFromExternalCache(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // r14
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // r15
  _QWORD *v8; // r15
  unsigned int v9; // ebp
  unsigned __int64 v10; // rcx
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a2;
  result = (__int64)qword_140D06C40;
  v6 = *((_QWORD *)qword_140D06C40 + 1);
  v7 = v6;
  if ( byte_140C54C58 == 1 )
    v7 = v2;
  v8 = (_QWORD *)(v7 + 1104);
  if ( a2 )
  {
    do
    {
      v9 = v3;
      if ( v3 > 0xFFFFFFFF )
        v9 = -1;
      v3 -= v9;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 704), &LockHandle);
      v10 = *(_QWORD *)(a1 + 8);
      if ( v10 < v9 )
        v9 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v10 - v9;
      *(_QWORD *)(v6 + 992) -= v9;
      if ( v2 )
        *(_QWORD *)(v2 + 992) -= v9;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = (unsigned int)dword_140D06B08;
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v13 = *((_QWORD *)CurrentPrcb + 4375);
            result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v14 = ((unsigned int)result & *(_DWORD *)(v13 + 20)) == 0;
            *(_DWORD *)(v13 + 20) &= result;
            if ( v14 )
              result = sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    while ( v3 );
  }
  if ( (_QWORD *)*v8 != v8 )
    return sub_14053A100(v6, v2);
  return result;
}
