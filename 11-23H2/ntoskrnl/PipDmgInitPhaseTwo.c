/*
 * XREFs of PipDmgInitPhaseTwo @ 0x140812204
 * Callers:
 *     PiDmaGuardInitialize @ 0x140374F78 (PiDmaGuardInitialize.c)
 * Callees:
 *     PnpTraceDmaGuardSystemPolicy @ 0x140864338 (PnpTraceDmaGuardSystemPolicy.c)
 *     PipDmgInitReadGroupPolicy @ 0x14095B2F0 (PipDmgInitReadGroupPolicy.c)
 *     PipDmgReevaluateQueue @ 0x14096B63C (PipDmgReevaluateQueue.c)
 */

__int64 PipDmgInitPhaseTwo()
{
  int GroupPolicy; // eax

  if ( PipDmaGuardPolicy )
  {
    GroupPolicy = PipDmgInitReadGroupPolicy();
    if ( !GroupPolicy )
      GroupPolicy = 2;
    PipDmaGuardPolicy = GroupPolicy;
    PipDmgReevaluateQueue();
  }
  PnpTraceDmaGuardSystemPolicy();
  return 0LL;
}
