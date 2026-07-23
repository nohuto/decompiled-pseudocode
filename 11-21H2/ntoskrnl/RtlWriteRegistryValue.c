/*
 * XREFs of RtlWriteRegistryValue @ 0x1406D76C0
 * Callers:
 *     sub_14057F1F0 @ 0x14057F1F0 (sub_14057F1F0.c)
 *     RtlSetPortableOperatingSystem @ 0x1405E7040 (RtlSetPortableOperatingSystem.c)
 *     sub_14061C4B0 @ 0x14061C4B0 (sub_14061C4B0.c)
 *     sub_140807EA4 @ 0x140807EA4 (sub_140807EA4.c)
 *     sub_140817CD8 @ 0x140817CD8 (sub_140817CD8.c)
 *     sub_140818934 @ 0x140818934 (sub_140818934.c)
 *     sub_1408226C0 @ 0x1408226C0 (sub_1408226C0.c)
 *     sub_140836228 @ 0x140836228 (sub_140836228.c)
 *     sub_1408364C4 @ 0x1408364C4 (sub_1408364C4.c)
 *     sub_1408515A8 @ 0x1408515A8 (sub_1408515A8.c)
 *     sub_140862E50 @ 0x140862E50 (sub_140862E50.c)
 *     sub_1409BA71C @ 0x1409BA71C (sub_1409BA71C.c)
 *     sub_1409F76FC @ 0x1409F76FC (sub_1409F76FC.c)
 *     sub_140A0980C @ 0x140A0980C (sub_140A0980C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_14077FDA0 @ 0x14077FDA0 (sub_14077FDA0.c)
 */

NTSTATUS __stdcall RtlWriteRegistryValue(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
{
  const WCHAR *v7; // rsi
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  KeyHandle = 0LL;
  v7 = ValueName;
  LOBYTE(ValueName) = 1;
  DestinationString = 0LL;
  result = sub_14077FDA0(RelativeTo, Path, ValueName, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, v7);
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, ValueType & 0xFFFFFF, ValueData, ValueLength);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v10;
  }
  return result;
}
