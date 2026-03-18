/*
 * XREFs of KeIsKernelCetEnabled @ 0x140387454
 * Callers:
 *     PiIsDriverBlocked @ 0x140692F18 (PiIsDriverBlocked.c)
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 *     VslStartSecureProcessor @ 0x1409430BC (VslStartSecureProcessor.c)
 *     KdInitSystem @ 0x140AB2040 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

bool KeIsKernelCetEnabled()
{
  return (_BYTE)KiKernelCetEnabled != 0;
}
