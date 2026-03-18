/*
 * XREFs of MmMapMemoryDumpMdlEx @ 0x140630680
 * Callers:
 *     IopLiveDumpBufferDumpData @ 0x140A9A360 (IopLiveDumpBufferDumpData.c)
 *     PopCreateDumpMdl @ 0x140AA2224 (PopCreateDumpMdl.c)
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x14062FD48 (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdlEx(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 3221225714LL;
  MiMapMemoryDumpMdl(a1, a2, a3, a4);
  return 0LL;
}
