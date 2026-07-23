/*
 * XREFs of IopDequeueIrpFromThread @ 0x1402AF9C0
 * Callers:
 *     IopCopyCompleteReadRequest @ 0x14028C860 (IopCopyCompleteReadRequest.c)
 *     IopCompleteRequest @ 0x1402AB710 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1402C9C40 (IopfCompleteRequest.c)
 *     IopIoRingCompleteIrp @ 0x140559B9C (IopIoRingCompleteIrp.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopCloseFile @ 0x1407301F0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140730680 (IopDeleteFile.c)
 *     IoCancelFileOpen @ 0x140946F00 (IoCancelFileOpen.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140250FE0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x140460830 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140571D88 (KiReleaseSpinLockInstrumented.c)
 */

_QWORD *__fastcall IopDequeueIrpFromThread(_QWORD *a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // si
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rdx
  _QWORD *result; // rax
  _QWORD *v7; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v9; // r9
  unsigned __int8 v10; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1[19];
  CurrentIrql = 0;
  v4 = (volatile signed __int32 *)(v1 + 1496);
  if ( v1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v9) = 4;
      else
        v9 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v9;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v1 + 1496);
    }
    else if ( _interlockedbittestandset64(v4, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v1 + 1496));
    }
  }
  v5 = a1[4];
  result = a1 + 4;
  v7 = (_QWORD *)a1[5];
  if ( *(_QWORD **)(v5 + 8) != a1 + 4 || (_QWORD *)*v7 != result )
    __fastfail(3u);
  *v7 = v5;
  *(_QWORD *)(v5 + 8) = v7;
  a1[5] = a1 + 4;
  *result = result;
  if ( v1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v1 + 1496, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
    if ( (_DWORD)KiIrqlFlags )
    {
      v10 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = (_QWORD *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
