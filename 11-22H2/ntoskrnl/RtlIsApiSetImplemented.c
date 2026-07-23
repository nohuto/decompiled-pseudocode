/*
 * XREFs of RtlIsApiSetImplemented @ 0x1407D45E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiString @ 0x1402F6C50 (RtlInitAnsiString.c)
 *     ApiSetQuerySchemaInfo @ 0x14035EB84 (ApiSetQuerySchemaInfo.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140774110 (RtlAnsiStringToUnicodeString.c)
 *     PsQueryCurrentApiSetSchema @ 0x1407D468C (PsQueryCurrentApiSetSchema.c)
 */

NTSTATUS __cdecl RtlIsApiSetImplemented(PCSTR ApiSetName)
{
  char v1; // si
  bool v2; // di
  int v3; // ebx
  __int64 CurrentApiSetSchema; // rax
  int v5; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-20h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  char v9; // [rsp+68h] [rbp+28h] BYREF
  bool v10; // [rsp+70h] [rbp+30h] BYREF

  v1 = 0;
  v2 = 0;
  v9 = 0;
  v10 = 0;
  DestinationString = 0LL;
  RtlInitAnsiString(&DestinationString, ApiSetName);
  UnicodeString = 0LL;
  v3 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  if ( v3 >= 0 )
  {
    CurrentApiSetSchema = PsQueryCurrentApiSetSchema();
    v5 = ApiSetQuerySchemaInfo(CurrentApiSetSchema, &UnicodeString.Length, &v9, &v10);
    v1 = v9;
    v3 = v5;
    v2 = v10;
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v3 >= 0 && (!v1 || !v2) )
    return -1073741275;
  return v3;
}
