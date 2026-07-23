/*
 * XREFs of sub_1402180C4 @ 0x1402180C4
 * Callers:
 *     sub_14021803C @ 0x14021803C (sub_14021803C.c)
 *     sub_140693A28 @ 0x140693A28 (sub_140693A28.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402180C4(_DWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  bool v11; // zf
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+50h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
  KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  if ( a1 && *((PEPROCESS *)KeGetCurrentThread() + 23) == PsInitialSystemProcess )
  {
    v14 = *(_DWORD *)(v2 + 376);
    BYTE1(v14) = BYTE1(v14) & 0xF9 | 4;
    *(_WORD *)(v2 + 376) = v14;
  }
  v3 = (_QWORD *)(8 * (((unsigned __int64)qword_140C50630 >> 39) & 0x1FF) - 0x90482413000LL);
  if ( sub_140317A10(v3) )
  {
    v4 = 0;
    if ( (unsigned int)sub_140317A80(v3) && (unsigned int)sub_140229550(v6, v5) )
      v4 = 1;
    *v3 = 0LL;
    if ( v4 )
      sub_1402294F0(v3, 0LL);
  }
  if ( a1 )
  {
    _InterlockedOr(v12, 0);
    *a1 = dword_140D31080;
    *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) = 0LL;
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
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= result;
        if ( v11 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
