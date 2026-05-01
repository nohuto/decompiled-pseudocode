/*
 * XREFs of sub_18000A6F4 @ 0x18000A6F4
 * Callers:
 *     sub_1800017B0 @ 0x1800017B0 (sub_1800017B0.c)
 * Callees:
 *     <none>
 */

__int64 *sub_18000A6F4()
{
  qword_180032C48 = 0LL;
  InitializeSRWLock(&stru_180032C50);
  InitializeSRWLock(&SRWLock);
  return &qword_180032C48;
}
