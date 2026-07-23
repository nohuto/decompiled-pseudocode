/*
 * XREFs of RtlIpv6StringToAddressExW @ 0x140248F70
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv6StringToAddressW @ 0x140249010 (RtlIpv6StringToAddressW.c)
 *     sub_1403E3CE0 @ 0x1403E3CE0 (sub_1403E3CE0.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressExW(
        PCWSTR AddressString,
        struct in6_addr *Address,
        PULONG ScopeId,
        PUSHORT Port)
{
  WCHAR v7; // r15
  const WCHAR *v8; // rcx
  unsigned __int16 v9; // si
  ULONG v10; // r14d
  bool v11; // bp
  __int64 v12; // r8
  NTSTATUS result; // eax
  PCWSTR v14; // rbx
  WCHAR v15; // di
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  int v19; // eax
  unsigned __int16 v20; // r15
  PCWSTR v21; // rcx
  __int16 v22; // ax
  WCHAR v23; // di
  __int64 v24; // r8
  __int16 v25; // si
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  bool v30; // zf
  __int16 v31; // ax
  PCWSTR v32; // [rsp+50h] [rbp+8h] BYREF

  v32 = 0LL;
  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v7 = *AddressString;
  v8 = AddressString + 1;
  v9 = 0;
  if ( v7 != 91 )
    v8 = AddressString;
  v10 = 0;
  v11 = v7 == 91;
  if ( RtlIpv6StringToAddressW(v8, &v32, Address) < 0 )
    return -1073741811;
  v14 = v32;
  if ( *v32 == 37 )
  {
    v14 = v32 + 1;
    v15 = v32[1];
    if ( v15 >= 0x80u || !(unsigned int)sub_1403E3CE0(v15, 4LL, v12, 128LL) )
      return -1073741811;
    if ( v15 )
    {
      while ( v15 != 93 )
      {
        if ( v15 >= 0x80u )
          return -1073741811;
        v18 = sub_1403E3CE0(v15, 4LL, v16, v17);
        v16 = 0LL;
        if ( !v18 || v15 + 2 * (5 * (unsigned __int64)v10 - 24) > 0xFFFFFFFF )
          return -1073741811;
        ++v14;
        v19 = v15;
        v15 = *v14;
        v10 = v19 + 2 * (5 * v10 - 24);
        if ( !*v14 )
          goto LABEL_40;
      }
    }
  }
  if ( *v14 == 93 )
  {
    if ( v7 != 91 )
      return -1073741811;
    ++v14;
    v11 = 0;
    if ( *v14 == 58 )
    {
      ++v14;
      v20 = 10;
      if ( *v14 == 48 )
      {
        v21 = v14 + 1;
        v20 = 8;
        v22 = v14[1] - 88;
        ++v14;
        if ( (v22 & 0xFFDF) == 0 )
        {
          v20 = 16;
          v14 = v21 + 1;
        }
      }
      v23 = *v14;
      v24 = 0LL;
      if ( *v14 )
      {
        while ( 1 )
        {
          if ( v23 < 0x80u && (unsigned int)sub_1403E3CE0(v23, 4LL, v24, 128LL) && v23 - 48 < v20 )
          {
            if ( v23 + v20 * (unsigned int)v9 - 48 > 0xFFFF )
              return -1073741811;
            v25 = v9 * v20 - 48;
          }
          else
          {
            if ( v20 != 16
              || v23 >= 0x80u
              || !(unsigned int)sub_1403E3CE0(v23, 128LL, v24, 128LL)
              || v23 + 16 * v9 - ((unsigned int)sub_1403E3CE0(v23, 2LL, v26, v27) != 0 ? 97 : 65) + 10 > 0xFFFFu )
            {
              return -1073741811;
            }
            v25 = 16 * v9;
            v30 = (unsigned int)sub_1403E3CE0(v23, 2LL, v28, v29) == 0;
            v31 = 97;
            if ( v30 )
              v31 = 65;
            v23 = v23 - v31 + 10;
          }
          ++v14;
          v9 = v23 + v25;
          v23 = *v14;
          if ( !*v14 )
            goto LABEL_42;
        }
      }
    }
  }
LABEL_40:
  if ( *v14 )
    return -1073741811;
  v9 = 0;
  if ( v11 )
    return -1073741811;
LABEL_42:
  *Port = __ROR2__(v9, 8);
  result = 0;
  *ScopeId = v10;
  return result;
}
