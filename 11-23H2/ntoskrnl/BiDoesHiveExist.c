/*
 * XREFs of BiDoesHiveExist @ 0x140808100
 * Callers:
 *     BiLoadHive @ 0x140807354 (BiLoadHive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x14041B890 (ZwQueryAttributesFile.c)
 */

bool __fastcall BiDoesHiveExist(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-9h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+60h] [rbp+27h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  memset(&FileInformation, 0, sizeof(FileInformation));
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 12));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwQueryAttributesFile(&ObjectAttributes, &FileInformation) >= 0 && (FileInformation.FileAttributes & 0x10) == 0;
}
