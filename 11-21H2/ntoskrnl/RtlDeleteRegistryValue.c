/*
 * XREFs of RtlDeleteRegistryValue @ 0x1406E8410
 * Callers:
 *     sub_14061B190 @ 0x14061B190 (sub_14061B190.c)
 *     sub_140807EA4 @ 0x140807EA4 (sub_140807EA4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_14077FDA0 @ 0x14077FDA0 (sub_14077FDA0.c)
 */

NTSTATUS __stdcall RtlDeleteRegistryValue(ULONG RelativeTo, PCWSTR Path, PCWSTR ValueName)
{
  const WCHAR *v3; // rbx
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  v3 = ValueName;
  LOBYTE(ValueName) = 1;
  DestinationString = 0LL;
  result = sub_14077FDA0(RelativeTo, Path, ValueName, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, v3);
    v6 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v6;
  }
  return result;
}
