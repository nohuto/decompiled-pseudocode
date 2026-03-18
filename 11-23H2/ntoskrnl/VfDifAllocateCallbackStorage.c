/*
 * XREFs of VfDifAllocateCallbackStorage @ 0x1405CECCC
 * Callers:
 *     IovAttachDeviceToDeviceStack @ 0x140AC0FA4 (IovAttachDeviceToDeviceStack.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 VfDifAllocateCallbackStorage()
{
  return ExAllocatePool2(64LL, 256LL, 1229940310LL);
}
