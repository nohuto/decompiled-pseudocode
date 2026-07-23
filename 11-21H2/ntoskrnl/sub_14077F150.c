/*
 * XREFs of sub_14077F150 @ 0x14077F150
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     sub_1406DBA7C @ 0x1406DBA7C (sub_1406DBA7C.c)
 *     sub_1406DBB10 @ 0x1406DBB10 (sub_1406DBB10.c)
 *     sub_1407697FC @ 0x1407697FC (sub_1407697FC.c)
 *     sub_14077ED0C @ 0x14077ED0C (sub_14077ED0C.c)
 *     sub_140785470 @ 0x140785470 (sub_140785470.c)
 *     sub_140788E8C @ 0x140788E8C (sub_140788E8C.c)
 *     sub_14083E6C0 @ 0x14083E6C0 (sub_14083E6C0.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402DFEFC @ 0x1402DFEFC (sub_1402DFEFC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 */

int __fastcall sub_14077F150(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rbx
  __int16 v5; // ax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-88h] BYREF
  GUID Guid; // [rsp+50h] [rbp-78h] BYREF
  WCHAR SourceString[40]; // [rsp+60h] [rbp-68h] BYREF

  DestinationString = 0LL;
  v3 = 0;
  v4 = 0LL;
  Guid = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)a2) < 0
    || (DestinationString.MaximumLength & 0xFFFEu) < 0x62
    || !RtlPrefixUnicodeString(&stru_140002848, &DestinationString, 0)
    && !RtlPrefixUnicodeString(&stru_140002858, &DestinationString, 0) )
  {
    return -1073741773;
  }
  v5 = *(_WORD *)(a2 + 8);
  v6 = a2 + 8;
  if ( !v5 )
    goto LABEL_18;
  do
  {
    if ( v5 == 92 )
    {
      if ( (unsigned int)++v3 > 1 )
        return -1073741773;
      v4 = v6;
    }
    v5 = *(_WORD *)(v6 + 2);
    v6 += 2LL;
  }
  while ( v5 );
  if ( v4 )
    v7 = (v4 - a2) >> 1;
  else
LABEL_18:
    v7 = (unsigned __int64)DestinationString.Length >> 1;
  if ( v7 > 0xFFFFFFFF )
    return -1073741773;
  if ( (unsigned int)v7 < 0x30 )
    return -1073741773;
  result = sub_1402DFEFC(
             SourceString,
             0x27uLL,
             (const WCHAR *)(a2 + 2 * ((unsigned int)v7 - 38LL)),
             0x26uLL,
             0LL,
             0LL,
             2048);
  if ( result >= 0 )
  {
    result = RtlInitUnicodeStringEx(&DestinationString, SourceString);
    if ( result >= 0 )
    {
      result = RtlGUIDFromString(&DestinationString, &Guid);
      if ( result < 0 )
        return -1073741773;
    }
  }
  return result;
}
