/*
 * XREFs of HalpIommuGetExceptionList @ 0x140515A08
 * Callers:
 *     IvtProcessDeviceExceptions @ 0x140A98D04 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     <none>
 */

__int64 *HalpIommuGetExceptionList()
{
  return &HalpIommuExceptionList;
}
