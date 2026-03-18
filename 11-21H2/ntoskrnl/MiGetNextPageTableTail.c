/*
 * XREFs of MiGetNextPageTableTail @ 0x14023E500
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 */

__int64 __fastcall MiGetNextPageTableTail(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
    MiFlushTbList(v1);
  return 0LL;
}
