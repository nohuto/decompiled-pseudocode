/*
 * XREFs of RtlIpv4StringToAddressW @ 0x18000DD30
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x18000DC00 (RtlIpv4StringToAddressExW.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     iswctype @ 0x1800926B0 (iswctype.c)
 */

LONG __stdcall RtlIpv4StringToAddressW(PCWSTR S, BOOLEAN Strict, LPCWSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v6; // rbx
  int v7; // r15d
  char v8; // r13
  unsigned int v9; // r12d
  WCHAR v10; // si
  unsigned int v11; // ecx
  LONG result; // eax
  __int64 v13; // rbx
  bool v14; // zf
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // ecx
  int v21; // eax
  BOOLEAN v22; // [rsp+20h] [rbp-30h]
  unsigned int v24; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-1Ch]
  unsigned int v26; // [rsp+38h] [rbp-18h]
  unsigned int v27; // [rsp+3Ch] [rbp-14h] BYREF

  v22 = Strict;
  v6 = &v24;
  while ( 2 )
  {
    v7 = 10;
    v8 = 0;
    v9 = 0;
    if ( *S == 48 )
    {
      if ( *++S < 0x80u && (v21 = iswctype(*S, 4u), Strict = v22, v21) )
      {
        v7 = 8;
      }
      else if ( ((*S - 88) & 0xFFDF) != 0 )
      {
        v8 = 1;
      }
      else
      {
        v7 = 16;
        ++S;
      }
    }
    if ( Strict && v7 != 10 )
      goto LABEL_17;
    v10 = *S;
    if ( !*S )
      goto LABEL_15;
    while ( v10 < 0x80u && iswctype(v10, 4u) && v10 - 48 < v7 )
    {
      v11 = v9 * v7 + v10 - 48;
LABEL_10:
      if ( v11 < v9 )
        goto LABEL_17;
      v8 = 1;
      ++S;
      v9 = v11;
      v10 = *S;
      if ( !*S )
      {
        Strict = v22;
        goto LABEL_15;
      }
    }
    if ( v7 == 16 && v10 < 0x80u && iswctype(v10, 0x80u) )
    {
      v11 = v10 + 16 * v9 - (iswctype(v10, 2u) != 0 ? 97 : 65) + 10;
      goto LABEL_10;
    }
    Strict = v22;
LABEL_15:
    if ( *S == 46 )
    {
      if ( v6 >= &v27 )
        goto LABEL_17;
      *v6 = v9;
      ++S;
      ++v6;
      if ( !v8 )
        goto LABEL_17;
      continue;
    }
    break;
  }
  if ( !v8 )
    goto LABEL_17;
  *v6 = v9;
  v13 = ((char *)v6 - (char *)&v24 + 4) >> 2;
  if ( Strict )
  {
    v14 = (_DWORD)v13 == 4;
LABEL_27:
    if ( v14 && v24 <= 0xFF && v25 <= 0xFF && v26 <= 0xFF && v27 <= 0xFF )
    {
      v18 = (unsigned __int8)v27;
      v19 = ((unsigned __int8)v26 | (((v24 << 8) | (unsigned __int8)v25) << 8)) << 8;
      goto LABEL_33;
    }
LABEL_17:
    result = -1073741811;
    *Terminator = S;
  }
  else
  {
    v15 = v13 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v14 = v17 == 1;
          goto LABEL_27;
        }
        if ( v24 > 0xFF || v25 > 0xFF || v26 > 0xFFFF )
          goto LABEL_17;
        v18 = (unsigned __int16)v26;
        v19 = ((v24 << 8) | (unsigned __int8)v25) << 16;
      }
      else
      {
        if ( v24 > 0xFF || v25 > 0xFFFFFF )
          goto LABEL_17;
        v19 = v24 << 24;
        v18 = v25 & 0xFFFFFF;
      }
LABEL_33:
      v20 = v18 | v19;
    }
    else
    {
      v20 = v24;
    }
    *Terminator = S;
    *(_DWORD *)Addr = _byteswap_ulong(v20);
    return 0;
  }
  return result;
}
