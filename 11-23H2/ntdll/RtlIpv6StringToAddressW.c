/*
 * XREFs of RtlIpv6StringToAddressW @ 0x18000DF70
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x18000DD40 (RtlIpv6StringToAddressExW.c)
 * Callees:
 *     iswctype @ 0x180092EB0 (iswctype.c)
 *     wcstol @ 0x1800956D0 (wcstol.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
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
    while ( 1 )
    {
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          if ( v3 >= 0x80u )
            goto LABEL_8;
          if ( iswctype(v3, 4u) )
          {
            ++v12;
          }
          else
          {
            if ( iswctype(v3, 0x80u) )
            {
              ++v12;
              if ( v11 )
              {
                *Terminator = v6;
LABEL_59:
                if ( v11 == 3 )
                {
                  ++v10;
                  goto LABEL_29;
                }
                return -1073741811;
              }
              v14 = v24;
              v9 = 1;
              v22 = 1;
              goto LABEL_20;
            }
            v14 = v24;
            v9 = v22;
            v8 = String;
            v4 = v20;
LABEL_8:
            if ( v3 == 58 )
            {
              if ( v11 )
                goto LABEL_58;
              if ( v10 > 6 && !v4 || v10 > 7 )
                break;
              if ( v6[1] == 58 )
              {
                if ( v13 )
                  break;
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
                break;
              if ( v11 > 2 )
              {
LABEL_58:
                *Terminator = v6;
                goto LABEL_59;
              }
              if ( v10 > 6 && !v4 || v10 > 7 )
                break;
              v7 = 0;
              ++v11;
            }
LABEL_15:
            if ( !v8 )
              goto LABEL_21;
            if ( !v11 )
            {
              if ( v12 > 4 )
                return -1073741811;
              *((_WORD *)Addr + v24) = __ROR2__(wcstol(v8, 0LL, 16), 8);
              v14 = ++v24;
LABEL_19:
              v9 = v22;
LABEL_20:
              v8 = String;
              goto LABEL_21;
            }
            if ( v12 > 3 )
              return -1073741811;
            v17 = wcstol(v8, 0LL, 10);
            if ( v17 > 0xFF )
              return -1073741811;
            *((_BYTE *)Addr + 2 * v24 + v11 - 1) = v17;
          }
          v14 = v24;
          goto LABEL_19;
        }
      }
      else if ( v3 == 58 )
      {
        if ( v11 )
          goto LABEL_58;
        if ( v10 || v6[1] != 58 )
          break;
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
        goto LABEL_15;
      }
      if ( v10 > 7 && (v10 > 8 || !v4) || v3 >= 0x80u )
        break;
      if ( iswctype(v3, 4u) )
      {
        v9 = 0;
        v22 = 0;
      }
      else
      {
        if ( !iswctype(v3, 0x80u) )
          break;
        if ( v11 )
          goto LABEL_58;
        v9 = 1;
        v22 = 1;
      }
      v14 = v24;
      v12 = 1;
      v7 = 1;
      String = (wchar_t *)v6;
      v8 = v6;
LABEL_21:
      v3 = *++v6;
      if ( !*v6 )
        break;
      v4 = v20;
    }
  }
  *Terminator = v6;
  if ( v11 )
    goto LABEL_59;
LABEL_29:
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
    memset_thunk_772440563353939046((char *)Addr + 2 * v13, 0, 2LL * (8 - v10));
  }
  return 0;
}
