/*
 * XREFs of RtlCreateRegistryKey @ 0x1408609D0
 * Callers:
 *     sub_14061AE20 @ 0x14061AE20 (sub_14061AE20.c)
 *     sub_140A0980C @ 0x140A0980C (sub_140A0980C.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077FDA0 @ 0x14077FDA0 (sub_14077FDA0.c)
 */

NTSTATUS __stdcall RtlCreateRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  result = sub_14077FDA0(RelativeTo, Path, 1, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}
