/*
 * XREFs of PopPowerRequestCallbackAwayModeRequired @ 0x140981730
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAwaymodeLock @ 0x140AA8E48 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140AA8E88 (PopReleaseAwaymodeLock.c)
 */

__int64 __fastcall PopPowerRequestCallbackAwayModeRequired(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  byte_140C3D970 = a3;
  return PopReleaseAwaymodeLock();
}
