/*
 * XREFs of KeIsKernelCetEnabled @ 0x140388434
 * Callers:
 *     PiIsDriverBlocked @ 0x140692F18 (PiIsDriverBlocked.c)
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 *     VslStartSecureProcessor @ 0x14094320C (VslStartSecureProcessor.c)
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

bool KeIsKernelCetEnabled()
{
  return (_BYTE)KiKernelCetEnabled != 0;
}
