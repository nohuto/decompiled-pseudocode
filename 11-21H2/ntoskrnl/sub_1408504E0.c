/*
 * XREFs of sub_1408504E0 @ 0x1408504E0
 * Callers:
 *     sub_14084FCD4 @ 0x14084FCD4 (sub_14084FCD4.c)
 *     sub_14084FDCC @ 0x14084FDCC (sub_14084FDCC.c)
 *     sub_14084FF94 @ 0x14084FF94 (sub_14084FF94.c)
 *     sub_140B23B40 @ 0x140B23B40 (sub_140B23B40.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

NTSTATUS __fastcall sub_1408504E0(HANDLE KeyHandle, const WCHAR *a2, int a3, void *a4, unsigned int *a5)
{
  NTSTATUS result; // eax
  unsigned int v9; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-158h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-150h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-138h] BYREF
  int v13; // [rsp+54h] [rbp-134h]
  unsigned int Src; // [rsp+58h] [rbp-130h]
  int Src_4; // [rsp+5Ch] [rbp-12Ch] BYREF

  ResultLength = 272;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( !KeyHandle )
    return -1073741811;
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( ResultLength < 0x10 )
    {
      return -1073741823;
    }
    else if ( v13 == a3 )
    {
      v9 = Src;
      if ( Src > *a5 )
      {
        return -1073741789;
      }
      else
      {
        memmove(a4, &Src_4, Src);
        result = 0;
        *a5 = v9;
      }
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
