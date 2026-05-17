/*
 * XREFs of RtlIpv6StringToAddressExA @ 0x180085E40
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv6StringToAddressA @ 0x180085ED0 (RtlIpv6StringToAddressA.c)
 *     __isascii @ 0x180094230 (__isascii.c)
 *     isdigit @ 0x180094380 (isdigit.c)
 *     islower @ 0x1800943E0 (islower.c)
 *     isxdigit @ 0x1800944D0 (isxdigit.c)
 */

LONG __stdcall RtlIpv6StringToAddressExA(PCSTR AddressString, struct in6_addr *Address, PULONG ScopeId, PUSHORT Port)
{
  CHAR v6; // r12
  bool v7; // zf
  const CHAR *v8; // rcx
  unsigned __int16 v9; // di
  unsigned int v10; // r15d
  bool v11; // bp
  PCSTR v13; // rbx
  int v14; // esi
  unsigned __int16 v15; // r12
  PCSTR v16; // rcx
  char v17; // al
  CHAR v18; // r14
  __int16 v19; // ax
  __int16 v20; // di
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  __int16 v24; // cx
  PULONG v25; // rax
  PCSTR Terminator; // [rsp+60h] [rbp+8h] BYREF
  PULONG v27; // [rsp+70h] [rbp+18h]

  v27 = ScopeId;
  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v6 = *AddressString;
  v7 = *AddressString == 91;
  v8 = AddressString + 1;
  v9 = 0;
  if ( !v7 )
    v8 = AddressString;
  v10 = 0;
  v11 = v7;
  if ( RtlIpv6StringToAddressA(v8, &Terminator, Address) < 0 )
    return -1073741811;
  v13 = Terminator;
  if ( *Terminator == 37 )
  {
    v13 = Terminator + 1;
    v14 = Terminator[1];
    if ( !_isascii(v14) || !isdigit(v14) )
      return -1073741811;
    if ( (_BYTE)v14 )
    {
      while ( (_BYTE)v14 != 93 )
      {
        if ( !_isascii((char)v14)
          || !isdigit((char)v14)
          || (char)v14 + 2 * (5 * (unsigned __int64)v10 - 24) > 0xFFFFFFFF )
        {
          return -1073741811;
        }
        ++v13;
        v10 = (char)v14 + 2 * (5 * v10 - 24);
        LOBYTE(v14) = *v13;
        if ( !*v13 )
          goto LABEL_44;
      }
    }
  }
  if ( *v13 == 93 )
  {
    if ( v6 != 91 )
      return -1073741811;
    ++v13;
    v11 = 0;
    if ( *v13 == 58 )
    {
      ++v13;
      v15 = 10;
      if ( *v13 == 48 )
      {
        v16 = v13 + 1;
        v15 = 8;
        v17 = *++v13 - 88;
        if ( (v17 & 0xDF) == 0 )
        {
          v15 = 16;
          v13 = v16 + 1;
        }
      }
      v18 = *v13;
      if ( *v13 )
      {
        while ( 1 )
        {
          if ( _isascii(v18) && isdigit(v18) && v18 - 48 < v15 )
          {
            if ( v18 + v15 * (unsigned int)v9 - 48 > 0xFFFF )
              return -1073741811;
            v19 = v18;
            v20 = v9 * v15 - 48;
          }
          else
          {
            if ( v15 != 16 || !_isascii(v18) || !isxdigit(v18) )
              return -1073741811;
            if ( !_isascii(v18) || (v21 = islower(v18), v22 = 97, !v21) )
              v22 = 65;
            if ( v18 + 16 * (unsigned int)v9 - v22 + 10 > 0xFFFF )
              return -1073741811;
            v20 = 16 * v9;
            if ( !_isascii(v18) || (v23 = islower(v18), v24 = 97, !v23) )
              v24 = 65;
            v19 = v18 - v24 + 10;
          }
          ++v13;
          v9 = v19 + v20;
          v18 = *v13;
          if ( !*v13 )
            goto LABEL_46;
        }
      }
    }
  }
LABEL_44:
  if ( *v13 )
    return -1073741811;
  v9 = 0;
  if ( v11 )
    return -1073741811;
LABEL_46:
  v25 = v27;
  *Port = __ROR2__(v9, 8);
  *v25 = v10;
  return 0;
}
