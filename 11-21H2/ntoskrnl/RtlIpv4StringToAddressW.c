/*
 * XREFs of RtlIpv4StringToAddressW @ 0x14024CA70
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x14024C9F0 (RtlIpv4StringToAddressExW.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403E3CE0 @ 0x1403E3CE0 (sub_1403E3CE0.c)
 */

NTSTATUS __stdcall RtlIpv4StringToAddressW(PCWSTR S, BOOLEAN Strict, LPCWSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v6; // rbx
  __int64 v7; // r9
  int v8; // r15d
  char v9; // r13
  unsigned int v10; // r12d
  WCHAR v11; // si
  NTSTATUS result; // eax
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // r9
  __int64 v17; // rbx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // ecx
  BOOLEAN v24; // [rsp+20h] [rbp-30h]
  unsigned int v26; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-1Ch]
  unsigned int v28; // [rsp+38h] [rbp-18h]
  unsigned int v29; // [rsp+3Ch] [rbp-14h] BYREF

  v24 = Strict;
  v6 = &v26;
  v7 = 2LL;
  while ( 1 )
  {
    v8 = 10;
    v9 = 0;
    v10 = 0;
    if ( *S == 48 )
    {
      v13 = *++S;
      if ( (unsigned __int16)v13 < 0x80u )
      {
        v14 = sub_1403E3CE0(v13, 4LL, 0LL, 2LL);
        Strict = v24;
        if ( v14 )
        {
          v8 = 8;
          goto LABEL_3;
        }
        v7 = 2LL;
      }
      if ( ((*S - 88) & 0xFFDF) != 0 )
      {
        v9 = 1;
      }
      else
      {
        v8 = 16;
        ++S;
      }
    }
LABEL_3:
    if ( Strict && v8 != 10 )
      goto LABEL_13;
    v11 = *S;
    if ( *S )
    {
      do
      {
        if ( v11 < 0x80u && (unsigned int)sub_1403E3CE0(v11, 4LL, 0LL, v7) && v11 - 48 < v8 )
        {
          v15 = v10 * v8 + v11 - 48;
        }
        else
        {
          if ( v8 != 16 || v11 >= 0x80u || !(unsigned int)sub_1403E3CE0(v11, 128LL, 0LL, v7) )
          {
            Strict = v24;
            goto LABEL_10;
          }
          v15 = v11 + 16 * v10 - ((unsigned int)sub_1403E3CE0(v11, 2LL, 0LL, v16) != 0 ? 97 : 65) + 10;
        }
        if ( v15 < v10 )
          goto LABEL_13;
        v7 = 2LL;
        v9 = 1;
        ++S;
        v10 = v15;
        v11 = *S;
      }
      while ( *S );
      Strict = v24;
    }
    else
    {
LABEL_10:
      v7 = 2LL;
    }
    if ( *S != 46 )
      break;
    if ( v6 < &v29 )
    {
      *v6 = v10;
      ++S;
      ++v6;
      if ( v9 )
        continue;
    }
    goto LABEL_13;
  }
  if ( !v9 )
  {
LABEL_13:
    result = -1073741811;
    *Terminator = S;
    return result;
  }
  *v6 = v10;
  v17 = ((char *)v6 - (char *)&v26 + 4) >> 2;
  if ( Strict )
  {
    if ( (_DWORD)v17 != 4 )
      goto LABEL_13;
    goto LABEL_40;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 != 1 )
          goto LABEL_13;
LABEL_40:
        if ( v26 > 0xFF || v27 > 0xFF || v28 > 0xFF || v29 > 0xFF )
          goto LABEL_13;
        v21 = (unsigned __int8)v29;
        v22 = ((unsigned __int8)v28 | (((v26 << 8) | (unsigned __int8)v27) << 8)) << 8;
      }
      else
      {
        if ( v26 > 0xFF || v27 > 0xFF || v28 > 0xFFFF )
          goto LABEL_13;
        v21 = (unsigned __int16)v28;
        v22 = ((v26 << 8) | (unsigned __int8)v27) << 16;
      }
    }
    else
    {
      if ( v26 > 0xFF || v27 > 0xFFFFFF )
        goto LABEL_13;
      v22 = v26 << 24;
      v21 = v27 & 0xFFFFFF;
    }
    v23 = v21 | v22;
  }
  else
  {
    v23 = v26;
  }
  *Terminator = S;
  *(_DWORD *)Addr = _byteswap_ulong(v23);
  return 0;
}
