/*
 * XREFs of RtlIpv6StringToAddressW @ 0x180032610
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x1800323E0 (RtlIpv6StringToAddressExW.c)
 * Callees:
 *     iswctype @ 0x1800976B0 (iswctype.c)
 *     wcstol @ 0x180099DF0 (wcstol.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

LONG __stdcall RtlIpv6StringToAddressW(PCWSTR S, PCWSTR *Terminator, struct in6_addr *Addr)
{
  wint_t v3; // bx
  char v4; // r10
  PCWSTR v6; // rdi
  int v7; // r15d
  const wchar_t *v8; // r9
  char v9; // r8
  unsigned int v10; // esi
  unsigned int v11; // r14d
  unsigned int v12; // r12d
  unsigned int v13; // ebp
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // eax
  char v20; // [rsp+20h] [rbp-48h]
  wchar_t *String; // [rsp+28h] [rbp-40h]
  char v22; // [rsp+70h] [rbp+8h]
  unsigned int v24; // [rsp+88h] [rbp+20h]

  v3 = *S;
  String = 0LL;
  v4 = 0;
  v22 = 0;
  v20 = 0;
  v6 = S;
  v24 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  if ( *S )
  {
    while ( v7 != 1 )
    {
      if ( v3 == 58 )
      {
        if ( v11 )
          goto LABEL_57;
        if ( v10 || v6[1] != 58 )
          goto LABEL_23;
        v18 = v14;
        v10 = 2;
        v13 = 1;
        if ( !v14 )
          v4 = 1;
        ++v14;
        v20 = v4;
        v24 = v14;
        *((_WORD *)Addr + v18) = 0;
        ++v6;
        v7 = 2;
        goto LABEL_14;
      }
      if ( v10 > 7 && (v10 > 8 || !v4) || v3 >= 0x80u )
        goto LABEL_23;
      if ( iswctype(v3, 4u) )
      {
        v9 = 0;
        v22 = 0;
      }
      else
      {
        if ( !iswctype(v3, 0x80u) )
          goto LABEL_23;
        if ( v11 )
          goto LABEL_57;
        v9 = 1;
        v22 = 1;
      }
      v14 = v24;
      v12 = 1;
      v7 = 1;
      String = (wchar_t *)v6;
      v8 = v6;
LABEL_31:
      v3 = *++v6;
      if ( !*v6 )
        goto LABEL_23;
      v4 = v20;
    }
    if ( v3 < 0x80u )
    {
      if ( iswctype(v3, 4u) )
      {
        ++v12;
        goto LABEL_28;
      }
      if ( iswctype(v3, 0x80u) )
      {
        ++v12;
        if ( v11 )
        {
          *Terminator = v6;
LABEL_58:
          if ( v11 == 3 )
          {
            ++v10;
            goto LABEL_24;
          }
          return -1073741811;
        }
        v14 = v24;
        v9 = 1;
        v22 = 1;
        goto LABEL_30;
      }
      v14 = v24;
      v9 = v22;
      v8 = String;
      v4 = v20;
    }
    if ( v3 == 58 )
    {
      if ( v11 )
        goto LABEL_57;
      if ( v10 > 6 && !v4 || v10 > 7 )
        goto LABEL_23;
      if ( v6[1] == 58 )
      {
        if ( v13 )
          goto LABEL_23;
        v15 = 2;
        v13 = v10 + 1;
        v7 = 2;
        ++v6;
      }
      else
      {
        v7 = 0;
        v15 = 1;
      }
      v10 += v15;
    }
    else
    {
      if ( v3 != 46 || v9 )
        goto LABEL_23;
      if ( v11 > 2 )
      {
LABEL_57:
        *Terminator = v6;
        goto LABEL_58;
      }
      if ( v10 > 6 && !v4 || v10 > 7 )
        goto LABEL_23;
      v7 = 0;
      ++v11;
    }
LABEL_14:
    if ( !v8 )
      goto LABEL_31;
    if ( !v11 )
    {
      if ( v12 > 4 )
        return -1073741811;
      *((_WORD *)Addr + v24) = __ROR2__(wcstol(v8, 0LL, 16), 8);
      v14 = ++v24;
      goto LABEL_29;
    }
    if ( v12 > 3 )
      return -1073741811;
    v17 = wcstol(v8, 0LL, 10);
    if ( v17 > 0xFF )
      return -1073741811;
    *((_BYTE *)Addr + 2 * v24 + v11 - 1) = v17;
LABEL_28:
    v14 = v24;
LABEL_29:
    v9 = v22;
LABEL_30:
    v8 = String;
    goto LABEL_31;
  }
LABEL_23:
  *Terminator = v6;
  if ( v11 )
    goto LABEL_58;
LABEL_24:
  if ( !v13 && v10 != 7 )
    return -1073741811;
  if ( v7 == 1 )
  {
    if ( v11 )
    {
      if ( v12 > 3 )
        return -1073741811;
      v19 = wcstol(String, 0LL, 10);
      if ( v19 > 0xFF )
        return -1073741811;
      *((_BYTE *)Addr + 2 * v24 + v11) = v19;
    }
    else
    {
      if ( v12 > 4 )
        return -1073741811;
      *((_WORD *)Addr + v24) = __ROR2__(wcstol(String, 0LL, 16), 8);
    }
  }
  else
  {
    if ( v7 != 2 )
      return -1073741811;
    *((_WORD *)Addr + v24) = 0;
  }
  if ( v13 )
  {
    memmove((char *)Addr + 2 * (v13 - v10) + 16, (char *)Addr + 2 * v13, 2LL * (v10 - v13));
    memset((char *)Addr + 2 * v13, 0, 2LL * (8 - v10));
  }
  return 0;
}
