/*
 * XREFs of rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01A7D40
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00E2D30 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     EtwTraceTouchPadConfidenceCleared @ 0x1C013B2E0 (EtwTraceTouchPadConfidenceCleared.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01AFF90 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01B0964 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C01B0A84 (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimConfidenceBitPolicyUpdateStateAndApply(__int64 a1, int *a2, int a3)
{
  __int64 result; // rax
  int IsContactDeliveringPointerData; // eax
  BOOL v8; // edx
  PDEVICE_OBJECT v9; // rcx
  char v10; // dl
  char v11; // r8
  unsigned __int16 v12; // r9

  if ( a3 || (result = *(unsigned int *)(a1 + 360), (result & 4) != 0) && (a2[611] & 0x4000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) == 7 && (a2[2] & 0x10) == 0 )
    {
      IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(a2);
      v8 = (a2[611] & 4) != 0 && (a2[671] & 4) == 0;
      EtwTraceTouchPadConfidenceCleared(*a2, v8, IsContactDeliveringPointerData);
    }
    if ( a3 )
    {
      v9 = WPP_GLOBAL_Control;
      v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_29;
      v12 = 41;
    }
    else
    {
      v9 = WPP_GLOBAL_Control;
      v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_29;
      v12 = 42;
    }
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)v9->AttachedDevice,
      v10,
      v11,
      (__int64)gRimLog,
      4u,
      1u,
      v12,
      (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
      *a2);
LABEL_29:
    result = RIMCmAddContactSuppressionReasons(a1, a2);
    a2[611] |= 0x8000u;
  }
  if ( *(_DWORD *)(a1 + 24) == 7 )
  {
    result = (unsigned int)a2[2];
    if ( (result & 0x10) != 0 )
    {
      result = a2[611] & 0x1004000;
      if ( (_DWORD)result == 16793600 )
      {
        if ( (a2[8] & 1) == 0 )
          return RIMCmRemoveContactSuppressionReasons(a1, a2, 16LL);
        result = *(unsigned int *)(a1 + 360);
        if ( (result & 8) != 0 )
          return RIMCmRemoveContactSuppressionReasons(a1, a2, 16LL);
      }
    }
  }
  return result;
}
