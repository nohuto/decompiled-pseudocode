/*
 * XREFs of MmMapMemoryDumpMdl @ 0x1406306B0
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x14062FDB8 (MiMapMemoryDumpMdl.c)
 */

char __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  return MiMapMemoryDumpMdl(qword_140C67FB0 << 25 >> 16, a2, a1, 0);
}
