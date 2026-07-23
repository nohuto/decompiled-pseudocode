/*
 * XREFs of sub_140B01758 @ 0x140B01758
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     ExRegisterCallback @ 0x14025A0B0 (ExRegisterCallback.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 */

__int64 sub_140B01758()
{
  NTSTATUS v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  dword_140C4461C = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\IoExternalDmaUnblock");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ExCreateCallback(&qword_140C44628, &ObjectAttributes, 1u, 1u);
  if ( v0 >= 0 )
  {
    ExRegisterCallback(qword_140C44628, (PCALLBACK_FUNCTION)sub_1406EB440, 0LL);
    byte_140C44630 = 1;
  }
  return (unsigned int)v0;
}
