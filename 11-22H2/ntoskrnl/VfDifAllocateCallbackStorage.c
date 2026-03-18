/*
 * XREFs of VfDifAllocateCallbackStorage @ 0x1405CED5C
 * Callers:
 *     IovAttachDeviceToDeviceStack @ 0x140AC1FA4 (IovAttachDeviceToDeviceStack.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 VfDifAllocateCallbackStorage()
{
  return ExAllocatePool2(64LL, 256LL, 1229940310LL);
}
