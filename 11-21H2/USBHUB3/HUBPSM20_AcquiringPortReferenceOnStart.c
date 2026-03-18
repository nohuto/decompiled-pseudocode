/*
 * XREFs of HUBPSM20_AcquiringPortReferenceOnStart @ 0x1C0010950
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_AcquirePortPowerReference @ 0x1C000FA08 (HUBMUX_AcquirePortPowerReference.c)
 */

__int64 __fastcall HUBPSM20_AcquiringPortReferenceOnStart(__int64 a1)
{
  HUBMUX_AcquirePortPowerReference(*(volatile signed __int32 **)(a1 + 960));
  return 3013LL;
}
