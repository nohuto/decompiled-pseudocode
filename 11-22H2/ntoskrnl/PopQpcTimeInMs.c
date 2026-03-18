/*
 * XREFs of PopQpcTimeInMs @ 0x140A87B50
 * Callers:
 *     PopWriteBsdPoInfo @ 0x14032B100 (PopWriteBsdPoInfo.c)
 *     PopPowerTransitionTimesInMs @ 0x140583550 (PopPowerTransitionTimesInMs.c)
 *     PopDiagTraceHiberStats @ 0x14098F8D8 (PopDiagTraceHiberStats.c)
 *     PopDiagTracePerfTrackData @ 0x140990218 (PopDiagTracePerfTrackData.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlULongLongMult @ 0x14022CE4C (RtlULongLongMult.c)
 */

__int64 __fastcall PopQpcTimeInMs(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r11
  unsigned int v3; // r10d
  unsigned __int64 v4; // r11
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  v3 = 0;
  pullResult = 0LL;
  if ( v2 )
  {
    if ( RtlULongLongMult(v2 - *a1, 0x3E8uLL, &pullResult) < 0 )
      return (unsigned int)(v4 / (PopQpcFrequency / 0x3E8));
    else
      return (unsigned int)(pullResult / PopQpcFrequency);
  }
  return v3;
}
