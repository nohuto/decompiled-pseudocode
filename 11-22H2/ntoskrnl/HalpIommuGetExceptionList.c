/*
 * XREFs of HalpIommuGetExceptionList @ 0x140515578
 * Callers:
 *     IvtProcessDeviceExceptions @ 0x140A98F54 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     <none>
 */

__int64 *HalpIommuGetExceptionList()
{
  return &HalpIommuExceptionList;
}
