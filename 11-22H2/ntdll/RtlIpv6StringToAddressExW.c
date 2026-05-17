/*
 * XREFs of RtlIpv6StringToAddressExW @ 0x18000DF50
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18000D5A0 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlIpv6StringToAddressW @ 0x18000E180 (RtlIpv6StringToAddressW.c)
 *     iswctype @ 0x1800926B0 (iswctype.c)
 */

LONG __stdcall RtlIpv6StringToAddressExW(PCWSTR AddressString, struct in6_addr *Address, PULONG ScopeId, PUSHORT Port)
{
  WCHAR v7; // r14
  const WCHAR *v8; // rcx
  unsigned __int16 v9; // di
  ULONG v10; // r15d
  bool v11; // bp
  LONG result; // eax
  PCWSTR v13; // rsi
  WCHAR v14; // bx
  wint_t *v15; // rsi
  unsigned __int16 v16; // r14
  wint_t v17; // bx
  __int16 v18; // di
  wint_t v19; // bx
  int v20; // eax
  _WORD *v21; // rcx
  __int16 v22; // ax
  bool v23; // zf
  __int16 v24; // ax
  PCWSTR v25; // [rsp+50h] [rbp+8h] BYREF

  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v7 = *AddressString;
  v8 = AddressString + 1;
  v9 = 0;
  if ( v7 != 91 )
    v8 = AddressString;
  v10 = 0;
  v11 = v7 == 91;
  if ( RtlIpv6StringToAddressW(v8, &v25, Address) < 0 )
    return -1073741811;
  v13 = v25;
  if ( *v25 == 37 )
  {
    v13 = v25 + 1;
    v19 = v25[1];
    if ( v19 >= 0x80u || !iswctype(v19, 4u) )
      return -1073741811;
    if ( v19 )
    {
      while ( v19 != 93 )
      {
        if ( v19 >= 0x80u || !iswctype(v19, 4u) || v19 + 2 * (5 * (unsigned __int64)v10 - 24) > 0xFFFFFFFF )
          return -1073741811;
        ++v13;
        v20 = v19;
        v19 = *v13;
        v10 = v20 + 2 * (5 * v10 - 24);
        if ( !*v13 )
          goto LABEL_23;
      }
    }
  }
  v14 = *v13;
  if ( *v13 != 93 )
    goto LABEL_22;
  if ( v7 != 91 )
    return -1073741811;
  v14 = v13[1];
  v11 = 0;
  if ( v14 != 58 )
  {
LABEL_22:
    if ( !v14 )
      goto LABEL_23;
    return -1073741811;
  }
  v15 = (wint_t *)(v13 + 2);
  v16 = 10;
  if ( *v15 == 48 )
  {
    v21 = v15 + 1;
    v16 = 8;
    v22 = v15[1] - 88;
    ++v15;
    if ( (v22 & 0xFFDF) == 0 )
    {
      v16 = 16;
      v15 = v21 + 1;
    }
  }
  v17 = *v15;
  if ( *v15 )
  {
    while ( 1 )
    {
      if ( v17 < 0x80u && iswctype(v17, 4u) && v17 - 48 < v16 )
      {
        if ( v17 + v16 * (unsigned int)v9 - 48 > 0xFFFF )
          return -1073741811;
        v18 = v9 * v16 - 48;
      }
      else
      {
        if ( v16 != 16
          || v17 >= 0x80u
          || !iswctype(v17, 0x80u)
          || v17 + 16 * v9 - (iswctype(v17, 2u) != 0 ? 97 : 65) + 10 > 0xFFFFu )
        {
          return -1073741811;
        }
        v18 = 16 * v9;
        v23 = iswctype(v17, 2u) == 0;
        v24 = 97;
        if ( v23 )
          v24 = 65;
        v17 = v17 - v24 + 10;
      }
      ++v15;
      v9 = v17 + v18;
      v17 = *v15;
      if ( !*v15 )
        goto LABEL_24;
    }
  }
LABEL_23:
  if ( v11 )
    return -1073741811;
LABEL_24:
  *Port = __ROR2__(v9, 8);
  result = 0;
  *ScopeId = v10;
  return result;
}
