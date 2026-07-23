/*
 * XREFs of ViDifCheckCallbackInterception @ 0x14020A524
 * Callers:
 *     VfDifCaptureIoCallbacks @ 0x140209F20 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x140209F44 (VfDifCaptureDriverEntry.c)
 *     IovAttachDeviceToDeviceStack @ 0x140AC0F94 (IovAttachDeviceToDeviceStack.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14020A570 (MmIsDriverVerifying.c)
 *     VfIsRuleClassEnabled @ 0x140ABD440 (VfIsRuleClassEnabled.c)
 *     VfUtilEqualUnicodeString @ 0x140AC268C (VfUtilEqualUnicodeString.c)
 */

bool __fastcall ViDifCheckCallbackInterception(struct _DRIVER_OBJECT *a1)
{
  __int64 p_ServiceKeyName; // rbx

  p_ServiceKeyName = (__int64)&a1->DriverExtension->ServiceKeyName;
  return !KernelVerifier
      && (VfDifRunningWithoutReboot || MmIsDriverVerifying(a1))
      && VfXdvEnabled
      && (unsigned __int8)VfIsRuleClassEnabled(35LL)
      && !(unsigned int)VfUtilEqualUnicodeString(&VfRdbssServiceName, p_ServiceKeyName)
      && !(unsigned int)VfUtilEqualUnicodeString(&VfMupServiceName, p_ServiceKeyName)
      && !(unsigned int)VfUtilEqualUnicodeString(&VfCscServiceName, p_ServiceKeyName)
      && !(unsigned int)VfUtilEqualUnicodeString(&VfAmdkmpagServiceName, p_ServiceKeyName);
}
