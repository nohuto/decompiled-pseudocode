/*
 * XREFs of KiClearSystemPriority @ 0x140345AF0
 * Callers:
 *     PspRevertContainerImpersonation @ 0x140259D1C (PspRevertContainerImpersonation.c)
 *     MiZeroInParallel @ 0x140304230 (MiZeroInParallel.c)
 *     KeDisconnectInterrupt @ 0x14031F1B8 (KeDisconnectInterrupt.c)
 *     KeConnectInterrupt @ 0x140320874 (KeConnectInterrupt.c)
 *     PpmCheckCustomRun @ 0x14032B45C (PpmCheckCustomRun.c)
 *     PpmReleaseLock @ 0x14032C0A0 (PpmReleaseLock.c)
 *     PpmTryAcquireLock @ 0x14036D3A8 (PpmTryAcquireLock.c)
 *     KeClearSystemPriorityThread @ 0x140576D0C (KeClearSystemPriorityThread.c)
 *     MiDemoteSlabEntries @ 0x140656824 (MiDemoteSlabEntries.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x1402B05A0 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

char __fastcall KiClearSystemPriority(ULONG_PTR BugCheckParameter1, char *a2)
{
  unsigned __int8 CurrentIrql; // si
  char v5; // dl
  char v6; // al
  char v7; // al
  unsigned int v8; // eax
  char v9; // dl
  char v10; // cl
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rax
  int v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v13) = 4;
    if ( CurrentIrql != 2 )
      v13 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v13;
  }
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v14);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  if ( a2 )
  {
    v5 = *a2;
  }
  else
  {
    v5 = *(_BYTE *)(BugCheckParameter1 + 795);
    *(_BYTE *)(BugCheckParameter1 + 795) = 0;
  }
  v6 = *(_BYTE *)(v5 + BugCheckParameter1 + 824);
  if ( !v6 )
    KeBugCheckEx(0x157u, BugCheckParameter1, v5, 2uLL, 0LL);
  v7 = v6 - 1;
  *(_BYTE *)(v5 + BugCheckParameter1 + 824) = v7;
  if ( !v7 )
  {
    v8 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v5);
    *(_DWORD *)(BugCheckParameter1 + 856) = v8;
    if ( v8 < 1 << v5 )
    {
      v9 = *(_BYTE *)(BugCheckParameter1 + 195);
      if ( v9 <= 31 )
      {
        v10 = *(_BYTE *)(BugCheckParameter1 + 563)
            + (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF)
            + (*(_BYTE *)(BugCheckParameter1 + 564) >> 4);
        if ( v10 < v9 )
          KiSetPriorityThread(BugCheckParameter1, (unsigned __int64)&v15, v10);
      }
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  return KiProcessDeferredReadyList((__int64)KeGetCurrentPrcb(), &v15, CurrentIrql);
}
