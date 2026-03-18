/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x14039305C
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x14082C6C0 (PpmReapplyPerfPolicy.c)
 *     PpmCheckInitProcessors @ 0x14082E2C4 (PpmCheckInitProcessors.c)
 *     PpmParkApplyForcedMask @ 0x140999E54 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140999F54 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14032B63C (PpmCheckCustomRun.c)
 */

void PpmCheckApplyParkConstraints()
{
  PpmCheckCustomRun(4u);
}
