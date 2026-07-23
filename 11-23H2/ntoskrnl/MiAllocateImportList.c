/*
 * XREFs of MiAllocateImportList @ 0x1407D91B4
 * Callers:
 *     MiCompressImportList @ 0x1407D909C (MiCompressImportList.c)
 *     MiPrepareImportList @ 0x1407D915C (MiPrepareImportList.c)
 *     MiAddEntryToImportList @ 0x140A2B248 (MiAddEntryToImportList.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 */

_QWORD *__fastcall MiAllocateImportList(unsigned __int64 a1)
{
  _QWORD *result; // rax

  if ( a1 > 0x1FFFFFFE )
    return 0LL;
  result = MiAllocatePool(256, (unsigned int)(8 * a1 + 8), 0x54446D4Du);
  if ( result )
    *result = a1;
  return result;
}
