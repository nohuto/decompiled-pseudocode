/*
 * XREFs of MiResumeFromHibernate @ 0x14062881C
 * Callers:
 *     MmDuplicateMemory @ 0x140AAC84C (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x14062940C (MiIterateOverPartitions.c)
 */

__int64 __fastcall MiResumeFromHibernate(unsigned int a1)
{
  return MiIterateOverPartitions(MiResumeMarkPageLists, a1);
}
