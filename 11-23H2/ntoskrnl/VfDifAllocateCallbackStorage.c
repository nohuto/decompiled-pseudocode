/*
 * XREFs of VfDifAllocateCallbackStorage @ 0x1405CF23C
 * Callers:
 *     IovAttachDeviceToDeviceStack @ 0x140AC0F94 (IovAttachDeviceToDeviceStack.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 VfDifAllocateCallbackStorage()
{
  return ExAllocatePool2(64LL, 256LL, 1229940310LL);
}
