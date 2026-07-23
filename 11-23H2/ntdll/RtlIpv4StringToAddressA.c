/*
 * XREFs of RtlIpv4StringToAddressA @ 0x18007F940
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x18007F8D0 (RtlIpv4StringToAddressExA.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     __isascii @ 0x18008F9B0 (__isascii.c)
 *     isdigit @ 0x18008FB00 (isdigit.c)
 *     islower @ 0x18008FB60 (islower.c)
 *     isxdigit @ 0x18008FC50 (isxdigit.c)
 */

LONG __stdcall RtlIpv4StringToAddressA(PCSTR S, BOOLEAN Strict, PCSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v4; // rbx
  BOOLEAN v6; // si
  unsigned int v8; // r13d
  char v9; // r12
  int v10; // r15d
  CHAR v11; // al
  int v12; // esi
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  LONG result; // eax
  __int64 v17; // rbx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  bool v21; // zf
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // ecx
  int v25; // eax
  int v26; // ecx
  unsigned int v29; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-1Ch]
  unsigned int v31; // [rsp+38h] [rbp-18h]
  unsigned int v32; // [rsp+3Ch] [rbp-14h] BYREF

  v4 = &v29;
  v6 = Strict;
  while ( 1 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 10;
    if ( *S == 48 )
    {
      if ( _isascii(*++S) && isdigit(*S) )
      {
        v10 = 8;
      }
      else if ( ((*S - 88) & 0xDF) != 0 )
      {
        v9 = 1;
      }
      else
      {
        v10 = 16;
        ++S;
      }
    }
    if ( v6 && v10 != 10 )
      goto LABEL_17;
    v11 = *S;
    if ( *S )
    {
      do
      {
        v12 = v11;
        if ( _isascii(v11) && isdigit(v12) && v12 - 48 < v10 )
        {
          v13 = v12 - 48;
          v14 = v8 * v10;
        }
        else
        {
          if ( v10 != 16 || !_isascii(v12) || !isxdigit(v12) )
            break;
          if ( !_isascii(v12) || (v25 = islower(v12), v26 = 97, !v25) )
            v26 = 65;
          v14 = 16 * v8 - v26;
          v13 = v12 + 10;
        }
        v15 = v14 + v13;
        if ( v15 < v8 )
          goto LABEL_17;
        ++S;
        v9 = 1;
        v8 = v15;
        v11 = *S;
      }
      while ( *S );
      v6 = Strict;
    }
    if ( *S != 46 )
      break;
    if ( v4 < &v32 )
    {
      *v4 = v8;
      ++S;
      ++v4;
      if ( v9 )
        continue;
    }
    goto LABEL_17;
  }
  if ( !v9 )
    goto LABEL_17;
  *v4 = v8;
  v17 = ((char *)v4 - (char *)&v29 + 4) >> 2;
  if ( v6 )
  {
    v21 = (_DWORD)v17 == 4;
    goto LABEL_24;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v24 = v29;
    goto LABEL_31;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    if ( v29 <= 0xFF && v30 <= 0xFFFFFF )
    {
      v23 = v29 << 24;
      v22 = v30 & 0xFFFFFF;
      goto LABEL_30;
    }
    goto LABEL_17;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    if ( v29 <= 0xFF && v30 <= 0xFF && v31 <= 0xFFFF )
    {
      v22 = (unsigned __int16)v31;
      v23 = ((v29 << 8) | (unsigned __int8)v30) << 16;
      goto LABEL_30;
    }
LABEL_17:
    result = -1073741811;
    *Terminator = S;
    return result;
  }
  v21 = v20 == 1;
LABEL_24:
  if ( !v21 || v29 > 0xFF || v30 > 0xFF || v31 > 0xFF || v32 > 0xFF )
    goto LABEL_17;
  v22 = (unsigned __int8)v32;
  v23 = ((unsigned __int8)v31 | (((v29 << 8) | (unsigned __int8)v30) << 8)) << 8;
LABEL_30:
  v24 = v22 | v23;
LABEL_31:
  *Terminator = S;
  *(_DWORD *)Addr = _byteswap_ulong(v24);
  return 0;
}
