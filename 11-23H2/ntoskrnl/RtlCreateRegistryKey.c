/*
 * XREFs of RtlCreateRegistryKey @ 0x1408642F0
 * Callers:
 *     DifRtlCreateRegistryKeyWrapper @ 0x1405EAF50 (DifRtlCreateRegistryKeyWrapper.c)
 *     WheapCommitPolicy @ 0x140A09648 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1406C61C0 (RtlpGetRegistryHandle.c)
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
