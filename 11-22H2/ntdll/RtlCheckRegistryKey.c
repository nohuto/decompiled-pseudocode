/*
 * XREFs of RtlCheckRegistryKey @ 0x180008E10
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x1800883B0 (RtlCheckPortableOperatingSystem.c)
 * Callees:
 *     RtlpGetRegistryHandle @ 0x18000AD18 (RtlpGetRegistryHandle.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 */

NTSTATUS __cdecl RtlCheckRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  result = RtlpGetRegistryHandle(RelativeTo, Path, 0LL, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      NtClose(Handle);
    return 0;
  }
  return result;
}
