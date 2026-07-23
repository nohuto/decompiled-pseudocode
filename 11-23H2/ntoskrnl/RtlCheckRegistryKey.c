/*
 * XREFs of RtlCheckRegistryKey @ 0x1407E5680
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140369230 (RtlCheckPortableOperatingSystem.c)
 *     DifRtlCheckRegistryKeyWrapper @ 0x1405EB3A0 (DifRtlCheckRegistryKeyWrapper.c)
 *     WheapCommitPolicy @ 0x140A098F8 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1406C61F0 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlCheckRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 0, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}
