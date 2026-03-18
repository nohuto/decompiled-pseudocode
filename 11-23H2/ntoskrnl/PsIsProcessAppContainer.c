/*
 * XREFs of PsIsProcessAppContainer @ 0x14077F08C
 * Callers:
 *     NtSetInformationFile @ 0x1402A6BF0 (NtSetInformationFile.c)
 *     IopFileObjectRevoked @ 0x140301740 (IopFileObjectRevoked.c)
 *     IoRevokeHandlesForProcess @ 0x1405582E0 (IoRevokeHandlesForProcess.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140687240 (NtQuerySystemEnvironmentValueEx.c)
 *     NtWriteFile @ 0x1406B6A20 (NtWriteFile.c)
 *     IopSynchronousServiceTail @ 0x1406E3E90 (IopSynchronousServiceTail.c)
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140725070 (NtQueryInformationFile.c)
 *     NtReadFile @ 0x14074C0B0 (NtReadFile.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14077E8E0 (ExpGetSystemFirmwareTableInformation.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14077F0F4 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140A002B0 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329C0 (PsReferencePrimaryTokenWithTag.c)
 *     SeQueryInformationToken @ 0x1407196A0 (SeQueryInformationToken.c)
 */

bool __fastcall PsIsProcessAppContainer(__int64 a1)
{
  char v1; // si
  void *v2; // rdi
  NTSTATUS v3; // ebx
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  LODWORD(TokenInformation) = 0;
  v2 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  v3 = SeQueryInformationToken(v2, TokenIsAppContainer, &TokenInformation);
  ObfDereferenceObject(v2);
  if ( v3 >= 0 )
    return (_DWORD)TokenInformation != 0;
  return v1;
}
