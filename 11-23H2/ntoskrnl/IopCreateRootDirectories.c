/*
 * XREFs of IopCreateRootDirectories @ 0x140B6CA78
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ObCloseHandle @ 0x14076B890 (ObCloseHandle.c)
 *     NtCreateDirectoryObject @ 0x1407F15F0 (NtCreateDirectoryObject.c)
 *     IopCreateUmdfDirectory @ 0x140B6CB68 (IopCreateUmdfDirectory.c)
 */

bool IopCreateRootDirectories()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  __int64 v2; // [rsp+30h] [rbp-30h]
  __int64 v3; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v5; // [rsp+48h] [rbp-18h]
  int v6; // [rsp+4Ch] [rbp-14h]
  __int128 v7; // [rsp+50h] [rbp-10h]
  HANDLE Handle; // [rsp+70h] [rbp+10h] BYREF

  Handle = 0LL;
  v6 = 0;
  v2 = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Driver");
  v3 = 0LL;
  p_DestinationString = &DestinationString;
  v5 = 528;
  v7 = 0LL;
  if ( (int)NtCreateDirectoryObject((__int64)&Handle) < 0 )
    return 0;
  ObCloseHandle(Handle, 0);
  RtlInitUnicodeString(&DestinationString, L"\\FileSystem");
  if ( (int)NtCreateDirectoryObject((__int64)&Handle) < 0 )
    return 0;
  ObCloseHandle(Handle, 0);
  RtlInitUnicodeString(&DestinationString, L"\\FileSystem\\Filters");
  if ( (int)NtCreateDirectoryObject((__int64)&Handle) < 0 )
    return 0;
  ObCloseHandle(Handle, 0);
  return (int)IopCreateUmdfDirectory() >= 0;
}
