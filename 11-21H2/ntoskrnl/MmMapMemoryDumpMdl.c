/*
 * XREFs of MmMapMemoryDumpMdl @ 0x140593650
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x14038C4CC (MiMapMemoryDumpMdl.c)
 */

char __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  return MiMapMemoryDumpMdl(qword_140C52A30 << 25 >> 16, a2, a1, 0);
}
