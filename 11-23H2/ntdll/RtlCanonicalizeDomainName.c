/*
 * XREFs of RtlCanonicalizeDomainName @ 0x18000D390
 * Callers:
 *     RtlEqualDomainName @ 0x18000D310 (RtlEqualDomainName.c)
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x18000D53C (RtlpNameprepAsciiWorker.c)
 *     RtlIpv4StringToAddressExW @ 0x18000D9F0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv6StringToAddressExW @ 0x18000DD40 (RtlIpv6StringToAddressExW.c)
 *     RtlIdnToUnicode @ 0x18000E3B0 (RtlIdnToUnicode.c)
 *     RtlCreateUnicodeString @ 0x18000E9A0 (RtlCreateUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x18002D690 (RtlCopyUnicodeString.c)
 *     RtlIpv6AddressToStringExW @ 0x180052DC0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv4AddressToStringExW @ 0x18007B490 (RtlIpv4AddressToStringExW.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008F130 (__report_rangecheckfailure.c)
 *     towlower @ 0x1800950B0 (towlower.c)
 */

LONG __fastcall RtlCanonicalizeDomainName(__int64 a1, unsigned __int16 *a2, BOOLEAN a3)
{
  LONG result; // eax
  unsigned int v7; // edi
  wint_t *v8; // rbx
  __int64 v9; // rsi
  USHORT v10; // dx
  USHORT Port[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG AddressStringLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ScopeId; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  PCWSTR AddressString; // [rsp+48h] [rbp-B8h]
  in6_addr Address; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR v18[256]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v19[512]; // [rsp+260h] [rbp+160h] BYREF
  char v20; // [rsp+460h] [rbp+360h] BYREF

  AddressStringLength = 256;
  v14 = 256;
  AddressString = (PCWSTR)&v20;
  v15 = 33554942LL;
  RtlCopyUnicodeString(&v15);
  if ( (_WORD)v15 == WORD1(v15) )
    return -1073740010;
  if ( RtlIpv6StringToAddressExW(AddressString, &Address, &ScopeId, Port) >= 0 )
  {
    v10 = Port[0];
    if ( !Port[0] )
    {
      if ( Address.u.Word[0]
        || __PAIR32__(Address.u.Word[1], 0) != Address.u.Word[2]
        || __PAIR32__(Address.u.Word[3], 0) != Address.u.Word[4]
        || Address.u.Word[5] != 0xFFFF
        || ScopeId )
      {
        result = RtlIpv6AddressToStringExW(&Address, ScopeId, 0, v18, &AddressStringLength);
        goto LABEL_25;
      }
      ScopeId = *(_DWORD *)&Address.u.Word[6];
LABEL_24:
      result = RtlIpv4AddressToStringExW((const struct in_addr *)&ScopeId, v10, v18, &AddressStringLength);
LABEL_25:
      if ( result >= 0 )
      {
        if ( (unsigned __int8)RtlCreateUnicodeString(a1, v18) )
          return 0;
        else
          return -1073741801;
      }
      return result;
    }
  }
  if ( RtlIpv4StringToAddressExW(AddressString, a3, (struct in_addr *)&ScopeId, Port) >= 0 )
  {
    v10 = Port[0];
    if ( !Port[0] )
      goto LABEL_24;
  }
  result = RtlpNameprepAsciiWorker(0, *((_QWORD *)a2 + 1), *a2 >> 1, (unsigned int)v19, (__int64)&v14, 1);
  if ( result >= 0 )
  {
    v7 = v14;
    if ( v14 )
    {
      v8 = (wint_t *)v19;
      v9 = v14;
      do
      {
        *v8 = towlower(*v8);
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    result = RtlIdnToUnicode(0, (unsigned int)v19, v7, (unsigned int)v18, (__int64)&AddressStringLength);
    if ( result >= 0 )
    {
      if ( AddressStringLength != 256 )
      {
        if ( 2 * (unsigned __int64)AddressStringLength >= 0x200 )
          _report_rangecheckfailure();
        v18[AddressStringLength] = 0;
        return (unsigned __int8)RtlCreateUnicodeString(a1, v18) == 0 ? 0xC0000017 : 0;
      }
      return -1073740010;
    }
  }
  return result;
}
