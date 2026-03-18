/*
 * XREFs of MmIsDriverVerifying @ 0x14020A590
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x14020A54C (ViDifCheckCallbackInterception.c)
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     VfIsVerificationEnabled @ 0x1403B3A60 (VfIsVerificationEnabled.c)
 *     IopWriteFile @ 0x1406B6DD0 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1406E5590 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x1407250E0 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14072FFC0 (IopCloseFile.c)
 *     IopReadFile @ 0x14074C6D0 (IopReadFile.c)
 *     NtLockFile @ 0x1407659A0 (NtLockFile.c)
 *     IopQueryInformation @ 0x1407ABEB0 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x1407B5080 (NtUnlockFile.c)
 *     IopGetBasicInformationFile @ 0x1407D37EC (IopGetBasicInformationFile.c)
 *     VfGetPristineDispatchRoutine @ 0x140ACE1FC (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x140ACE24C (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x140AD3174 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x140AD31C8 (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140AD3BD0 (IovUtilIsVerifiedDeviceStack.c)
 * Callees:
 *     VfDriverIsKernelImageAddress @ 0x140ACB714 (VfDriverIsKernelImageAddress.c)
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
