/*
 * XREFs of PctGetIntelEsuType @ 0x1C00022C0
 * Callers:
 *     ConfigureIntelEmu @ 0x1C00248C0 (ConfigureIntelEmu.c)
 *     InitEnergyCounters @ 0x1C0024920 (InitEnergyCounters.c)
 *     InitDriver @ 0x1C0047234 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C00036D0 (GetCpuIdInfo.c)
 */

__int64 PctGetIntelEsuType()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rdx
  int v2; // ecx
  int v3; // eax
  unsigned int i; // r8d
  _DWORD *j; // rdx
  __int128 v7; // [rsp+20h] [rbp-69h] BYREF
  _DWORD v8[8]; // [rsp+30h] [rbp-59h] BYREF
  _DWORD v9[32]; // [rsp+50h] [rbp-39h] BYREF

  v8[0] = 55;
  v0 = 2;
  v8[1] = 74;
  v8[2] = 90;
  v7 = 0LL;
  v8[3] = 93;
  v8[4] = 77;
  v8[5] = 76;
  v9[0] = 92;
  v9[1] = 60;
  v9[2] = 69;
  v9[3] = 70;
  v9[4] = 63;
  v9[5] = 86;
  v9[6] = 79;
  v9[7] = 61;
  v9[8] = 71;
  v9[9] = 85;
  v9[10] = 87;
  v9[11] = 133;
  v9[12] = 42;
  v9[13] = 45;
  v9[14] = 58;
  v9[15] = 62;
  v9[16] = 78;
  v9[17] = 94;
  v9[18] = 142;
  v9[19] = 158;
  v9[20] = 125;
  v9[21] = 126;
  v9[22] = 138;
  v9[23] = 140;
  v9[24] = 141;
  v9[25] = 165;
  v9[26] = 166;
  v9[27] = 167;
  v9[28] = 151;
  v9[29] = 154;
  GetCpuIdInfo(1LL, &v7);
  if ( (BYTE1(v7) & 0xF) == 6 )
  {
    v1 = v8;
    v2 = (unsigned __int128)(v7 & 0xF0 | ((unsigned int)v7 >> 8) & 0xF00) >> 4;
    v3 = 0;
    for ( i = 0; i < 6; ++i )
    {
      if ( v2 == *v1 )
        return 0;
      ++v1;
    }
    for ( j = v9; v2 != *j; ++j )
    {
      if ( (unsigned int)++v3 >= 0x1E )
        return v0;
    }
    return 1;
  }
  return v0;
}
