/*
 * XREFs of MiWakeWaitersForAweCacheAttributeChange @ 0x14064C938
 * Callers:
 *     MiIncrementAweMapCount @ 0x14064B020 (MiIncrementAweMapCount.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     KeSignalGate @ 0x14035D4DC (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWakeWaitersForAweCacheAttributeChange(__int64 a1, __int64 a2)
{
  _QWORD **v3; // r14
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  _QWORD *v13; // rbx

  v3 = (_QWORD **)(a1 + 56);
  v5 = 0LL;
  v6 = (unsigned __int8)MiLockPageInline(a2);
  *(_BYTE *)(a2 + 34) &= ~0x20u;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
  v7 = *v3;
  if ( *v3 )
  {
    do
    {
      v8 = (_QWORD *)*v7;
      if ( v7[1] == a2 )
      {
        *v7 = v5;
        v5 = v7;
        *v3 = v8;
      }
      else
      {
        v3 = (_QWORD **)v7;
      }
      v7 = v8;
    }
    while ( v8 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v6 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v12 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v6);
  if ( v5 )
  {
    do
    {
      v13 = (_QWORD *)*v5;
      result = KeSignalGate((__int64)(v5 + 2), 1u);
      v5 = v13;
    }
    while ( v13 );
  }
  return result;
}
