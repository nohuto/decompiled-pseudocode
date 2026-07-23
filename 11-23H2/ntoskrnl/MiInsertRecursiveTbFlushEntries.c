/*
 * XREFs of MiInsertRecursiveTbFlushEntries @ 0x140368338
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x1402126F0 (MiDeleteNonPagedPoolPte.c)
 *     MiInitializeSystemPageTable @ 0x1402E4838 (MiInitializeSystemPageTable.c)
 *     MiFlushValidPteFromTb @ 0x14038CA94 (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x14038F6D8 (MiReplacePfnWithGapMapping.c)
 *     MiWritePteHighLevel @ 0x14064E80C (MiWritePteHighLevel.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 */

unsigned __int64 __fastcall MiInsertRecursiveTbFlushEntries(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 result; // rax

  if ( a2 >= 0 )
  {
    v5 = 1LL;
    v6 = (unsigned int)(a2 + 1);
    do
    {
      a3 = (__int64)(a3 << 25) >> 16;
      result = MiInsertTbFlushEntry(a1, a3, v5, 0);
      v5 <<= 9;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
