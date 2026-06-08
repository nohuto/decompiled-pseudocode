/*
 * XREFs of Validate_PCT_PTC @ 0x1C00382D8
 * Callers:
 *     ValidateAcpi2PStates @ 0x1C0036954 (ValidateAcpi2PStates.c)
 *     ValidateAcpiThrottleStates @ 0x1C0036C18 (ValidateAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000414C (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall Validate_PCT_PTC(unsigned __int8 *a1)
{
  unsigned int v1; // ebx
  int v2; // edx

  v1 = -1073741637;
  if ( !*((_QWORD *)a1 + 2) || *a1 == a1[12] )
  {
    v2 = *a1;
    if ( v2 == 1 || v2 == 127 )
    {
      return 0;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0xBu,
        (__int64)&WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids,
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
      (__int64)&WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids,
      *a1,
      a1[12]);
  }
  return v1;
}
