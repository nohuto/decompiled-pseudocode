/*
 * XREFs of CcNotifyWriteBehind @ 0x140536A88
 * Callers:
 *     MiShutdownSystem @ 0x140AABC30 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140AAC90C (MmDuplicateMemory.c)
 * Callees:
 *     CcForEachPartition @ 0x140310BEC (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition(
           (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))CcNotifyWriteBehindHelper,
           2LL,
           0,
           0);
}
