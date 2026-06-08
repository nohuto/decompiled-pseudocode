/*
 * XREFs of ValidateAcpiThrottleStates @ 0x1C00380F0
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C004155C (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005484 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0009A08 (WPP_RECORDER_SF_ddd.c)
 *     Validate_PCT_PTC @ 0x1C00397B4 (Validate_PCT_PTC.c)
 */

__int64 __fastcall ValidateAcpiThrottleStates(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  unsigned int v4; // r10d
  _DWORD *v5; // r8
  int v6; // ebx
  int v8; // [rsp+20h] [rbp-28h]
  unsigned int Number; // [rsp+28h] [rbp-20h]
  unsigned int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  *a3 = 0;
  if ( !a1 || !a2 )
    return (unsigned int)-1073741823;
  v4 = 1;
  if ( *a2 > 1 )
  {
    v5 = a2 + 7;
    while ( *(v5 - 1) < a2[5 * v4 - 4] && *v5 <= a2[5 * v4 - 3] )
    {
      ++v4;
      v5 += 5;
      if ( v4 >= *a2 )
        goto LABEL_8;
    }
    *a3 = 2048;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, (__int64)v5, 0x11u, v8);
    return (unsigned int)-1073741823;
  }
LABEL_8:
  if ( a2[1] != 100 )
  {
    *a3 = 2048;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Number = KeGetPcr()->Prcb.Number;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x12u,
        (__int64)&WPP_3fe783ebadc43b57788bf58e82506d17_Traceguids,
        Number);
    }
    return (unsigned int)-1073741823;
  }
  v6 = Validate_PCT_PTC(a1);
  if ( v6 < 0 )
  {
    *a3 = 1024;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = v6;
      v10 = KeGetPcr()->Prcb.Number;
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x13u,
        (__int64)&WPP_3fe783ebadc43b57788bf58e82506d17_Traceguids,
        v10,
        v11);
    }
  }
  return (unsigned int)v6;
}
