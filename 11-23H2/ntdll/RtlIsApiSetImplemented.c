/*
 * XREFs of RtlIsApiSetImplemented @ 0x18000C270
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiString @ 0x18000C230 (RtlInitAnsiString.c)
 *     ApiSetQuerySchemaInfo @ 0x18000C31C (ApiSetQuerySchemaInfo.c)
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024EF0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __cdecl RtlIsApiSetImplemented(PCSTR ApiSetName)
{
  char v1; // si
  char v2; // di
  int v3; // ebx
  int v4; // eax
  _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-20h] BYREF
  _STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  char v8; // [rsp+68h] [rbp+28h] BYREF
  char v9; // [rsp+70h] [rbp+30h] BYREF

  v1 = 0;
  v2 = 0;
  v8 = 0;
  v9 = 0;
  RtlInitAnsiString(&DestinationString, ApiSetName);
  UnicodeString = 0LL;
  v3 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  if ( v3 >= 0 )
  {
    v4 = ApiSetQuerySchemaInfo(NtCurrentPeb()->ApiSetMap, &UnicodeString, &v8, &v9);
    v1 = v8;
    v3 = v4;
    v2 = v9;
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v3 >= 0 && (!v1 || !v2) )
    return -1073741275;
  return v3;
}
