/*
 * XREFs of sub_1C00B0AFC @ 0x1C00B0AFC
 * Callers:
 *     sub_1C0078D4C @ 0x1C0078D4C (sub_1C0078D4C.c)
 *     sub_1C00B07A8 @ 0x1C00B07A8 (sub_1C00B07A8.c)
 *     sub_1C00B0A6C @ 0x1C00B0A6C (sub_1C00B0A6C.c)
 * Callees:
 *     sub_1C001AE00 @ 0x1C001AE00 (sub_1C001AE00.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00B0D20 @ 0x1C00B0D20 (sub_1C00B0D20.c)
 */

void *__fastcall sub_1C00B0AFC(__int64 a1, unsigned int a2)
{
  void *v3; // rdi
  void *KeyHandle; // [rsp+20h] [rbp-89h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-81h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-71h] BYREF
  WCHAR SourceString[64]; // [rsp+70h] [rbp-39h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  v3 = (void *)sub_1C00B0D20();
  if ( v3 )
  {
    if ( a2 == -1 )
      sub_1C001AE00(SourceString, 0x80uLL, (__int64)L"Device");
    else
      sub_1C001AE00(SourceString, 0x80uLL, (__int64)L"Device%d", a2);
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = v3;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    ZwClose(v3);
  }
  return KeyHandle;
}
