/*
 * XREFs of PpmCheckContinueExecution @ 0x140343BA0
 * Callers:
 *     PpmPerfAction @ 0x140343B00 (PpmPerfAction.c)
 *     PpmPerfControlActionCallback @ 0x14045E1C0 (PpmPerfControlActionCallback.c)
 * Callees:
 *     PoCopyDeepIdleMask @ 0x1402D990C (PoCopyDeepIdleMask.c)
 *     KiSubtractAffinityEx @ 0x1402FEDA0 (KiSubtractAffinityEx.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402FF090 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeFindFirstSetRightAffinityEx @ 0x14056C1B0 (KeFindFirstSetRightAffinityEx.c)
 */

__int64 PpmCheckContinueExecution()
{
  __int64 Number; // rbx
  int v2; // eax
  __int64 *v3; // rcx
  _DWORD v4[68]; // [rsp+30h] [rbp-128h] BYREF

  memset(&v4[2], 0, 0x100uLL);
  KeQuerySystemAllowedCpuSetAffinity(
    (unsigned __int16 *)&PpmCachedSystemAllowedCpuSet,
    PpmCachedSystemAllowedCpuSetVersion);
  Number = KeGetCurrentPrcb()->Number;
  if ( !(unsigned int)KeCheckProcessorAffinityEx(&PpmCachedSystemAllowedCpuSet, Number) )
  {
    v4[0] = 2097153;
    memset(&v4[1], 0, 0x104uLL);
    PoCopyDeepIdleMask((unsigned __int16 *)v4);
    v2 = KiSubtractAffinityEx(&PpmCachedSystemAllowedCpuSet, (char *)v4, v4, HIWORD(v4[0]));
    v3 = (__int64 *)v4;
    if ( !v2 )
      v3 = &PpmCachedSystemAllowedCpuSet;
    LOWORD(Number) = KeFindFirstSetRightAffinityEx(v3);
  }
  if ( !qword_140C20438 )
    word_140C20402 = Number + 2048;
  return KiInsertQueueDpc((ULONG_PTR)&PpmCheckDpc, 0);
}
