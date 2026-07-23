/*
 * XREFs of MmIsFileObjectAPagingFile @ 0x14063C268
 * Callers:
 *     IoSynchronousPageWriteEx @ 0x140251040 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x1402A6AA0 (IoPageReadEx.c)
 *     IoAsynchronousPageWrite @ 0x140369BAC (IoAsynchronousPageWrite.c)
 *     FsRtlIsSystemPagingFile @ 0x14053D4E0 (FsRtlIsSystemPagingFile.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1403148B0 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmIsFileObjectAPagingFile(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  bool v9; // zf

  v2 = 0;
  v3 = ExAcquireSpinLockShared(&dword_140C69648);
  v4 = (_QWORD *)qword_140C69640;
  if ( qword_140C69640 )
  {
    do
    {
      if ( a1 >= *(v4 - 25) )
      {
        if ( a1 <= *(v4 - 25) )
          break;
        v4 = (_QWORD *)v4[1];
      }
      else
      {
        v4 = (_QWORD *)*v4;
      }
    }
    while ( v4 );
    if ( v4 )
      v2 = 1;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C69648);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v9 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  return v2;
}
