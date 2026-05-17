/*
 * XREFs of RtlIpv4StringToAddressExW @ 0x18000DC00
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18000D5A0 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlIpv4StringToAddressW @ 0x18000DD30 (RtlIpv4StringToAddressW.c)
 *     iswctype @ 0x1800926B0 (iswctype.c)
 */

LONG __stdcall RtlIpv4StringToAddressExW(PCWSTR AddressString, BOOLEAN Strict, struct in_addr *Address, PUSHORT Port)
{
  unsigned __int16 v6; // bp
  wint_t *v7; // rsi
  unsigned __int16 v8; // di
  wint_t v9; // bx
  __int16 v10; // di
  bool v11; // zf
  __int16 v12; // ax
  wint_t *v13; // [rsp+50h] [rbp+8h] BYREF

  if ( !AddressString
    || !Address
    || !Port
    || RtlIpv4StringToAddressW(AddressString, Strict, (LPCWSTR *)&v13, Address) < 0 )
  {
    return -1073741811;
  }
  if ( *v13 == 58 )
  {
    v6 = 10;
    v7 = v13 + 1;
    v8 = 0;
    if ( v13[1] == 48 )
    {
      v6 = 8;
      v7 = v13 + 2;
      if ( ((v13[2] - 88) & 0xFFDF) == 0 )
      {
        v6 = 16;
        v7 = v13 + 3;
      }
    }
    v9 = *v7;
    if ( *v7 )
    {
      while ( 1 )
      {
        ++v7;
        if ( v9 < 0x80u && iswctype(v9, 4u) && (unsigned __int16)(v9 - 48) < v6 )
        {
          if ( v9 + v8 * (unsigned int)v6 - 48 > 0xFFFF )
            return -1073741811;
          v10 = v8 * v6 - 48;
        }
        else
        {
          if ( v6 != 16
            || v9 >= 0x80u
            || !iswctype(v9, 0x80u)
            || v9 + 16 * v8 - (iswctype(v9, 2u) != 0 ? 97 : 65) + 10 > 0xFFFFu )
          {
            return -1073741811;
          }
          v10 = 16 * v8;
          v11 = iswctype(v9, 2u) == 0;
          v12 = 97;
          if ( v11 )
            v12 = 65;
          v9 = v9 - v12 + 10;
        }
        v8 = v9 + v10;
        v9 = *v7;
        if ( !*v7 )
          goto LABEL_15;
      }
    }
    return -1073741811;
  }
  if ( *v13 )
    return -1073741811;
  v8 = 0;
LABEL_15:
  *Port = __ROR2__(v8, 8);
  return 0;
}
