/*
 * XREFs of MiSystemInSingleProcessorMode @ 0x14061C398
 * Callers:
 *     MmAddRangeToCrashDump @ 0x140630140 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1406306DC (MmRemoveSystemCacheFromDump.c)
 * Callees:
 *     <none>
 */

bool MiSystemInSingleProcessorMode()
{
  return !(_DWORD)InitializationPhase || (KiBugCheckActive & 3) != 0 || qword_140C67E88 == (_QWORD)KeGetCurrentThread();
}
