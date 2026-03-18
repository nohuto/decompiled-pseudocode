/*
 * XREFs of CcNotifyWriteBehind @ 0x1405369D8
 * Callers:
 *     MiShutdownSystem @ 0x140AABB70 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140AAC84C (MmDuplicateMemory.c)
 * Callees:
 *     CcForEachPartition @ 0x140310DCC (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition(
           (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))CcNotifyWriteBehindHelper,
           2LL,
           0,
           0);
}
