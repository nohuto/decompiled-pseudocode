/*
 * XREFs of PopSetDevicesSystemState @ 0x140AA7440
 * Callers:
 *     PopGracefulShutdown @ 0x140AA0A60 (PopGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     PoBroadcastSystemState @ 0x140AA6A68 (PoBroadcastSystemState.c)
 */

__int64 __fastcall PopSetDevicesSystemState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  _DWORD v6[6]; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+38h] [rbp-20h]
  char v8; // [rsp+39h] [rbp-1Fh]
  char v9; // [rsp+3Ah] [rbp-1Eh]
  char v10; // [rsp+3Bh] [rbp-1Dh]

  v8 = byte_140C3D0DD;
  v7 = byte_140C3D0C2;
  v9 = byte_140C3D0DC;
  v6[0] = dword_140C3D0EC;
  v6[1] = dword_140C3D0E8;
  v4 = dword_140C3D0E0;
  if ( (dword_140C3D0CC & 8) != 0 )
    v4 = 6;
  v6[5] = dword_140C3D0CC;
  v6[2] = v4;
  v6[3] = dword_140C3D0E4;
  v6[4] = qword_140C3D0C4;
  v10 = 0;
  return PoBroadcastSystemState((__int64)v6, 6LL, a3, a4);
}
