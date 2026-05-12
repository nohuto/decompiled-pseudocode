/*
 * XREFs of sub_1C00B0D20 @ 0x1C00B0D20
 * Callers:
 *     sub_1C00B0578 @ 0x1C00B0578 (sub_1C00B0578.c)
 *     sub_1C00B0690 @ 0x1C00B0690 (sub_1C00B0690.c)
 *     sub_1C00B0838 @ 0x1C00B0838 (sub_1C00B0838.c)
 *     sub_1C00B0950 @ 0x1C00B0950 (sub_1C00B0950.c)
 *     sub_1C00B0AFC @ 0x1C00B0AFC (sub_1C00B0AFC.c)
 *     sub_1C00B0CA4 @ 0x1C00B0CA4 (sub_1C00B0CA4.c)
 * Callees:
 *     <none>
 */

void *__fastcall sub_1C00B0D20(struct _UNICODE_STRING *a1)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+70h] [rbp+10h] BYREF
  void *v5; // [rsp+78h] [rbp+18h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  v5 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return KeyHandle;
  RtlInitUnicodeString(&DestinationString, L"Parameters");
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v5, 0x20019u, &ObjectAttributes) < 0 )
    return KeyHandle;
  ZwClose(KeyHandle);
  return v5;
}
