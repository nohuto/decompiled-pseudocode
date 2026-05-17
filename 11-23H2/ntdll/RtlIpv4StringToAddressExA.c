/*
 * XREFs of RtlIpv4StringToAddressExA @ 0x18007F8D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv4StringToAddressA @ 0x18007F940 (RtlIpv4StringToAddressA.c)
 *     __isascii @ 0x18008F9B0 (__isascii.c)
 *     isdigit @ 0x18008FB00 (isdigit.c)
 *     islower @ 0x18008FB60 (islower.c)
 *     isxdigit @ 0x18008FC50 (isxdigit.c)
 */

LONG __stdcall RtlIpv4StringToAddressExA(PCSTR AddressString, BOOLEAN Strict, struct in_addr *Address, PUSHORT Port)
{
  PCSTR v6; // rsi
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // r14
  CHAR v9; // bp
  int v10; // eax
  int v11; // ecx
  __int16 v12; // bx
  int v13; // eax
  __int16 v14; // cx
  PCSTR Terminator; // [rsp+50h] [rbp+8h] BYREF

  if ( !AddressString || !Address || !Port || RtlIpv4StringToAddressA(AddressString, Strict, &Terminator, Address) < 0 )
    return -1073741811;
  if ( *Terminator == 58 )
  {
    v6 = Terminator + 1;
    v7 = 0;
    v8 = 10;
    if ( Terminator[1] == 48 )
    {
      v8 = 8;
      v6 = Terminator + 2;
      if ( ((Terminator[2] - 88) & 0xDF) == 0 )
      {
        v8 = 16;
        v6 = Terminator + 3;
      }
    }
    v9 = *v6;
    if ( *v6 )
    {
      while ( 1 )
      {
        ++v6;
        if ( _isascii(v9) && isdigit(v9) && (unsigned __int16)(v9 - 48) < v8 )
        {
          if ( v7 * (unsigned int)v8 + v9 - 48 > 0xFFFF )
            return -1073741811;
          v7 = v9 + v7 * v8 - 48;
        }
        else
        {
          if ( v8 != 16 || !_isascii(v9) || !isxdigit(v9) )
            return -1073741811;
          if ( !_isascii(v9) || (v10 = islower(v9), v11 = 97, !v10) )
            v11 = 65;
          if ( v9 + 16 * (unsigned int)v7 - v11 + 10 > 0xFFFF )
            return -1073741811;
          v12 = 16 * v7;
          if ( !_isascii(v9) || (v13 = islower(v9), v14 = 97, !v13) )
            v14 = 65;
          v7 = v9 - v14 + 10 + v12;
        }
        v9 = *v6;
        if ( !*v6 )
          goto LABEL_31;
      }
    }
    return -1073741811;
  }
  if ( *Terminator )
    return -1073741811;
  v7 = 0;
LABEL_31:
  *Port = __ROR2__(v7, 8);
  return 0;
}
