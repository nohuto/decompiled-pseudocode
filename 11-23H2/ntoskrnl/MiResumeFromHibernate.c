/*
 * XREFs of MiResumeFromHibernate @ 0x140628D6C
 * Callers:
 *     MmDuplicateMemory @ 0x140AAC6BC (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x14062995C (MiIterateOverPartitions.c)
 */

__int64 __fastcall MiResumeFromHibernate(unsigned int a1)
{
  return MiIterateOverPartitions(MiResumeMarkPageLists, a1);
}
