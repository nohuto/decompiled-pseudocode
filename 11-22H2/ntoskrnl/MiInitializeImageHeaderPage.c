/*
 * XREFs of MiInitializeImageHeaderPage @ 0x14020DCC0
 * Callers:
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AEA4 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeImageHeaderPage(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int8 v6; // bl
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // [rsp+38h] [rbp+10h] BYREF
  int v15; // [rsp+40h] [rbp+18h] BYREF

  v14 = 0;
  v4 = MiMapPageInHyperSpaceWorker(a1, &v14, 0x80000000LL);
  memset((void *)(v4 + a2), 0, 4096 - a2);
  LOBYTE(v5) = 2;
  MiUnmapPageInHyperSpaceWorker(v4, v5, 0x80000000LL);
  if ( (a2 & 0x1FF) != 0 )
  {
    v8 = 48 * a1 - 0x220000000000LL;
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v15);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    *(_BYTE *)(v8 + 34) |= 0x10u;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (_DWORD)KiIrqlFlags
    && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
    && CurrentIrql <= 0xFu )
  {
    v6 = v14;
    if ( v14 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v6 = v14;
      v12 = ~(unsigned __int16)(-1LL << (v14 + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v6 = v14;
  }
  result = v6;
  __writecr8(v6);
  return result;
}
