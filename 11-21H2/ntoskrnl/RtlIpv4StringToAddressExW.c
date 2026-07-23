/*
 * XREFs of RtlIpv4StringToAddressExW @ 0x14024C9F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv4StringToAddressW @ 0x14024CA70 (RtlIpv4StringToAddressW.c)
 *     sub_1403E3CE0 @ 0x1403E3CE0 (sub_1403E3CE0.c)
 */

NTSTATUS __stdcall RtlIpv4StringToAddressExW(
        PCWSTR AddressString,
        BOOLEAN Strict,
        struct in_addr *Address,
        PUSHORT Port)
{
  __int64 v5; // r8
  __int64 v6; // r9
  LPCWSTR v8; // rsi
  unsigned __int16 v9; // bp
  unsigned __int16 v10; // bx
  WCHAR v11; // r14
  WCHAR v12; // di
  __int16 v13; // bx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // zf
  __int16 v19; // ax
  LPCWSTR v20; // [rsp+50h] [rbp+8h] BYREF

  v20 = 0LL;
  if ( !AddressString || !Address || !Port || RtlIpv4StringToAddressW(AddressString, Strict, &v20, Address) < 0 )
    return -1073741811;
  if ( *v20 == 58 )
  {
    v8 = v20 + 1;
    v9 = 10;
    v10 = 0;
    if ( v20[1] == 48 )
    {
      v9 = 8;
      v8 = v20 + 2;
      if ( ((v20[2] - 88) & 0xFFDF) == 0 )
      {
        v9 = 16;
        v8 = v20 + 3;
      }
    }
    v11 = *v8;
    v12 = *v8;
    if ( !*v8 )
      return -1073741811;
    do
    {
      ++v8;
      if ( v12 < 0x80u && (unsigned int)sub_1403E3CE0(v12, 4LL, v5, v6) && (unsigned __int16)(v12 - 48) < v9 )
      {
        if ( v12 + v10 * (unsigned int)v9 - 48 > 0xFFFF )
          return -1073741811;
        v13 = v10 * v9 - 48;
      }
      else
      {
        if ( v9 != 16
          || v12 >= 0x80u
          || !(unsigned int)sub_1403E3CE0(v12, 128LL, v5, v6)
          || v12 + 16 * v10 - ((unsigned int)sub_1403E3CE0(v12, 2LL, v14, v15) != 0 ? 97 : 65) + 10 > 0xFFFFu )
        {
          return -1073741811;
        }
        v13 = 16 * v10;
        v18 = (unsigned int)sub_1403E3CE0(v12, 2LL, v16, v17) == 0;
        v19 = 97;
        if ( v18 )
          v19 = 65;
        v12 = v12 - v19 + 10;
      }
      v10 = v12 + v13;
      v12 = *v8;
    }
    while ( *v8 );
    if ( !v11 )
      return -1073741811;
  }
  else
  {
    if ( *v20 )
      return -1073741811;
    v10 = 0;
  }
  *Port = __ROR2__(v10, 8);
  return 0;
}
