/*
 * XREFs of RtlCreateRegistryKey @ 0x140864530
 * Callers:
 *     DifRtlCreateRegistryKeyWrapper @ 0x1405EB4C0 (DifRtlCreateRegistryKeyWrapper.c)
 *     WheapCommitPolicy @ 0x140A098F8 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1406C61F0 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlCreateRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}
