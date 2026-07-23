/*
 * XREFs of IopIoRingWaitForCompletionEvent @ 0x14055995C
 * Callers:
 *     NtSubmitIoRing @ 0x140559A70 (NtSubmitIoRing.c)
 *     IopProcessIoRingEntry @ 0x14094A028 (IopProcessIoRingEntry.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopIoRingWaitForCompletionEvent(__int64 a1, KPROCESSOR_MODE a2, BOOLEAN a3, LARGE_INTEGER *a4)
{
  void *v4; // r15
  unsigned int v6; // esi
  char v7; // bp
  unsigned __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf

  v4 = (void *)(a1 + 136);
  v6 = KeWaitForSingleObject((PVOID)(a1 + 136), WrIoRing, a2, a3, a4);
  if ( v6 )
  {
    v7 = 0;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
    if ( *(_BYTE *)(a1 + 160) )
      *(_BYTE *)(a1 + 160) = 0;
    else
      v7 = 1;
    KxReleaseSpinLock((volatile signed __int64 *)(a1 + 104));
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v8 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v8);
    if ( v7 )
      return (unsigned int)KeWaitForSingleObject(v4, WrIoRing, 0, 0, 0LL);
  }
  return v6;
}
