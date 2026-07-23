/*
 * XREFs of sub_140826B28 @ 0x140826B28
 * Callers:
 *     sub_140B01140 @ 0x140B01140 (sub_140B01140.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 */

NTSTATUS __fastcall sub_140826B28(HANDLE KeyHandle, PCWSTR SourceString, _DWORD *a3)
{
  NTSTATUS result; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-50h] BYREF
  int v12; // [rsp+4Ch] [rbp-4Ch]
  int v13; // [rsp+50h] [rbp-48h]
  int v14; // [rsp+54h] [rbp-44h]

  DestinationString = 0LL;
  if ( !KeyHandle )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v7 + 1] = -1073740768;
    dword_140C2A220[2 * v7] = 262790;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("KeyHandle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x286u, 0LL);
  }
  if ( !a3 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v8 + 1] = -1073740768;
    dword_140C2A220[2 * v8] = 262791;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("Value != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x287u, 0LL);
  }
  *a3 = 0;
  ResultLength = 20;
  RtlInitUnicodeString(&DestinationString, SourceString);
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( !result )
  {
    if ( v13 == 4 && v12 == 4 )
      *a3 = v14;
    else
      return -1073741788;
  }
  return result;
}
