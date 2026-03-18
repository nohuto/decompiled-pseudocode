/*
 * XREFs of MmIsDriverVerifying @ 0x14020A570
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x14020A524 (ViDifCheckCallbackInterception.c)
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     VfIsVerificationEnabled @ 0x1403B40F0 (VfIsVerificationEnabled.c)
 *     IopWriteFile @ 0x1406B6DD0 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140725070 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     IopCloseFile @ 0x140730000 (IopCloseFile.c)
 *     IopReadFile @ 0x14074C1C0 (IopReadFile.c)
 *     NtLockFile @ 0x140765490 (NtLockFile.c)
 *     IopQueryInformation @ 0x1407AB900 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x1407B4AD0 (NtUnlockFile.c)
 *     IopGetBasicInformationFile @ 0x1407D326C (IopGetBasicInformationFile.c)
 *     VfGetPristineDispatchRoutine @ 0x140ACD22C (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x140ACD27C (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x140AD21A4 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x140AD21F8 (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140AD2C00 (IovUtilIsVerifiedDeviceStack.c)
 * Callees:
 *     VfDriverIsKernelImageAddress @ 0x140ACA744 (VfDriverIsKernelImageAddress.c)
 */

LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  __int64 v1; // rdx
  struct _DRIVER_OBJECT *v2; // r8
  _DWORD *DriverSection; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = DriverObject;
  if ( ((VfRuleClasses & 0x400000) == 0 || (unsigned int)VfDriverIsKernelImageAddress(retaddr, v1, DriverObject))
    && (DriverSection = v2->DriverSection) != 0LL )
  {
    return (DriverSection[26] >> 25) & 1;
  }
  else
  {
    return 0;
  }
}
