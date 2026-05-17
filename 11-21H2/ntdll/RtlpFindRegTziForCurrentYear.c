/*
 * XREFs of RtlpFindRegTziForCurrentYear @ 0x180009B34
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x180009710 (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x180009D1C (RtlpQueryRegistryValues.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _itow_s @ 0x18009E140 (_itow_s.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall RtlpFindRegTziForCurrentYear(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // esi
  int RegistryValues; // ebx
  __int16 v7; // ax
  char v9; // [rsp+28h] [rbp-D8h]
  int v10; // [rsp+28h] [rbp-D8h]
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD v13[28]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t Buffer[8]; // [rsp+120h] [rbp+20h] BYREF

  v3 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  RegistryValues = -1073741811;
  if ( !itow_s(a3, Buffer, 5uLL, 10) )
  {
    memset(v13, 0, sizeof(v13));
    v9 = 1;
    v13[2] = L"FirstEntry";
    LODWORD(v13[4]) = 0x4000000;
    v13[3] = &v12;
    LODWORD(v13[11]) = 0x4000000;
    v13[9] = L"LastEntry";
    LODWORD(v13[1]) = 292;
    v13[10] = &v11;
    v12 = -4;
    v13[16] = Buffer;
    LODWORD(v13[8]) = 292;
    v11 = -4;
    LODWORD(v13[15]) = 288;
    v13[17] = a1;
    LODWORD(v13[18]) = 50331648;
    *(_DWORD *)a1 = -44;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, a2, v13, 0LL, 0LL, v9);
    if ( RegistryValues >= 0 )
    {
      if ( v11 != -4 )
      {
        v7 = v12;
        if ( v12 != -4 )
        {
          if ( v3 <= v11 && v3 >= v12 )
            return (unsigned int)RegistryValues;
          if ( v3 > v11 )
            v7 = v11;
          if ( !itow_s(v7, Buffer, 5uLL, 10) )
          {
            LOBYTE(v10) = 1;
            LODWORD(v13[15]) = 292;
            LODWORD(v13[18]) = 50331648;
            *(_DWORD *)a1 = -44;
            return (unsigned int)RtlpQueryRegistryValues(0x40000000LL, a2, &v13[14], 0LL, 0LL, v10);
          }
        }
      }
      return (unsigned int)-1073741762;
    }
  }
  return (unsigned int)RegistryValues;
}
