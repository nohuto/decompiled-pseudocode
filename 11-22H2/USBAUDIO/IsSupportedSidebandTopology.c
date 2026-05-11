/*
 * XREFs of IsSupportedSidebandTopology @ 0x1C000BD70
 * Callers:
 *     IsSidebandSupported @ 0x1C002B038 (IsSidebandSupported.c)
 * Callees:
 *     ?IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z @ 0x1C0010B94 (-IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall IsSupportedSidebandTopology(struct _KSFILTER_DESCRIPTOR *a1)
{
  return CSidebandDevice::IsSupportedSidebandTopology(a1);
}
