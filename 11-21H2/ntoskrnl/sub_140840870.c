/*
 * XREFs of sub_140840870 @ 0x140840870
 * Callers:
 *     sub_14083F704 @ 0x14083F704 (sub_14083F704.c)
 *     sub_14083F75C @ 0x14083F75C (sub_14083F75C.c)
 *     sub_14083F908 @ 0x14083F908 (sub_14083F908.c)
 *     sub_14083FC00 @ 0x14083FC00 (sub_14083FC00.c)
 *     sub_14083FE80 @ 0x14083FE80 (sub_14083FE80.c)
 *     sub_14084028C @ 0x14084028C (sub_14084028C.c)
 *     sub_1409DAD00 @ 0x1409DAD00 (sub_1409DAD00.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall sub_140840870(PCWSTR SourceString, void *a2, HANDLE *a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( !SourceString || !a3 )
    return -1073741811;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 0xF003Fu, &ObjectAttributes);
}
