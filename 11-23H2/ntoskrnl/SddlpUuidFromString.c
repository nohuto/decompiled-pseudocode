/*
 * XREFs of SddlpUuidFromString @ 0x1409D2C68
 * Callers:
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     wcsncat_s @ 0x1403E0000 (wcsncat_s.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlGUIDFromString @ 0x1406CF6F0 (RtlGUIDFromString.c)
 */

__int64 __fastcall SddlpUuidFromString(wchar_t *SourceString, GUID *Guid)
{
  unsigned int v2; // edi
  rsize_t v5; // rsi
  __int64 v6; // rax
  wchar_t *v7; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-88h] BYREF
  wchar_t Dst[2]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v11[74]; // [rsp+34h] [rbp-74h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  if ( *SourceString == 123 )
    goto LABEL_8;
  v5 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( SourceString[v6] );
  if ( SourceString[v6 - 1] == 125 )
  {
LABEL_8:
    v7 = SourceString;
  }
  else
  {
    wcscpy(Dst, L"{");
    memset(v11, 0, sizeof(v11));
    do
      ++v5;
    while ( SourceString[v5] );
    wcsncat_s(Dst, 0x27uLL, SourceString, v5);
    wcsncat_s(Dst, 0x27uLL, L"}", 2uLL);
    v7 = Dst;
  }
  RtlInitUnicodeString(&DestinationString, v7);
  LOBYTE(v2) = RtlGUIDFromString(&DestinationString, Guid) >= 0;
  return v2;
}
