/*
 * XREFs of MiCreateSystemPageTableTail @ 0x140357600
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 */

__int64 __fastcall MiCreateSystemPageTableTail(__int64 a1)
{
  MiFlushTbList((int *)(*(_QWORD *)(a1 + 168) + 144LL));
  return 0LL;
}
