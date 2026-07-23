/*
 * XREFs of RtlIpv6StringToAddressA @ 0x1405EBA00
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x1405EBE60 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     sub_1403E0868 @ 0x1403E0868 (sub_1403E0868.c)
 *     __isascii @ 0x1403E1A70 (__isascii.c)
 *     isdigit @ 0x1403E1A90 (isdigit.c)
 *     isxdigit @ 0x1403E1B80 (isxdigit.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressA(PCSTR S, PCSTR *Terminator, struct in6_addr *Addr)
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
  __int16 v12; // ax
  int v13; // eax
  unsigned int v14; // eax
  struct in6_addr *v15; // rcx
  unsigned int v16; // eax
  char *v17; // rbx
  char v19; // [rsp+20h] [rbp-58h]
  unsigned __int8 *v20; // [rsp+28h] [rbp-50h]
  char v21; // [rsp+80h] [rbp+8h]
  struct in6_addr *v23; // [rsp+90h] [rbp+18h]
  unsigned int v24; // [rsp+98h] [rbp+20h]

  v23 = Addr;
  v3 = *S;
  v20 = 0LL;
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
      if ( v7 == 1 )
      {
        if ( _isascii(v3) && isdigit(v3) )
        {
          ++v10;
LABEL_52:
          Addr = v23;
LABEL_53:
          v5 = v24;
          goto LABEL_54;
        }
        if ( _isascii(v3) && isxdigit(v3) )
        {
          ++v10;
          if ( v9 )
            goto LABEL_20;
          goto LABEL_51;
        }
        if ( v3 == 58 )
        {
          if ( v9 )
            goto LABEL_56;
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
LABEL_56:
            *Terminator = v6;
            goto LABEL_58;
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
        {
          if ( v8 > 7 && (v8 > 8 || !v4) )
            break;
          if ( _isascii(v3) && isdigit(v3) )
          {
            v21 = 0;
            v7 = 1;
            v20 = (unsigned __int8 *)v6;
            v10 = 1;
            goto LABEL_52;
          }
          if ( !_isascii(v3) || !isxdigit(v3) )
            break;
          if ( v9 )
          {
LABEL_20:
            *Terminator = v6;
            goto LABEL_58;
          }
          v20 = (unsigned __int8 *)v6;
          v7 = 1;
          v10 = 1;
LABEL_51:
          v21 = 1;
          goto LABEL_52;
        }
        if ( v9 )
          goto LABEL_56;
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
      if ( !v20 )
        goto LABEL_52;
      if ( v9 )
      {
        if ( v10 > 3 )
          return -1073741811;
        v14 = sub_1403E0868(v20, 0LL, 0xAu);
        if ( v14 > 0xFF )
          return -1073741811;
        Addr = v23;
        *((_BYTE *)v23 + 2 * v24 + v9 - 1) = v14;
        goto LABEL_53;
      }
      if ( v10 > 4 )
        return -1073741811;
      v12 = sub_1403E0868(v20, 0LL, 0x10u);
      Addr = v23;
      *((_WORD *)v23 + v24) = __ROR2__(v12, 8);
      v5 = ++v24;
LABEL_54:
      v3 = *++v6;
      if ( !*v6 )
        break;
      v4 = v19;
    }
  }
  *Terminator = v6;
  if ( v9 )
  {
LABEL_58:
    if ( v9 != 3 )
      return -1073741811;
    ++v8;
  }
  if ( !v11 && v8 != 7 )
    return -1073741811;
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      v15 = v23;
      *((_WORD *)v23 + v24) = 0;
      goto LABEL_71;
    }
    return -1073741811;
  }
  if ( v9 )
  {
    if ( v10 <= 3 )
    {
      v16 = sub_1403E0868(v20, 0LL, 0xAu);
      if ( v16 <= 0xFF )
      {
        v15 = v23;
        *((_BYTE *)v23 + 2 * v24 + v9) = v16;
        goto LABEL_71;
      }
    }
    return -1073741811;
  }
  if ( v10 > 4 )
    return -1073741811;
  *((_WORD *)v23 + v24) = __ROR2__(sub_1403E0868(v20, 0LL, 0x10u), 8);
  v15 = v23;
LABEL_71:
  if ( v11 )
  {
    v17 = (char *)v15 + 2 * v11;
    memmove((char *)v15 + 2 * (v11 - v8) + 16, v17, 2LL * (v8 - v11));
    memset(v17, 0, 2LL * (8 - v8));
  }
  return 0;
}
