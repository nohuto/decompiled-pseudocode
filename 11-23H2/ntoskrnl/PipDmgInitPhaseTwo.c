/*
 * XREFs of PipDmgInitPhaseTwo @ 0x140811F34
 * Callers:
 *     PiDmaGuardInitialize @ 0x140374DD8 (PiDmaGuardInitialize.c)
 * Callees:
 *     PnpTraceDmaGuardSystemPolicy @ 0x1408640F8 (PnpTraceDmaGuardSystemPolicy.c)
 *     PipDmgInitReadGroupPolicy @ 0x14095B0F0 (PipDmgInitReadGroupPolicy.c)
 *     PipDmgReevaluateQueue @ 0x14096B43C (PipDmgReevaluateQueue.c)
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
