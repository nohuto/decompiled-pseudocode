/*
 * XREFs of sub_1C00B12D0 @ 0x1C00B12D0
 * Callers:
 *     sub_1C00B0C08 @ 0x1C00B0C08 (sub_1C00B0C08.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C00B12D0(HANDLE KeyHandle, char *KeyValueInformation, __int64 a3)
{
  char result; // al
  __int64 v7; // rdx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, L"MinimumUCXAddress");
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) < 0
    || *((_DWORD *)KeyValueInformation + 1) != 3
    || *((_DWORD *)KeyValueInformation + 3) != 8 )
  {
    return 0;
  }
  result = 1;
  v7 = *(_QWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
  if ( v7 >= *(_QWORD *)(a3 + 24) - 4096LL )
    v7 = 0LL;
  *(_QWORD *)(a3 + 16) = v7;
  return result;
}
