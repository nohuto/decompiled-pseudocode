/*
 * XREFs of ValidateAcpiThrottleStates @ 0x1C002ECE8
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C0036288 (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005818 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0007998 (WPP_RECORDER_SF_ddd.c)
 *     Validate_PCT_PTC @ 0x1C003074C (Validate_PCT_PTC.c)
 */

__int64 __fastcall ValidateAcpiThrottleStates(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  unsigned int i; // r10d
  int v5; // ebx
  int v7; // [rsp+20h] [rbp-28h]
  unsigned int Number; // [rsp+28h] [rbp-20h]
  unsigned int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  *a3 = 0;
  if ( !a1 || !a2 )
    return (unsigned int)-1073741823;
  for ( i = 1; i < *a2; ++i )
  {
    if ( a2[5 * i + 1] >= a2[5 * i - 4] || a2[5 * i + 2] > a2[5 * i - 3] )
    {
      *a3 = 2048;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, a1, 0x11u, v7);
      return (unsigned int)-1073741823;
    }
  }
  if ( a2[1] != 100 )
  {
    *a3 = 2048;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Number = KeGetPcr()->Prcb.Number;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x12u,
        (__int64)&WPP_3fe783ebadc43b57788bf58e82506d17_Traceguids,
        Number);
    }
    return (unsigned int)-1073741823;
  }
  v5 = Validate_PCT_PTC(a1);
  if ( v5 < 0 )
  {
    *a3 = 1024;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = v5;
      v9 = KeGetPcr()->Prcb.Number;
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x13u,
        (__int64)&WPP_3fe783ebadc43b57788bf58e82506d17_Traceguids,
        v9,
        v10);
    }
  }
  return (unsigned int)v5;
}
