/*
 * XREFs of sub_14081E1F0 @ 0x14081E1F0
 * Callers:
 *     <none>
 * Callees:
 *     ExRegisterCallback @ 0x14025A0B0 (ExRegisterCallback.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403B8198 @ 0x1403B8198 (sub_1403B8198.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 *     sub_14081E700 @ 0x14081E700 (sub_14081E700.c)
 *     sub_140A53294 @ 0x140A53294 (sub_140A53294.c)
 */

NTSTATUS __fastcall sub_14081E1F0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+70h] [rbp+10h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
  LOBYTE(v4) = 1;
  sub_140A53294(v4);
  sub_14081E700();
  ObjectAttributes.RootDirectory = 0LL;
  CallbackObject = 0LL;
  *a2 = &qword_140002150;
  qword_140C54C18 = a1;
  off_140C01C10 = sub_140A523B0;
  ObjectAttributes.Attributes = 80;
  qword_140C02040 = (__int64)sub_14052AC60;
  qword_140C02048 = (__int64)sub_14052AD10;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
  if ( result >= 0 )
  {
    ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)sub_1403B60E0, 0LL);
    v7 = sub_1403B8198(v6);
    if ( v7 )
      qword_140C4BFE8 = v7 + 12;
    return 0;
  }
  return result;
}
