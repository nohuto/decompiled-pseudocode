/*
 * XREFs of RtlIpv6StringToAddressExA @ 0x180084280
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv6StringToAddressA @ 0x180084310 (RtlIpv6StringToAddressA.c)
 *     __isascii @ 0x18008F9B0 (__isascii.c)
 *     isdigit @ 0x18008FB00 (isdigit.c)
 *     islower @ 0x18008FB60 (islower.c)
 *     isxdigit @ 0x18008FC50 (isxdigit.c)
 */

LONG __stdcall RtlIpv6StringToAddressExA(PCSTR AddressString, struct in6_addr *Address, PULONG ScopeId, PUSHORT Port)
{
  CHAR v6; // r14
  bool v7; // zf
  const CHAR *v8; // rcx
  unsigned __int16 v9; // si
  unsigned int v10; // r12d
  bool v11; // r15
  PCSTR v13; // rbx
  int v14; // edi
  CHAR v15; // di
  unsigned __int16 v16; // bp
  CHAR *v17; // r14
  __int16 v18; // ax
  __int16 v19; // si
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  __int16 v23; // cx
  PULONG v24; // rax
  PCSTR Terminator; // [rsp+60h] [rbp+8h] BYREF
  PULONG v26; // [rsp+70h] [rbp+18h]

  v26 = ScopeId;
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
        v10 = (char)v14 - 48 + 10 * v10;
        LOBYTE(v14) = *v13;
        if ( !*v13 )
          goto LABEL_45;
      }
    }
  }
  v15 = *v13;
  if ( *v13 == 93 )
  {
    if ( v6 != 91 )
      return -1073741811;
    v15 = v13[1];
    v11 = 0;
    if ( v15 == 58 )
    {
      v16 = 10;
      v17 = (CHAR *)(v13 + 2);
      if ( v13[2] == 48 )
      {
        v16 = 8;
        v17 = (CHAR *)(v13 + 3);
        if ( ((v13[3] - 88) & 0xDF) == 0 )
        {
          v16 = 16;
          v17 = (CHAR *)(v13 + 4);
        }
      }
      v15 = *v17;
      if ( *v17 )
      {
        while ( 1 )
        {
          if ( _isascii(v15) && isdigit(v15) && v15 - 48 < v16 )
          {
            if ( v15 + v16 * (unsigned int)v9 - 48 > 0xFFFF )
              return -1073741811;
            v18 = v15;
            v19 = v9 * v16 - 48;
          }
          else
          {
            if ( v16 != 16 || !_isascii(v15) || !isxdigit(v15) )
              return -1073741811;
            if ( !_isascii(v15) || (v20 = islower(v15), v21 = 97, !v20) )
              v21 = 65;
            if ( v15 + 16 * (unsigned int)v9 - v21 + 10 > 0xFFFF )
              return -1073741811;
            v19 = 16 * v9;
            if ( !_isascii(v15) || (v22 = islower(v15), v23 = 97, !v22) )
              v23 = 65;
            v18 = v15 - v23 + 10;
          }
          ++v17;
          v9 = v18 + v19;
          v15 = *v17;
          if ( !*v17 )
            goto LABEL_46;
        }
      }
    }
  }
  if ( v15 )
    return -1073741811;
LABEL_45:
  if ( v11 )
    return -1073741811;
LABEL_46:
  v24 = v26;
  *Port = __ROR2__(v9, 8);
  *v24 = v10;
  return 0;
}
