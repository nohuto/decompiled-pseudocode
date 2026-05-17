/*
 * XREFs of RtlIpv6StringToAddressExW @ 0x1800323E0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x180031A00 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlIpv6StringToAddressW @ 0x180032610 (RtlIpv6StringToAddressW.c)
 *     iswctype @ 0x1800976B0 (iswctype.c)
 */

LONG __stdcall RtlIpv6StringToAddressExW(PCWSTR AddressString, struct in6_addr *Address, PULONG ScopeId, PUSHORT Port)
{
  WCHAR v7; // r15
  const WCHAR *v8; // rcx
  unsigned __int16 v9; // si
  ULONG v10; // r14d
  bool v11; // bp
  LONG result; // eax
  PCWSTR v13; // rbx
  unsigned __int16 v14; // r15
  wint_t v15; // di
  __int16 v16; // si
  wint_t v17; // di
  int v18; // eax
  PCWSTR v19; // rcx
  __int16 v20; // ax
  bool v21; // zf
  __int16 v22; // ax
  PCWSTR v23; // [rsp+50h] [rbp+8h] BYREF

  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v7 = *AddressString;
  v8 = AddressString + 1;
  v9 = 0;
  if ( v7 != 91 )
    v8 = AddressString;
  v10 = 0;
  v11 = v7 == 91;
  if ( RtlIpv6StringToAddressW(v8, &v23, Address) < 0 )
    return -1073741811;
  v13 = v23;
  if ( *v23 == 37 )
  {
    v13 = v23 + 1;
    v17 = v23[1];
    if ( v17 >= 0x80u || !iswctype(v17, 4u) )
      return -1073741811;
    if ( v17 )
    {
      while ( v17 != 93 )
      {
        if ( v17 >= 0x80u || !iswctype(v17, 4u) || v17 + 2 * (5 * (unsigned __int64)v10 - 24) > 0xFFFFFFFF )
          return -1073741811;
        ++v13;
        v18 = v17;
        v17 = *v13;
        v10 = v18 + 2 * (5 * v10 - 24);
        if ( !*v13 )
          goto LABEL_22;
      }
    }
  }
  if ( *v13 == 93 )
  {
    if ( v7 != 91 )
      return -1073741811;
    ++v13;
    v11 = 0;
    if ( *v13 == 58 )
    {
      ++v13;
      v14 = 10;
      if ( *v13 == 48 )
      {
        v19 = v13 + 1;
        v14 = 8;
        v20 = v13[1] - 88;
        ++v13;
        if ( (v20 & 0xFFDF) == 0 )
        {
          v14 = 16;
          v13 = v19 + 1;
        }
      }
      v15 = *v13;
      if ( *v13 )
      {
        while ( 1 )
        {
          if ( v15 < 0x80u && iswctype(v15, 4u) && v15 - 48 < v14 )
          {
            if ( v15 + v14 * (unsigned int)v9 - 48 > 0xFFFF )
              return -1073741811;
            v16 = v9 * v14 - 48;
          }
          else
          {
            if ( v14 != 16
              || v15 >= 0x80u
              || !iswctype(v15, 0x80u)
              || v15 + 16 * v9 - (iswctype(v15, 2u) != 0 ? 97 : 65) + 10 > 0xFFFFu )
            {
              return -1073741811;
            }
            v16 = 16 * v9;
            v21 = iswctype(v15, 2u) == 0;
            v22 = 97;
            if ( v21 )
              v22 = 65;
            v15 = v15 - v22 + 10;
          }
          ++v13;
          v9 = v15 + v16;
          v15 = *v13;
          if ( !*v13 )
            goto LABEL_24;
        }
      }
    }
  }
LABEL_22:
  if ( *v13 )
    return -1073741811;
  v9 = 0;
  if ( v11 )
    return -1073741811;
LABEL_24:
  *Port = __ROR2__(v9, 8);
  result = 0;
  *ScopeId = v10;
  return result;
}
