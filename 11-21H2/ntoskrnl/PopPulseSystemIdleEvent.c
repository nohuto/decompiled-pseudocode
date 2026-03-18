/*
 * XREFs of PopPulseSystemIdleEvent @ 0x1406E8E9C
 * Callers:
 *     PopUpdateLastUserInputTime @ 0x140752B6C (PopUpdateLastUserInputTime.c)
 *     PopSystemIdleWorker @ 0x140752F30 (PopSystemIdleWorker.c)
 *     PopUpdateSystemIdleContext @ 0x140819D40 (PopUpdateSystemIdleContext.c)
 *     PopInitializeSystemIdleDetection @ 0x140B302E4 (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPulseSystemIdleEvent(unsigned int a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( a1 > 3 )
    return (unsigned int)-1073741811;
  else
    *((_QWORD *)&unk_140C09610 + 7 * (int)a1) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  return v1;
}
