/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x1403CF1A0
 * Callers:
 *     PpmCheckInitProcessors @ 0x140849690 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140849940 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x14099E10C (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14099E20C (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14022475C (PpmCheckCustomRun.c)
 */

void PpmCheckApplyParkConstraints()
{
  PpmCheckCustomRun(4u);
}
