/*
 * XREFs of sub_1408082AC @ 0x1408082AC
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_14098F9D0 @ 0x14098F9D0 (sub_14098F9D0.c)
 *     sub_14098FA74 @ 0x14098FA74 (sub_14098FA74.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_14081C590 @ 0x14081C590 (sub_14081C590.c)
 */

__int64 __fastcall sub_1408082AC(int a1, int a2)
{
  __int64 v2; // rdi
  NTSTATUS v3; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  Data = a2;
  KeyHandle = (HANDLE)-1LL;
  v2 = a1;
  DestinationString = 0LL;
  v3 = sub_14081C590(&KeyHandle, 0x2001Fu);
  if ( v3 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, (&off_140C06AB0)[3 * v2]);
    v3 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
  }
  if ( KeyHandle != (HANDLE)-1LL )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
