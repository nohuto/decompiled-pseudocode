/*
 * XREFs of RegisterPepDevice @ 0x1C003B98C
 * Callers:
 *     InitPep @ 0x1C003B258 (InitPep.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004990 (WPP_RECORDER_SF_d.c)
 *     memset @ 0x1C000C880 (memset.c)
 */

__int64 __fastcall RegisterPepDevice(__int64 a1)
{
  bool v2; // zf
  int v3; // ebx
  _QWORD *v4; // rdi
  _QWORD v6[12]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v7; // [rsp+90h] [rbp+37h] BYREF
  __int64 v8; // [rsp+A0h] [rbp+47h]

  v7 = 0LL;
  memset(v6, 0, sizeof(v6));
  v8 = 0xFFFFFFFFLL;
  v2 = *(_DWORD *)(a1 + 80) == 0;
  v6[0] = 0x100000001LL;
  LODWORD(v6[10]) = 1;
  v6[11] = &v7;
  v6[6] = PepDevicePowerControlCallback;
  v6[7] = a1;
  if ( v2 || !byte_1C0012DC0 )
  {
    v4 = (_QWORD *)(a1 + 1120);
    v3 = PoFxRegisterDevice(*(_QWORD *)a1, v6, a1 + 1120);
    if ( v3 >= 0 )
    {
      PoFxActivateComponent(*v4, 0LL, 0LL);
      PoFxStartDevicePowerManagement(*v4);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          4u,
          0xFu,
          (__int64)&WPP_d8fc40cfe1e5329dd388ef68cabc8a2c_Traceguids,
          v3,
          v6[0]);
      *v4 = 0LL;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v3;
}
