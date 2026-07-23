/*
 * XREFs of CmpQueryLayerVersionString @ 0x14080DD10
 * Callers:
 *     CmpLoadLayerVersion @ 0x14080D778 (CmpLoadLayerVersion.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041B3D0 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

NTSTATUS __fastcall CmpQueryLayerVersionString(
        PUNICODE_STRING DestinationString,
        char *SourceString,
        unsigned __int16 a3,
        const WCHAR *a4,
        HANDLE KeyHandle)
{
  unsigned __int64 v6; // r14
  NTSTATUS result; // eax
  __int64 v10; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationStringa; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD KeyValueInformation[64]; // [rsp+50h] [rbp-B0h] BYREF

  v6 = a3;
  DestinationStringa = 0LL;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  *DestinationString = 0LL;
  ResultLength = 0;
  RtlInitUnicodeString(&DestinationStringa, a4);
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationStringa,
             KeyValueFullInformation,
             KeyValueInformation,
             0x100u,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( KeyValueInformation[1] == 1 )
    {
      if ( KeyValueInformation[3] + KeyValueInformation[2] == ResultLength )
      {
        if ( (KeyValueInformation[3] & 1) != 0 )
        {
          return -1073741306;
        }
        else
        {
          v10 = KeyValueInformation[3];
          if ( (unsigned __int64)KeyValueInformation[3] + 2 > v6 )
          {
            return -1073741789;
          }
          else
          {
            memmove(SourceString, (char *)KeyValueInformation + KeyValueInformation[2], KeyValueInformation[3]);
            *(_WORD *)&SourceString[v10] = 0;
            RtlInitUnicodeString(DestinationString, (PCWSTR)SourceString);
            result = 0;
            DestinationString->MaximumLength = v6;
          }
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
