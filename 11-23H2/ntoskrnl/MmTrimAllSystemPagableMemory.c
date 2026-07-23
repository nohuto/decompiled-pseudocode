/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x140635BD0
 * Callers:
 *     MmShutdownSystem @ 0x140AABE40 (MmShutdownSystem.c)
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x1406357E0 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
