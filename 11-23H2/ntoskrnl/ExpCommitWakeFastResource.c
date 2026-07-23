/*
 * XREFs of ExpCommitWakeFastResource @ 0x14041568C
 * Callers:
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x1404163AC (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x14041655C (ExpReleaseDisownedFastResourceShared2.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x1404167A8 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpReleaseFastResourceShared2 @ 0x140416910 (ExpReleaseFastResourceShared2.c)
 * Callees:
 *     KeWakeWaitChain @ 0x140260BD0 (KeWakeWaitChain.c)
 */

__int64 __fastcall ExpCommitWakeFastResource(volatile signed __int32 **a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // r8

  v4 = (2 * (a4 & 1) + 1) | 4;
  if ( (a4 & 2) == 0 )
    v4 = 2 * (a4 & 1) + 1;
  return KeWakeWaitChain(a1, 0, v4);
}
