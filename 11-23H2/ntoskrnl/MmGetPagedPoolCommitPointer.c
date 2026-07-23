/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x14036F388
 * Callers:
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_140C69928;
}
