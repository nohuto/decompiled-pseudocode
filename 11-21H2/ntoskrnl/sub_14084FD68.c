/*
 * XREFs of sub_14084FD68 @ 0x14084FD68
 * Callers:
 *     sub_1406AD6BC @ 0x1406AD6BC (sub_1406AD6BC.c)
 *     sub_14084FCD4 @ 0x14084FCD4 (sub_14084FCD4.c)
 *     sub_140B23B40 @ 0x140B23B40 (sub_140B23B40.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall sub_14084FD68(HANDLE KeyHandle, const WCHAR *a2, __int64 a3, void *a4, ULONG DataSize)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( KeyHandle )
    return ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, a4, DataSize);
  else
    return -1073741811;
}
