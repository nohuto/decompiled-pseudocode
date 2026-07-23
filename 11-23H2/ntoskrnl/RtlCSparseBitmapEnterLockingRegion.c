/*
 * XREFs of RtlCSparseBitmapEnterLockingRegion @ 0x140313800
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x1403136B8 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x140355D1C (RtlpCSparseBitmapPageDecommit.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlCSparseBitmapEnterLockingRegion(_QWORD *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r9
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *SchedulerAssist; // r11
  __int64 v6; // rax

  *a1 = 0LL;
  a1[1] = a2;
  if ( *(_BYTE *)(a2 + 48) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v6) = 4;
      if ( CurrentIrql != 2 )
        v6 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v6;
    }
    *(_BYTE *)a1 = CurrentIrql;
  }
  else
  {
    *(_BYTE *)a1 = -1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  return a1;
}
