/*
 * XREFs of MiAttachSessionGlobal @ 0x14033DD2C
 * Callers:
 *     MiAttachWorkingSet @ 0x14033DC74 (MiAttachWorkingSet.c)
 *     MiAttachToSessionForBaseImage @ 0x1406420E4 (MiAttachToSessionForBaseImage.c)
 *     MiActOnPatchInAllSessions @ 0x140A348C0 (MiActOnPatchInAllSessions.c)
 * Callees:
 *     KeFlushTb @ 0x140279C00 (KeFlushTb.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiCompareTbFlushTimeStamp @ 0x14033DDE8 (MiCompareTbFlushTimeStamp.c)
 *     MiAttachSingleProcessThreadToSession @ 0x14033DE5C (MiAttachSingleProcessThreadToSession.c)
 */

char __fastcall MiAttachSessionGlobal(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  bool v5; // zf
  $C71981A45BEB2B45F82C232A7085991E *v6; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  BYTE1(CurrentThread[1].Queue) |= 0x80u;
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  MiAttachSingleProcessThreadToSession(a1);
  LOBYTE(v6) = MiCompareTbFlushTimeStamp(a2);
  if ( (_BYTE)v6 )
    LOBYTE(v6) = KeFlushTb(1u, 0);
  --CurrentThread->SpecialApcDisable;
  BYTE1(CurrentThread[1].Queue) &= ~0x80u;
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 )
  {
    v6 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v6->ApcState.ApcListHead[0].Flink != v6 )
      LOBYTE(v6) = KiCheckForKernelApcDelivery();
  }
  return (char)v6;
}
