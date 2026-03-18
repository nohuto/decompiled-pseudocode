/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x140AA789C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmConvertTime @ 0x140255510 (PpmConvertTime.c)
 *     KeGetPrcb @ 0x140257330 (KeGetPrcb.c)
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 Prcb; // rax
  __int64 *v1; // r11
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  qword_140C3D448 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C39450;
  Prcb = KeGetPrcb(0);
  v1 = &qword_14000A558;
  v2 = 59LL;
  qword_140C3D410 = 1000LL * *(unsigned int *)(Prcb + 68);
  do
  {
    if ( (v1[1] & 0x20000000) != 0 )
    {
      v4 = *(__int64 *)((char *)&qword_140C3D338 + *v1);
      if ( v4 > (unsigned __int64)PopSstDiagResumeClock )
        v4 -= *((_QWORD *)&PopSstDiagResumeClock + 1);
      v3 = *v1;
      *(__int64 *)((char *)&qword_140C3D338 + v3) = PpmConvertTime(
                                                      v4,
                                                      1000000LL * KeGetCurrentPrcb()->MHz,
                                                      PopQpcFrequency);
    }
    v1 += 3;
    --v2;
  }
  while ( v2 );
  result = qword_140C3D408 - qword_140C3D3A0;
  qword_140C3D398 = qword_140C3D408 - qword_140C3D3A0;
  return result;
}
