/*
 * XREFs of MmMapMemoryDumpMdl @ 0x140593650
 * Callers:
 *     <none>
 * Callees:
 *     sub_14038C4CC @ 0x14038C4CC (sub_14038C4CC.c)
 */

char __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  return sub_14038C4CC(qword_140C52A30 << 25 >> 16, a2, a1, 0);
}
