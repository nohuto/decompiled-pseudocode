/*
 * XREFs of VidSchResumeSchedulerForSource @ 0x1C0086E50
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiResumeFlipQueues @ 0x1C0086E6C (VidSchiResumeFlipQueues.c)
 */

__int64 __fastcall VidSchResumeSchedulerForSource(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
    return VidSchiResumeFlipQueues();
  return result;
}
