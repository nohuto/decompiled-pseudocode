/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x140793814
 * Callers:
 *     IoGetDeviceInstanceName @ 0x140321FA8 (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x1407CF8BC (PiDeviceRegistration.c)
 *     IoGetDeviceDirectory @ 0x140955210 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x14095589C (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x140955BA4 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140958520 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x14096DCE4 (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402AF260 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x140793EC8 (IopAllocateUnicodeString.c)
 */

__int64 __fastcall PnpConcatenateUnicodeStrings(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  __int64 result; // rax

  result = IopAllocateUnicodeString(DestinationString, SourceString->Length);
  if ( (int)result >= 0 )
  {
    RtlCopyUnicodeString(DestinationString, SourceString);
    return 0LL;
  }
  return result;
}
