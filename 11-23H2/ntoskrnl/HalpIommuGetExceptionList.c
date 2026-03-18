/*
 * XREFs of HalpIommuGetExceptionList @ 0x1405154B8
 * Callers:
 *     IvtProcessDeviceExceptions @ 0x140A98E94 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     <none>
 */

__int64 *HalpIommuGetExceptionList()
{
  return &HalpIommuExceptionList;
}
