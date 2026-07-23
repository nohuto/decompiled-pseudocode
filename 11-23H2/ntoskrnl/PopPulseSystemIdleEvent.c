/*
 * XREFs of PopPulseSystemIdleEvent @ 0x1407A872C
 * Callers:
 *     PopSystemIdleWorker @ 0x1407A6F90 (PopSystemIdleWorker.c)
 *     PopUpdateLastUserInputTime @ 0x1407A7520 (PopUpdateLastUserInputTime.c)
 *     PopUpdateSystemIdleContext @ 0x140824C78 (PopUpdateSystemIdleContext.c)
 *     PopInitializeSystemIdleDetection @ 0x140B74CD4 (PopInitializeSystemIdleDetection.c)
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
    *((_QWORD *)&unk_140C09820 + 7 * (int)a1) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  return v1;
}
