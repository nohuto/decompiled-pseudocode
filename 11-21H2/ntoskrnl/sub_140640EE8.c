/*
 * XREFs of sub_140640EE8 @ 0x140640EE8
 * Callers:
 *     sub_140251BDC @ 0x140251BDC (sub_140251BDC.c)
 *     sub_140A02994 @ 0x140A02994 (sub_140A02994.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

LONG_PTR __fastcall sub_140640EE8(unsigned int a1)
{
  void *v2; // rbp
  _QWORD *v3; // rax
  bool v4; // zf
  int v5; // edi
  LONG_PTR result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v9; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (void *)*((_QWORD *)KeGetCurrentThread() + 23);
  KeAcquireInStackQueuedSpinLock(&qword_140C11498, &LockHandle);
  v3 = (char *)qword_140C11490 + 16 * a1;
  v4 = v3[1]-- == 1LL;
  if ( v4 )
  {
    *v3 = 0LL;
    v5 = 1;
    --dword_140C11488;
  }
  else
  {
    v3[1] |= 0x8000000000000000uLL;
    v5 = 0;
  }
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
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v4 = ((unsigned int)result & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= result;
        if ( v4 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v5 == 1 )
    return ObfDereferenceObject(v2);
  return result;
}
