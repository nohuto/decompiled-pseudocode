/*
 * XREFs of PoRegisterSystemState @ 0x14058E190
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 *     PopPowerRequestCreateCommon @ 0x14032C008 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x14032D55C (PoDestroyReasonContext.c)
 *     PopGetLegacyPowerRequestFlags @ 0x14032F088 (PopGetLegacyPowerRequestFlags.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14032F0DC (PopApplyLegacyPowerRequestFlags.c)
 *     PoSetSystemState @ 0x14058E260 (PoSetSystemState.c)
 *     PopDiagTraceRegisterSystemState @ 0x1405949E4 (PopDiagTraceRegisterSystemState.c)
 */

PVOID __stdcall PoRegisterSystemState(PVOID StateHandle, EXECUTION_STATE Flags)
{
  _DWORD *v2; // rbx
  int v5; // eax
  _QWORD *v6; // rsi
  int v7; // eax
  char LegacyPowerRequestFlags; // al
  char v9; // dl
  _DWORD *v11; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  v2 = 0LL;
  if ( (Flags & 0x7FFFFFF8) == 0 )
  {
    if ( (int)Flags <= 0 )
    {
      PopDiagTraceRegisterSystemState(Flags, StateHandle);
      v2 = StateHandle;
      v11 = StateHandle;
      if ( StateHandle
        || (v5 = PoCaptureReasonContext(0LL, 0, 0LL, 1, 0LL, (__int64 *)&P), v6 = P, v5 >= 0)
        && (v7 = PopPowerRequestCreateCommon(P, 0, &v11), v2 = v11, v7 >= 0) )
      {
        LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(v2, Flags, 0LL);
        PopApplyLegacyPowerRequestFlags(v2, v9, LegacyPowerRequestFlags);
      }
      else if ( v6 )
      {
        PoDestroyReasonContext(v6);
      }
    }
    else
    {
      PoSetSystemState(Flags);
    }
  }
  return v2;
}
