/*
 * XREFs of InitAcpi3ThrottleStates @ 0x1C0035DC0
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C0036288 (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     AcpiEval_PCT_PTC @ 0x1C0027750 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_TSS @ 0x1C0028418 (AcpiEval_TSS.c)
 */

__int64 __fastcall InitAcpi3ThrottleStates(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+28h] [rbp-10h]

  v2 = 0;
  v3 = AcpiEval_PCT_PTC(a1, 1129599071, a1 + 480);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0x13u,
          (__int64)&WPP_be6170989df535582dbbacf86aaceb18_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x14u,
        (__int64)&WPP_be6170989df535582dbbacf86aaceb18_Traceguids,
        v3);
    }
    v2 = v4;
  }
  v5 = AcpiEval_TSS(a1, (_QWORD *)(a1 + 504));
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0x15u,
          (__int64)&WPP_be6170989df535582dbbacf86aaceb18_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = v5;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x16u,
        (__int64)&WPP_be6170989df535582dbbacf86aaceb18_Traceguids,
        v8);
    }
    return v6;
  }
  return v2;
}
