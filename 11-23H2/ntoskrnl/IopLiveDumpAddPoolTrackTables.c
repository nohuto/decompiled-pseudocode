/*
 * XREFs of IopLiveDumpAddPoolTrackTables @ 0x140A9A130
 * Callers:
 *     <none>
 * Callees:
 *     ExAddPrivateDataToCrashDump @ 0x140606BBC (ExAddPrivateDataToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpAddPoolTrackTables(__int64 a1, __int64 a2)
{
  return ExAddPrivateDataToCrashDump(a2);
}
