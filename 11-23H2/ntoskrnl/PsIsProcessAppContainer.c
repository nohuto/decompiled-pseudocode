/*
 * XREFs of PsIsProcessAppContainer @ 0x14077F27C
 * Callers:
 *     NtSetInformationFile @ 0x1402A6E80 (NtSetInformationFile.c)
 *     IopFileObjectRevoked @ 0x1403019D0 (IopFileObjectRevoked.c)
 *     IoRevokeHandlesForProcess @ 0x1405589A0 (IoRevokeHandlesForProcess.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140687240 (NtQuerySystemEnvironmentValueEx.c)
 *     NtWriteFile @ 0x1406B6BD0 (NtWriteFile.c)
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140725270 (NtQueryInformationFile.c)
 *     NtReadFile @ 0x14074C2A0 (NtReadFile.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14077EAD0 (ExpGetSystemFirmwareTableInformation.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14077F2E4 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140A00540 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140232A90 (PsReferencePrimaryTokenWithTag.c)
 *     SeQueryInformationToken @ 0x1407198A0 (SeQueryInformationToken.c)
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
