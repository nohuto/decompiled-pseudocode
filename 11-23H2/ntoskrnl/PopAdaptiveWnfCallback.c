/*
 * XREFs of PopAdaptiveWnfCallback @ 0x14099BC20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1407E2490 (ExQueryWnfStateData.c)
 *     PopAcquireAdaptiveLock @ 0x1407EC16C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC218 (PopReleaseAdaptiveLock.c)
 *     PopDiagTraceAdaptiveOverrideTriggered @ 0x14098C86C (PopDiagTraceAdaptiveOverrideTriggered.c)
 *     PopAdaptiveConsoleSessionOverrideClear @ 0x14099B980 (PopAdaptiveConsoleSessionOverrideClear.c)
 */

__int64 __fastcall PopAdaptiveWnfCallback(__int64 a1, _QWORD *a2)
{
  bool v2; // zf
  __int64 result; // rax
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+28h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  v2 = *a2 == WNF_HPM_GLOBAL_HUMAN_PRESENCE_STATE;
  v8 = 0LL;
  if ( v2 )
  {
    v6 = 16;
    result = ExQueryWnfStateData(a1, &v7, &v8, &v6);
    if ( (int)result < 0 )
      return result;
    if ( v6 < 0x10 )
      return 3221225485LL;
    if ( !PopConsoleSession || !DWORD2(v8) || SDWORD2(v8) >= 3 )
      return 0LL;
    PopAcquireAdaptiveLock(0);
    if ( DWORD2(v8) == 2 )
    {
      v4 = PopAdaptiveSensorInattentiveDisplayTimeout;
      if ( PopAdaptiveSensorInattentiveDisplayTimeout || PopAdaptiveSensorInattentiveDimTimeout )
      {
        v5 = PopAdaptiveSensorInattentiveDimTimeout;
LABEL_16:
        qword_140C39C68 = v8;
        byte_140C39C60[0] = 1;
        dword_140C39C70 = v4;
        dword_140C39C74 = v5;
        PopDiagTraceAdaptiveOverrideTriggered(v8);
LABEL_18:
        PopReleaseAdaptiveLock();
        return 0LL;
      }
    }
    else if ( DWORD2(v8) == 1 )
    {
      v4 = PopAdaptiveSensorAwayDisplayTimeout;
      if ( PopAdaptiveSensorAwayDisplayTimeout || PopAdaptiveSensorAwayDimTimeout )
      {
        v5 = PopAdaptiveSensorAwayDimTimeout;
        goto LABEL_16;
      }
    }
    PopAdaptiveConsoleSessionOverrideClear(0, 2);
    goto LABEL_18;
  }
  return 3221225659LL;
}
