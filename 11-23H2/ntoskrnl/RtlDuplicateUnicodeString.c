/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1407B72A0
 * Callers:
 *     DifRtlDuplicateUnicodeStringWrapper @ 0x1405EBA70 (DifRtlDuplicateUnicodeStringWrapper.c)
 *     MiResolveImageReferences @ 0x1406AE074 (MiResolveImageReferences.c)
 *     NtManageHotPatch @ 0x1407D41C0 (NtManageHotPatch.c)
 *     PiDrvDbRegisterNode @ 0x140811A0C (PiDrvDbRegisterNode.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408133F0 (PiDrvDbQuerySystemPathWin32.c)
 *     PipAddBindingId @ 0x14083821C (PipAddBindingId.c)
 *     PipAddRequestToEdge @ 0x1408383BC (PipAddRequestToEdge.c)
 *     PiGetServiceNameInfo @ 0x1408722A0 (PiGetServiceNameInfo.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140877250 (DrvDbGetObjectDatabaseNode.c)
 *     EtwpCovSampModuleGetName @ 0x1409F2988 (EtwpCovSampModuleGetName.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140A06384 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140A06A3C (ExpCovQueryInformation.c)
 *     ExpCovReadFriendlyName @ 0x140A070DC (ExpCovReadFriendlyName.c)
 *     ExpCovReadRequestBuffer @ 0x140A0716C (ExpCovReadRequestBuffer.c)
 *     ExpCovResetInformation @ 0x140A072E4 (ExpCovResetInformation.c)
 *     MiFindHotPatchRecord @ 0x140A36E2C (MiFindHotPatchRecord.c)
 *     MiGetAllRegisteredPatches @ 0x140A3725C (MiGetAllRegisteredPatches.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140B66550 (PnpEarlyLaunchImageNotificationPreProcess.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x140341240 (RtlValidateUnicodeString.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1407C7260 (ExpAllocateStringRoutine.c)
 *     ExFreePool @ 0x140AAECC0 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlDuplicateUnicodeString(ULONG Flags, PCUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  char v5; // r15
  unsigned __int16 Length; // di
  wchar_t *v7; // rsi
  NTSTATUS result; // eax
  unsigned __int16 v9; // bx
  wchar_t *StringRoutine; // rax

  v5 = Flags;
  Length = 0;
  v7 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || !StringOut || (Flags & 3) == 2 )
    return -1073741811;
  result = RtlValidateUnicodeString(0, StringIn);
  if ( result < 0 )
    return result;
  if ( StringIn )
    Length = StringIn->Length;
  if ( (v5 & 1) != 0 && Length == 0xFFFE )
    return -1073741562;
  if ( (v5 & 1) != 0 )
    v9 = Length + 2;
  else
    v9 = Length;
  if ( (v5 & 2) == 0 && !Length )
    v9 = 0;
  if ( !v9 )
    goto LABEL_20;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v9);
  v7 = StringRoutine;
  if ( StringRoutine )
  {
    if ( Length )
      memmove(StringRoutine, StringIn->Buffer, Length);
    if ( (v5 & 1) != 0 )
      v7[(unsigned __int64)Length >> 1] = 0;
LABEL_20:
    StringOut->MaximumLength = v9;
    StringOut->Length = Length;
    StringOut->Buffer = v7;
    return 0;
  }
  return -1073741801;
}
