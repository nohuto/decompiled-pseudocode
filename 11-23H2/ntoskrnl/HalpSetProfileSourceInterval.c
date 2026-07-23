/*
 * XREFs of HalpSetProfileSourceInterval @ 0x1405084FC
 * Callers:
 *     HalpSetSystemInformation @ 0x14085EEF0 (HalpSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 HalpSetProfileSourceInterval()
{
  return HalpProfileInterface[3]();
}
