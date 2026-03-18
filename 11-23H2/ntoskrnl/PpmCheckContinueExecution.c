/*
 * XREFs of PpmCheckContinueExecution @ 0x1402BFA64
 * Callers:
 *     PpmPerfAction @ 0x1402BF9C0 (PpmPerfAction.c)
 *     PpmPerfControlActionCallback @ 0x140462FF0 (PpmPerfControlActionCallback.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254790 (KiInsertQueueDpc.c)
 *     KeCheckProcessorAffinityEx @ 0x140257360 (KeCheckProcessorAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x14028FC5C (PoCopyDeepIdleMask.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402BFCF0 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiSubtractAffinityEx @ 0x14033D83C (KiSubtractAffinityEx.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     KeFindFirstSetRightAffinityEx @ 0x14056F3E0 (KeFindFirstSetRightAffinityEx.c)
 */

__int64 PpmCheckContinueExecution()
{
  unsigned int Number; // ebx
  int v2; // eax
  __int64 *v3; // rcx
  _DWORD v4[68]; // [rsp+30h] [rbp-128h] BYREF

  memset(&v4[2], 0, 0x100uLL);
  KeQuerySystemAllowedCpuSetAffinity(&PpmCachedSystemAllowedCpuSet, &PpmCachedSystemAllowedCpuSetVersion);
  Number = KeGetCurrentPrcb()->Number;
  if ( !(unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)&PpmCachedSystemAllowedCpuSet, Number) )
  {
    v4[0] = 2097153;
    memset(&v4[1], 0, 0x104uLL);
    PoCopyDeepIdleMask((unsigned __int16 *)v4);
    v2 = KiSubtractAffinityEx(&PpmCachedSystemAllowedCpuSet, v4, v4, HIWORD(v4[0]));
    v3 = (__int64 *)v4;
    if ( !v2 )
      v3 = &PpmCachedSystemAllowedCpuSet;
    LOWORD(Number) = KeFindFirstSetRightAffinityEx(v3);
  }
  if ( !qword_140C3C178 )
    word_140C3C142 = Number + 2048;
  return KiInsertQueueDpc((ULONG_PTR)&PpmCheckDpc, 0LL, 0LL, 0LL, 0);
}
