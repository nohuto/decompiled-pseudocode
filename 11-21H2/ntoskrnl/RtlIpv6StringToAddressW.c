/*
 * XREFs of RtlIpv6StringToAddressW @ 0x140249010
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x140248F70 (RtlIpv6StringToAddressExW.c)
 * Callees:
 *     sub_1403E3820 @ 0x1403E3820 (sub_1403E3820.c)
 *     sub_1403E3CE0 @ 0x1403E3CE0 (sub_1403E3CE0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressW(PCWSTR S, PCWSTR *Terminator, struct in6_addr *Addr)
{
  WCHAR v3; // bx
  char v4; // r10
  struct in6_addr *v5; // r13
  PCWSTR v6; // rdi
  int v7; // r15d
  PCWSTR v8; // r9
  unsigned int v9; // esi
  unsigned int v10; // r14d
  unsigned int v11; // r12d
  unsigned int v12; // ebp
  unsigned int v13; // edx
  __int64 v14; // r9
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // eax
  char v21; // [rsp+20h] [rbp-48h]
  PCWSTR v22; // [rsp+28h] [rbp-40h]
  char v23; // [rsp+70h] [rbp+8h]
  unsigned int v25; // [rsp+88h] [rbp+20h]

  v3 = *S;
  v22 = 0LL;
  v4 = 0;
  v23 = 0;
  v5 = Addr;
  v21 = 0;
  v6 = S;
  v25 = 0;
  v7 = 0;
  v8 = 0LL;
  LOBYTE(Addr) = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( *S )
  {
    while ( v7 != 1 )
    {
      if ( v3 == 58 )
      {
        if ( v10 )
          goto LABEL_63;
        if ( v9 || v6[1] != 58 )
          goto LABEL_8;
        v18 = v13;
        v9 = 2;
        v12 = 1;
        if ( !v13 )
          v4 = 1;
        ++v13;
        v21 = v4;
        v25 = v13;
        *((_WORD *)v5 + v18) = 0;
        ++v6;
        v7 = 2;
        goto LABEL_49;
      }
      if ( v9 > 7 && (v9 > 8 || !v4) || v3 >= 0x80u )
        goto LABEL_8;
      if ( (unsigned int)sub_1403E3CE0(v3, 4LL, Addr, v8) )
      {
        LOBYTE(Addr) = 0;
        v23 = 0;
      }
      else
      {
        if ( !(unsigned int)sub_1403E3CE0(v3, 128LL, Addr, v14) )
          goto LABEL_8;
        if ( v10 )
          goto LABEL_63;
        LOBYTE(Addr) = 1;
        v23 = 1;
      }
      v13 = v25;
      v11 = 1;
      v7 = 1;
      v22 = v6;
      v8 = v6;
LABEL_22:
      v3 = *++v6;
      if ( !*v6 )
        goto LABEL_8;
      v4 = v21;
    }
    if ( v3 < 0x80u )
    {
      if ( (unsigned int)sub_1403E3CE0(v3, 4LL, Addr, v8) )
      {
        ++v11;
        goto LABEL_25;
      }
      if ( (unsigned int)sub_1403E3CE0(v3, 128LL, Addr, v16) )
      {
        ++v11;
        if ( v10 )
        {
          *Terminator = v6;
          goto LABEL_64;
        }
        v13 = v25;
        LOBYTE(Addr) = 1;
        v23 = 1;
        goto LABEL_54;
      }
      v13 = v25;
      LOBYTE(Addr) = v23;
      v8 = v22;
      v4 = v21;
    }
    if ( v3 == 58 )
    {
      if ( v10 )
        goto LABEL_63;
      if ( v9 > 6 && !v4 || v9 > 7 )
        goto LABEL_8;
      if ( v6[1] == 58 )
      {
        if ( v12 )
          goto LABEL_8;
        v17 = 2;
        v12 = v9 + 1;
        v7 = 2;
        ++v6;
      }
      else
      {
        v7 = 0;
        v17 = 1;
      }
      v9 += v17;
    }
    else
    {
      if ( v3 != 46 || (_BYTE)Addr )
        goto LABEL_8;
      if ( v10 > 2 )
      {
LABEL_63:
        *Terminator = v6;
LABEL_64:
        if ( v10 == 3 )
        {
          ++v9;
          goto LABEL_9;
        }
        return -1073741811;
      }
      if ( v9 > 6 && !v4 || v9 > 7 )
        goto LABEL_8;
      v7 = 0;
      ++v10;
    }
LABEL_49:
    if ( !v8 )
      goto LABEL_22;
    if ( !v10 )
    {
      if ( v11 > 4 )
        return -1073741811;
      *((_WORD *)v5 + v25) = __ROR2__(sub_1403E3820(v8, 0LL, 16LL), 8);
      v13 = ++v25;
      goto LABEL_53;
    }
    if ( v11 > 3 )
      return -1073741811;
    v19 = sub_1403E3820(v8, 0LL, 10LL);
    if ( v19 > 0xFF )
      return -1073741811;
    *((_BYTE *)v5 + 2 * v25 + v10 - 1) = v19;
LABEL_25:
    v13 = v25;
LABEL_53:
    LOBYTE(Addr) = v23;
LABEL_54:
    v8 = v22;
    goto LABEL_22;
  }
LABEL_8:
  *Terminator = v6;
  if ( v10 )
    goto LABEL_64;
LABEL_9:
  if ( !v12 && v9 != 7 )
    return -1073741811;
  if ( v7 == 1 )
  {
    if ( v10 )
    {
      if ( v11 > 3 )
        return -1073741811;
      v20 = sub_1403E3820(v22, 0LL, 10LL);
      if ( v20 > 0xFF )
        return -1073741811;
      *((_BYTE *)v5 + 2 * v25 + v10) = v20;
    }
    else
    {
      if ( v11 > 4 )
        return -1073741811;
      *((_WORD *)v5 + v25) = __ROR2__(sub_1403E3820(v22, 0LL, 16LL), 8);
    }
  }
  else
  {
    if ( v7 != 2 )
      return -1073741811;
    *((_WORD *)v5 + v25) = 0;
  }
  if ( v12 )
  {
    memmove((char *)v5 + 2 * (v12 - v9) + 16, (char *)v5 + 2 * v12, 2LL * (v9 - v12));
    memset((char *)v5 + 2 * v12, 0, 2LL * (8 - v9));
  }
  return 0;
}
