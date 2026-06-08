/*
 * XREFs of Validate_PCT_PTC @ 0x1C003074C
 * Callers:
 *     ValidateAcpi2PStates @ 0x1C002E4E8 (ValidateAcpi2PStates.c)
 *     ValidateAcpiThrottleStates @ 0x1C002ECE8 (ValidateAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005818 (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall Validate_PCT_PTC(unsigned __int8 *a1)
{
  unsigned int v1; // ebx
  int v2; // edx

  v1 = -1073741637;
  if ( !*((_QWORD *)a1 + 2) || *a1 == a1[12] )
  {
    v2 = *a1;
    if ( v2 && (v2 == 1 || v2 == 127) )
    {
      return 0;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0xBu,
        (__int64)&WPP_3fe783ebadc43b57788bf58e82506d17_Traceguids,
        v2);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0xAu,
      (__int64)&WPP_3fe783ebadc43b57788bf58e82506d17_Traceguids,
      *a1,
      a1[12]);
  }
  return v1;
}
