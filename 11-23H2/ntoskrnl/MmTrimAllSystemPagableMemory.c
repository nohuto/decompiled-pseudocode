/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x140635680
 * Callers:
 *     MmShutdownSystem @ 0x140AABFD0 (MmShutdownSystem.c)
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x140635290 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
