/*
 * XREFs of IopIncrementCompletionContextUsageCountAndReadData @ 0x14035B074
 * Callers:
 *     IopXxxControlFile @ 0x1406E5590 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1407659A0 (NtLockFile.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopIncrementCompletionContextUsageCountAndReadData(
        ULONG_PTR BugCheckParameter1,
        _BYTE *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  volatile signed __int64 *v4; // r13
  signed __int64 BugCheckParameter4; // rdi
  KIRQL v10; // al
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rbp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v16; // zf

  v4 = (volatile signed __int64 *)(BugCheckParameter1 + 184);
  BugCheckParameter4 = -1LL;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter1 + 184));
  v11 = *(_QWORD **)(BugCheckParameter1 + 176);
  v12 = v10;
  if ( v11 )
  {
    BugCheckParameter4 = v11[2];
    v11[2] = BugCheckParameter4 + 1;
  }
  result = KxReleaseSpinLock(v4);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v12 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
      v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v16 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v12);
  if ( v11 )
  {
    *a2 = 1;
    *a3 = *v11;
    result = v11[1];
    *a4 = result;
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 176), 0x81uLL, BugCheckParameter4);
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
    *a4 = 0LL;
  }
  return result;
}
