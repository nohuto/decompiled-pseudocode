/*
 * XREFs of sub_14025D01C @ 0x14025D01C
 * Callers:
 *     sub_1405E00E4 @ 0x1405E00E4 (sub_1405E00E4.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     sub_140207880 @ 0x140207880 (sub_140207880.c)
 *     sub_14020794C @ 0x14020794C (sub_14020794C.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14025D01C(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140D31200, &LockHandle);
  if ( (_DWORD)v3 )
  {
    v6 = a2;
    v7 = a3 - a2;
    do
    {
      v8 = *(_DWORD *)(*(_QWORD *)v6 + 4LL);
      if ( (v8 & 1) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)v6 + 4LL) = v8 & 0xFFFFFFFE;
        if ( sub_14020794C(1, 0, *(_DWORD **)(*(_QWORD *)v6 + 96LL)) )
          sub_140207880(1, 0, *(_QWORD *)(*(_QWORD *)v6 + 96LL));
      }
      v9 = *(_QWORD **)v6;
      v10 = *(_QWORD *)(v7 + v6);
      v6 += 8LL;
      *v9 = v10;
      --v3;
    }
    while ( v3 );
  }
  sub_14020794C(0, 1, *(_DWORD **)(*(_QWORD *)a2 + 96LL));
  sub_140207880(0, 1, *(_QWORD *)(*(_QWORD *)a2 + 96LL));
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
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v15 = ((unsigned int)result & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= result;
        if ( v15 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
