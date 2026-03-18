/*
 * XREFs of ViDifCheckCallbackInterception @ 0x1402D8764
 * Callers:
 *     VfDifCaptureDriverEntry @ 0x1402D8724 (VfDifCaptureDriverEntry.c)
 *     VfDifCaptureIoCallbacks @ 0x1402D8A7C (VfDifCaptureIoCallbacks.c)
 *     IovAttachDeviceToDeviceStack @ 0x140A800C4 (IovAttachDeviceToDeviceStack.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     VfIsRuleClassEnabled @ 0x140A7C590 (VfIsRuleClassEnabled.c)
 *     VfUtilEqualUnicodeString @ 0x140A81CF4 (VfUtilEqualUnicodeString.c)
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
