/*
 * XREFs of RtlIpv6StringToAddressA @ 0x180084310
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x180084280 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     __isascii @ 0x18008F9B0 (__isascii.c)
 *     isdigit @ 0x18008FB00 (isdigit.c)
 *     isxdigit @ 0x18008FC50 (isxdigit.c)
 *     strtol @ 0x180094AC0 (strtol.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

LONG __stdcall RtlIpv6StringToAddressA(PCSTR S, PCSTR *Terminator, struct in6_addr *Addr)
{
  CHAR v3; // bl
  char v4; // r9
  unsigned int v5; // edx
  PCSTR v6; // rsi
  int v7; // r12d
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  unsigned int v11; // r15d
  int v13; // eax
  __int16 v14; // ax
  unsigned int v15; // eax
  struct in6_addr *v16; // rcx
  unsigned int v17; // eax
  char *v18; // rbx
  char v19; // [rsp+20h] [rbp-58h]
  char *String; // [rsp+28h] [rbp-50h]
  char v21; // [rsp+80h] [rbp+8h]
  struct in6_addr *v23; // [rsp+90h] [rbp+18h]
  unsigned int v24; // [rsp+98h] [rbp+20h]

  v23 = Addr;
  v3 = *S;
  String = 0LL;
  v4 = 0;
  v21 = 0;
  v5 = 0;
  v19 = 0;
  v6 = S;
  v24 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( *S )
  {
    while ( 1 )
    {
      if ( v7 )
      {
        if ( v7 != 1 )
        {
LABEL_4:
          if ( v8 > 7 && (v8 > 8 || !v4) )
            break;
          if ( _isascii(v3) && isdigit(v3) )
          {
            v21 = 0;
            v7 = 1;
            String = (char *)v6;
            v10 = 1;
            goto LABEL_17;
          }
          if ( !_isascii(v3) || !isxdigit(v3) )
            break;
          if ( v9 )
          {
LABEL_31:
            *Terminator = v6;
            goto LABEL_66;
          }
          String = (char *)v6;
          v7 = 1;
          v10 = 1;
          goto LABEL_29;
        }
        if ( _isascii(v3) && isdigit(v3) )
        {
          ++v10;
LABEL_17:
          Addr = v23;
LABEL_18:
          v5 = v24;
          goto LABEL_19;
        }
        if ( _isascii(v3) && isxdigit(v3) )
        {
          ++v10;
          if ( v9 )
            goto LABEL_31;
LABEL_29:
          v21 = 1;
          goto LABEL_17;
        }
        if ( v3 == 58 )
        {
          if ( v9 )
            goto LABEL_65;
          if ( v8 > 6 && !v19 || v8 > 7 )
            break;
          if ( v6[1] == 58 )
          {
            if ( v11 )
              break;
            v13 = 2;
            v11 = v8 + 1;
            v7 = 2;
            ++v6;
          }
          else
          {
            v7 = 0;
            v13 = 1;
          }
          v8 += v13;
        }
        else
        {
          if ( v3 != 46 || v21 )
            break;
          if ( v9 > 2 )
          {
LABEL_65:
            *Terminator = v6;
LABEL_66:
            if ( v9 == 3 )
            {
              ++v8;
              goto LABEL_10;
            }
            return -1073741811;
          }
          if ( v8 > 6 && !v19 || v8 > 7 )
            break;
          ++v9;
          v7 = 0;
        }
      }
      else
      {
        if ( v3 != 58 )
          goto LABEL_4;
        if ( v9 )
          goto LABEL_65;
        if ( v8 || v6[1] != 58 )
          break;
        v11 = 1;
        v8 = 2;
        if ( !v5 )
          v4 = 1;
        v19 = v4;
        v24 = v5 + 1;
        ++v6;
        *((_WORD *)Addr + v5) = 0;
        v7 = 2;
      }
      if ( !String )
        goto LABEL_17;
      if ( v9 )
      {
        if ( v10 > 3 )
          return -1073741811;
        v15 = strtol(String, 0LL, 10);
        if ( v15 > 0xFF )
          return -1073741811;
        Addr = v23;
        *((_BYTE *)v23 + 2 * v24 + v9 - 1) = v15;
        goto LABEL_18;
      }
      if ( v10 > 4 )
        return -1073741811;
      v14 = strtol(String, 0LL, 16);
      Addr = v23;
      *((_WORD *)v23 + v24) = __ROR2__(v14, 8);
      v5 = ++v24;
LABEL_19:
      v3 = *++v6;
      if ( !*v6 )
        break;
      v4 = v19;
    }
  }
  *Terminator = v6;
  if ( v9 )
    goto LABEL_66;
LABEL_10:
  if ( !v11 && v8 != 7 )
    return -1073741811;
  if ( v7 == 1 )
  {
    if ( v9 )
    {
      if ( v10 > 3 )
        return -1073741811;
      v17 = strtol(String, 0LL, 10);
      if ( v17 > 0xFF )
        return -1073741811;
      v16 = v23;
      *((_BYTE *)v23 + 2 * v24 + v9) = v17;
    }
    else
    {
      if ( v10 > 4 )
        return -1073741811;
      *((_WORD *)v23 + v24) = __ROR2__(strtol(String, 0LL, 16), 8);
      v16 = v23;
    }
  }
  else
  {
    if ( v7 != 2 )
      return -1073741811;
    v16 = v23;
    *((_WORD *)v23 + v24) = 0;
  }
  if ( v11 )
  {
    v18 = (char *)v16 + 2 * v11;
    memmove((char *)v16 + 2 * (v11 - v8) + 16, v18, 2LL * (v8 - v11));
    memset_thunk_772440563353939046(v18, 0, 2LL * (8 - v8));
  }
  return 0;
}
