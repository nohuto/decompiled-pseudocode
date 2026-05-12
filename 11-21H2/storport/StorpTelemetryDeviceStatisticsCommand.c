/*
 * XREFs of StorpTelemetryDeviceStatisticsCommand @ 0x1C0001424
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0001310 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     SendAtaPassthrough @ 0x1C00014E8 (SendAtaPassthrough.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

__int64 __fastcall StorpTelemetryDeviceStatisticsCommand(__int64 a1, __int64 a2, char a3)
{
  struct _DEVICE_OBJECT *v3; // rcx
  int v6; // edx
  int v8; // [rsp+20h] [rbp-60h]
  int v9; // [rsp+28h] [rbp-58h]
  __int64 v10; // [rsp+40h] [rbp-40h] BYREF
  _DWORD InputBuffer[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp-18h]
  __int16 v15; // [rsp+70h] [rbp-10h]
  char v16; // [rsp+72h] [rbp-Eh]
  char v17; // [rsp+73h] [rbp-Dh]
  int v18; // [rsp+74h] [rbp-Ch]

  v3 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  InputBuffer[1] = 0;
  v12 = 0LL;
  v14 = 0LL;
  LODWORD(v10) = 0;
  v13 = a2;
  InputBuffer[0] = 196656;
  InputBuffer[3] = 10;
  InputBuffer[2] = 512;
  v15 = 256;
  v16 = 4;
  v17 = a3;
  v18 = 3137536;
  v6 = SendAtaPassthrough(v3, InputBuffer, v8, v9, (__int64)&v10);
  if ( v6 >= 0 )
  {
    if ( (v18 & 0x10000) != 0 )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 2) != a3 )
        v6 = -1073741637;
      if ( !*(_WORD *)a2 )
        return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v6;
}
