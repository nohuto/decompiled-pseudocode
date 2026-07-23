/*
 * XREFs of MmMapMemoryDumpMdlEx @ 0x140630BD0
 * Callers:
 *     IopLiveDumpBufferDumpData @ 0x140A9A1D0 (IopLiveDumpBufferDumpData.c)
 *     PopCreateDumpMdl @ 0x140AA2094 (PopCreateDumpMdl.c)
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x140630298 (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdlEx(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 3221225714LL;
  MiMapMemoryDumpMdl(a1, a2, a3, a4);
  return 0LL;
}
