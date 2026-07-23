/*
 * XREFs of KiInSwapSingleProcess @ 0x14034DD54
 * Callers:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiAttachProcess @ 0x14022DBC0 (KiAttachProcess.c)
 *     KeReadyThread @ 0x1402BE04C (KeReadyThread.c)
 * Callees:
 *     KiSwapThread @ 0x14023F4C0 (KiSwapThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402520F0 (KiAcquireKobjectLockSafe.c)
 *     KiRequestProcessInSwap @ 0x14034DDF4 (KiRequestProcessInSwap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiInSwapSingleProcess(ULONG_PTR a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // rsi
  char v6; // bp
  __int64 v7; // r9
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v11; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf

  v4 = a3;
  v6 = 1;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a2);
  if ( (*(_DWORD *)(a2 + 840) & 7) != 0 )
  {
    KiRequestProcessInSwap(a1, a2);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (_KTHREAD *)a1 == CurrentPrcb->CurrentThread )
    {
      *(_BYTE *)(a1 + 643) = 23;
      *(_BYTE *)(a1 + 390) = v4;
      KiSwapThread(a1, (ULONG_PTR)CurrentPrcb, 0LL, v7);
      return v6;
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    v6 = 0;
  }
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && CurrentIrql >= 2u )
    {
      v11 = KeGetCurrentPrcb();
      SchedulerAssist = v11->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  __writecr8(v4);
  return v6;
}
