/*
 * XREFs of sub_1405AE8FC @ 0x1405AE8FC
 * Callers:
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 *     sub_140352A00 @ 0x140352A00 (sub_140352A00.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405AE8FC(__int64 *a1, __int64 a2)
{
  BOOL v4; // eax
  BOOL v5; // edx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  v4 = sub_140317A80((unsigned __int64)a1);
  v5 = 0;
  if ( (a2 & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_10;
    if ( (unsigned int)sub_140229550() )
    {
      v5 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_10;
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
    {
      goto LABEL_10;
    }
    a2 |= 0x8000000000000000uLL;
  }
  else if ( v4 )
  {
    v5 = sub_140229550() != 0;
  }
LABEL_10:
  *a1 = a2;
  if ( v5 )
    sub_1402294F0((__int64)a1, a2);
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
        v10 = ((unsigned int)result & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= result;
        if ( v10 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
