/*
 * XREFs of sub_140B2F684 @ 0x140B2F684
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406A5B90 @ 0x1406A5B90 (sub_1406A5B90.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     sub_1407C9930 @ 0x1407C9930 (sub_1407C9930.c)
 *     sub_140B4F514 @ 0x140B4F514 (sub_140B4F514.c)
 */

char __fastcall sub_140B2F684(__int64 a1)
{
  size_t Size; // [rsp+20h] [rbp-79h]
  __int64 v4; // [rsp+30h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-61h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-59h] BYREF
  UNICODE_STRING v7; // [rsp+50h] [rbp-49h] BYREF
  __int64 v8; // [rsp+60h] [rbp-39h]
  __int64 v9; // [rsp+68h] [rbp-31h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-29h]
  int v11; // [rsp+78h] [rbp-21h]
  int v12; // [rsp+7Ch] [rbp-1Dh]
  __int128 v13; // [rsp+80h] [rbp-19h]
  char v14[80]; // [rsp+90h] [rbp-9h] BYREF

  Handle = 0LL;
  v12 = 0;
  LODWORD(v4) = 0;
  v8 = 48LL;
  DestinationString = 0LL;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa");
  v9 = 0LL;
  p_DestinationString = &DestinationString;
  v11 = 64;
  v13 = 0LL;
  if ( (int)sub_1406A5B90() >= 0 )
  {
    RtlInitUnicodeString(&v7, L"Protect System Partition");
    LODWORD(Size) = 20;
    if ( (int)sub_1407C9930(Handle, (unsigned __int64)&v7, 2u, v14, Size, (unsigned int *)&v4) >= 0 && v14[12] )
      sub_140B4F514(a1);
    NtClose(Handle);
  }
  return 1;
}
