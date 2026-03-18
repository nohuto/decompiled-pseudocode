/*
 * XREFs of HalpSetProfileSourceInterval @ 0x140507FAC
 * Callers:
 *     HalpSetSystemInformation @ 0x14085ECB0 (HalpSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 HalpSetProfileSourceInterval()
{
  return HalpProfileInterface[3]();
}
