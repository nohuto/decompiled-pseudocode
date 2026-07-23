/*
 * XREFs of sub_1406F1774 @ 0x1406F1774
 * Callers:
 *     sub_1406F120C @ 0x1406F120C (sub_1406F120C.c)
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 *     sub_140864D14 @ 0x140864D14 (sub_140864D14.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x1409BA6A0 (RtlQueryDynamicTimeZoneInformation.c)
 *     RtlQueryTimeZoneInformation @ 0x1409BA6C0 (RtlQueryTimeZoneInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F1A04 @ 0x1406F1A04 (sub_1406F1A04.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 */

__int64 __fastcall sub_1406F1774(char *a1, size_t Size)
{
  unsigned int v2; // esi
  __int64 result; // rax
  int v5; // edi
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v8[2]; // [rsp+40h] [rbp-C0h] BYREF
  char *v9; // [rsp+48h] [rbp-B8h]
  _DWORD v10[2]; // [rsp+50h] [rbp-B0h] BYREF
  char *v11; // [rsp+58h] [rbp-A8h]
  __int128 v12; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v13[70]; // [rsp+70h] [rbp-90h] BYREF

  v2 = Size;
  Handle = 0LL;
  v8[1] = 0;
  v10[1] = 0;
  v6 = 0;
  v12 = 0LL;
  result = sub_1406F1A04(0LL, &Handle);
  if ( (int)result >= 0 )
  {
    memset(a1, 0, v2);
    memset(v13, 0, sizeof(v13));
    v8[0] = 0x400000;
    LODWORD(v13[1]) = 288;
    v13[2] = L"Bias";
    v9 = a1 + 4;
    v13[9] = L"StandardName";
    v13[10] = v8;
    v13[3] = a1;
    v13[16] = L"StandardBias";
    v13[17] = a1 + 84;
    v13[23] = L"StandardStart";
    v13[24] = a1 + 68;
    *((_DWORD *)a1 + 17) = -16;
    v11 = a1 + 88;
    v13[30] = L"DaylightName";
    v13[31] = v10;
    v13[37] = L"DaylightBias";
    v13[38] = a1 + 168;
    v13[44] = L"DaylightStart";
    v10[0] = 0x400000;
    v13[45] = a1 + 152;
    *((_DWORD *)a1 + 38) = -16;
    LODWORD(v13[4]) = 0x4000000;
    LODWORD(v13[8]) = 288;
    LODWORD(v13[11]) = 0x1000000;
    LODWORD(v13[15]) = 288;
    LODWORD(v13[18]) = 0x4000000;
    LODWORD(v13[22]) = 288;
    LODWORD(v13[25]) = 50331648;
    LODWORD(v13[29]) = 288;
    LODWORD(v13[32]) = 0x1000000;
    LODWORD(v13[36]) = 288;
    LODWORD(v13[39]) = 0x4000000;
    LODWORD(v13[43]) = 288;
    LODWORD(v13[46]) = 50331648;
    if ( v2 >= 0x1B0 )
    {
      LODWORD(v12) = 0x1000000;
      *((_QWORD *)&v12 + 1) = a1 + 172;
      v13[49] = &sub_140862C90;
      v13[51] = L"TimeZoneKeyName";
      v13[52] = &v12;
      v13[58] = L"DynamicDaylightTimeDisabled";
      v13[59] = &v6;
      LODWORD(v13[53]) = 0;
      LODWORD(v13[57]) = 288;
      LODWORD(v13[60]) = 0x4000000;
    }
    v5 = sub_140781F40(0x40000000LL, Handle, v13, 0LL);
    if ( v5 >= 0 && v2 >= 0x1B0 )
      a1[428] = v6 != 0;
    ZwClose(Handle);
    return (unsigned int)v5;
  }
  return result;
}
