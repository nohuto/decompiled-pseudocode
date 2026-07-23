/*
 * XREFs of MiSystemInSingleProcessorMode @ 0x14061C8E8
 * Callers:
 *     MmAddRangeToCrashDump @ 0x140630690 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x140630C2C (MmRemoveSystemCacheFromDump.c)
 * Callees:
 *     <none>
 */

bool MiSystemInSingleProcessorMode()
{
  return !(_DWORD)InitializationPhase || (KiBugCheckActive & 3) != 0 || qword_140C67E88 == (_QWORD)KeGetCurrentThread();
}
