/*
 * XREFs of rimPointerTransitionsPolicyUpdateStateAndApply @ 0x1C00E73C4
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00E70E4 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01B61C4 (RIMCmAddContactSuppressionReasons.c)
 */

__int64 __fastcall rimPointerTransitionsPolicyUpdateStateAndApply(__int64 a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // rbx
  __int64 result; // rax

  if ( a3 )
  {
    v3 = a2;
    if ( (a2[605] & 0x1000000) == 0 )
    {
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          a3,
          (_DWORD)gRimLog,
          4,
          1,
          40,
          (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
          *v3);
      }
      result = RIMCmAddContactSuppressionReasons(a1, v3);
      v3[605] |= 0x8000u;
    }
  }
  return result;
}
