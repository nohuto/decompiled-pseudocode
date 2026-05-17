/*
 * XREFs of RtlIsApiSetImplemented @ 0x180048760
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiString @ 0x180035350 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003D5E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     ApiSetQuerySchemaInfo @ 0x18004883C (ApiSetQuerySchemaInfo.c)
 */

__int64 __fastcall RtlIsApiSetImplemented(PCSZ SourceString)
{
  char v1; // si
  char v2; // di
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-20h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  char v8; // [rsp+68h] [rbp+28h] BYREF
  char v9; // [rsp+70h] [rbp+30h] BYREF

  v1 = 0;
  v2 = 0;
  v8 = 0;
  v9 = 0;
  RtlInitAnsiString(&DestinationString, SourceString);
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
    return (unsigned int)-1073741275;
  return (unsigned int)v3;
}
