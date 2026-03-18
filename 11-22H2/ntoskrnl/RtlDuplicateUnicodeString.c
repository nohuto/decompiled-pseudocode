/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1407B7570
 * Callers:
 *     DifRtlDuplicateUnicodeStringWrapper @ 0x1405EB590 (DifRtlDuplicateUnicodeStringWrapper.c)
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 *     NtManageHotPatch @ 0x1407D4470 (NtManageHotPatch.c)
 *     PiDrvDbRegisterNode @ 0x140813CBC (PiDrvDbRegisterNode.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408156A0 (PiDrvDbQuerySystemPathWin32.c)
 *     PipAddBindingId @ 0x140839A6C (PipAddBindingId.c)
 *     PipAddRequestToEdge @ 0x140839C0C (PipAddRequestToEdge.c)
 *     PiGetServiceNameInfo @ 0x140872530 (PiGetServiceNameInfo.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1408774E0 (DrvDbGetObjectDatabaseNode.c)
 *     EtwpCovSampModuleGetName @ 0x1409F27A8 (EtwpCovSampModuleGetName.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140A061A4 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140A0685C (ExpCovQueryInformation.c)
 *     ExpCovReadFriendlyName @ 0x140A06EFC (ExpCovReadFriendlyName.c)
 *     ExpCovReadRequestBuffer @ 0x140A06F8C (ExpCovReadRequestBuffer.c)
 *     ExpCovResetInformation @ 0x140A07104 (ExpCovResetInformation.c)
 *     MiFindHotPatchRecord @ 0x140A36BEC (MiFindHotPatchRecord.c)
 *     MiGetAllRegisteredPatches @ 0x140A3701C (MiGetAllRegisteredPatches.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140B678F0 (PnpEarlyLaunchImageNotificationPreProcess.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x140340AC0 (RtlValidateUnicodeString.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1407C7520 (ExpAllocateStringRoutine.c)
 *     ExFreePool @ 0x140AAFCC0 (ExFreePool.c)
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
