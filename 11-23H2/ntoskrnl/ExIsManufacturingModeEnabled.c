/*
 * XREFs of ExIsManufacturingModeEnabled @ 0x14068F4B0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140B3CA80 (IopInitializeSystemDrivers.c)
 * Callees:
 *     <none>
 */

char ExIsManufacturingModeEnabled()
{
  return ExpManufacturingInformation & 1;
}
