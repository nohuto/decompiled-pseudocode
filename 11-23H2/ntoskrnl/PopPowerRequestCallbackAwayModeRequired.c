/*
 * XREFs of PopPowerRequestCallbackAwayModeRequired @ 0x140981530
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAwaymodeLock @ 0x140AA8FD8 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140AA9018 (PopReleaseAwaymodeLock.c)
 */

__int64 __fastcall PopPowerRequestCallbackAwayModeRequired(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  byte_140C3D870 = a3;
  return PopReleaseAwaymodeLock();
}
