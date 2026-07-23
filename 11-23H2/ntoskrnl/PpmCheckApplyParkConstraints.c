/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x14039323C
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x14082C9C0 (PpmReapplyPerfPolicy.c)
 *     PpmCheckInitProcessors @ 0x14082E5C4 (PpmCheckInitProcessors.c)
 *     PpmParkApplyForcedMask @ 0x14099A054 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14099A154 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14032B8CC (PpmCheckCustomRun.c)
 */

void PpmCheckApplyParkConstraints()
{
  PpmCheckCustomRun(4u);
}
