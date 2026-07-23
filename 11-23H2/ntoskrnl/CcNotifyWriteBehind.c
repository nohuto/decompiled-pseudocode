/*
 * XREFs of CcNotifyWriteBehind @ 0x140536F28
 * Callers:
 *     MiShutdownSystem @ 0x140AAB9E0 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140AAC6BC (MmDuplicateMemory.c)
 * Callees:
 *     CcForEachPartition @ 0x14031105C (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition(
           (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))CcNotifyWriteBehindHelper,
           2LL,
           0,
           0);
}
