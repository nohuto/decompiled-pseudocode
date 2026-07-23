/*
 * XREFs of sub_140660EF4 @ 0x140660EF4
 * Callers:
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140660F7C @ 0x140660F7C (sub_140660F7C.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 *     sub_1409BA210 @ 0x1409BA210 (sub_1409BA210.c)
 */

__int64 __fastcall sub_140660EF4(HANDLE TokenHandle, PCUNICODE_STRING Source, _BYTE *a3)
{
  int v5; // eax
  NTSTATUS v6; // ebx
  BOOLEAN IsMember; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v9[3]; // [rsp+21h] [rbp-3Fh] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+24h] [rbp-3Ch] BYREF
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  _BYTE Sid[16]; // [rsp+40h] [rbp-20h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  IsMember = 0;
  v9[0] = 0;
  UnicodeString = 0LL;
  v5 = sub_140660F7C(Source, &UnicodeString);
  v6 = v5;
  if ( v5 == -1073741772 )
  {
    v6 = 0;
  }
  else
  {
    *a3 = 0;
    if ( v5 >= 0 )
    {
      if ( RtlCompareUnicodeString(&UnicodeString, &stru_14000A7D8, 0) )
      {
        if ( RtlCompareUnicodeString(&UnicodeString, &stru_14000A7C8, 0) )
        {
          v6 = -1073741823;
          goto LABEL_3;
        }
        RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
        *RtlSubAuthoritySid(Sid, 0) = 4;
      }
      else
      {
        RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
        *RtlSubAuthoritySid(Sid, 0) = 32;
        *RtlSubAuthoritySid(Sid, 1u) = 583;
      }
      v6 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 2u, &IsMember);
      if ( v6 >= 0 )
      {
        if ( IsMember )
        {
          v6 = sub_1409BA210(TokenHandle, v9);
          if ( v6 >= 0 )
          {
            if ( v9[0] )
              *a3 = 1;
          }
        }
      }
    }
  }
LABEL_3:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v6;
}
