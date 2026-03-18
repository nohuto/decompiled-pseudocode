/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x140793624
 * Callers:
 *     IoGetDeviceInstanceName @ 0x140321D18 (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x1407CF5EC (PiDeviceRegistration.c)
 *     IoGetDeviceDirectory @ 0x140955010 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x14095569C (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x1409559A4 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140958320 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x14096DAE4 (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402AEFD0 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x140793CD8 (IopAllocateUnicodeString.c)
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
