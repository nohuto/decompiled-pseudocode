/*
 * XREFs of ApiSetpLoadSchemaExtension @ 0x140A09FC0
 * Callers:
 *     ApiSetpLoadSchemaExtensions @ 0x140A0A0DC (ApiSetpLoadSchemaExtensions.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041B040 (ZwQueryValueKey.c)
 *     ApiSetReleaseSchema @ 0x1406146B0 (ApiSetReleaseSchema.c)
 *     ApiSetComposeSchema @ 0x1406149A4 (ApiSetComposeSchema.c)
 *     ApiSetLoadSchemaEx @ 0x140A09CEC (ApiSetLoadSchemaEx.c)
 *     ApiSetpConstructPathToExtension @ 0x140A09E90 (ApiSetpConstructPathToExtension.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ApiSetpLoadSchemaExtension(void *a1, PVOID *a2, unsigned int *a3)
{
  _DWORD *v3; // rdi
  int v6; // ebx
  int v7; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v10; // [rsp+38h] [rbp-C8h] BYREF
  size_t v11; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v13; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+70h] [rbp-90h] BYREF
  int v15; // [rsp+78h] [rbp-88h]
  WCHAR Source[138]; // [rsp+7Ch] [rbp-84h] BYREF

  v11 = 0LL;
  *(_QWORD *)&v13.Length = 0LL;
  ResultLength = 0;
  v3 = 0LL;
  v13.Buffer = 0LL;
  ValueName.Buffer = L"FileName";
  *(_QWORD *)&ValueName.Length = 1179664LL;
  v10 = 0LL;
  v6 = ZwQueryValueKey(a1, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x114u, &ResultLength);
  if ( v6 >= 0 )
  {
    v6 = ApiSetpConstructPathToExtension(Source, v15, &v13);
    if ( v6 >= 0 )
    {
      v7 = ApiSetLoadSchemaEx((__int64)&v13, &v10, &v11);
      v3 = v10;
      v6 = v7;
      if ( v7 >= 0 )
        v6 = ApiSetComposeSchema(a2, a3, v10, v11);
    }
  }
  if ( v13.Buffer )
    ExFreePoolWithTag(v13.Buffer, 0);
  if ( v3 )
    ApiSetReleaseSchema(v3);
  return (unsigned int)v6;
}
