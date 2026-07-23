/*
 * XREFs of MiDecrementControlAreaCount @ 0x140219AA0
 * Callers:
 *     MiDeleteControlArea @ 0x1402199D0 (MiDeleteControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x140339F08 (MiCheckForControlAreaDeletion.c)
 *     MiDrainCrossPartitionUsage @ 0x140659F74 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 */

int __fastcall MiDecrementControlAreaCount(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v2; // rax

  _InterlockedDecrement64(a2);
  v2 = *(_QWORD *)(a1 + 1416);
  if ( !v2 )
  {
    v2 = *(_QWORD *)(a1 + 1424);
    if ( !v2 )
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 2416), 0, 0);
  }
  return v2;
}
