/*
 * XREFs of VslpIumPhase4Initialize @ 0x1403DCCD8
 * Callers:
 *     VslInitSystem @ 0x140B2E564 (VslInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PoDisableSleepStates @ 0x14098C600 (PoDisableSleepStates.c)
 *     VslpIumInitializeTelemetry @ 0x140B2E584 (VslpIumInitializeTelemetry.c)
 */

__int64 VslpIumPhase4Initialize()
{
  __int64 result; // rax
  _BYTE v1[16]; // [rsp+30h] [rbp-98h] BYREF
  _DWORD v2[28]; // [rsp+40h] [rbp-88h] BYREF

  memset(v2, 0, 0x68uLL);
  result = VslpIumInitializeTelemetry();
  if ( VslVsmEnabled )
  {
    result = VslpEnterIumSecureMode(2u, 1, 0, (__int64)v2);
    if ( (int)result < 0 )
      KeBugCheckEx(0x6Fu, (int)result, 3uLL, 0LL, 0LL);
    if ( v2[4] < 0 )
      return PoDisableSleepStates(1LL, 8LL, v1);
  }
  return result;
}
