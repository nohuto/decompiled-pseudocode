/*
 * XREFs of sub_14083735C @ 0x14083735C
 * Callers:
 *     sub_140836EAC @ 0x140836EAC (sub_140836EAC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memset @ 0x140435E00 (memset.c)
 */

NTSTATUS __fastcall sub_14083735C(_DWORD *a1, const WCHAR *a2, void *a3)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD KeyValueInformation[64]; // [rsp+50h] [rbp-B0h] BYREF

  DestinationString = 0LL;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  ResultLength = 0;
  *a1 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  result = ZwQueryValueKey(a3, &DestinationString, KeyValueFullInformation, KeyValueInformation, 0x100u, &ResultLength);
  if ( result >= 0 )
  {
    if ( KeyValueInformation[1] == 4 )
    {
      if ( KeyValueInformation[3] + KeyValueInformation[2] == ResultLength )
      {
        if ( KeyValueInformation[3] == 4 )
        {
          result = 0;
          *a1 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
        }
        else
        {
          return -1073741306;
        }
      }
      else
      {
        return -1073741764;
      }
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
