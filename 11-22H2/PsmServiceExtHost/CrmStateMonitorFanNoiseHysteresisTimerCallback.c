/*
 * XREFs of CrmStateMonitorFanNoiseHysteresisTimerCallback @ 0x180008B00
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180009B80 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorFanNoiseHysteresisSetTimer @ 0x180013C34 (CrmStateMonitorFanNoiseHysteresisSetTimer.c)
 */

__int64 __fastcall CrmStateMonitorFanNoiseHysteresisTimerCallback(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm1
  __int128 v4; // xmm0
  __int64 result; // rax
  _OWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(__m128i *)(a2 + 56);
  *(_QWORD *)(a2 + 152) = 0LL;
  v4 = *(_OWORD *)(a2 + 72);
  v6[0] = v2;
  v6[1] = v4;
  DWORD2(v6[0]) = _mm_cvtsi128_si32(_mm_srli_si128(v2, 8)) - 1;
  ((void (__fastcall *)(__int64, _OWORD *, __int64, _QWORD))CrmStateMonitorStateSet)(a2, v6, 32LL, 0LL);
  result = *(unsigned int *)(a2 + 128);
  if ( DWORD2(v6[0]) > (unsigned int)result )
    return CrmStateMonitorFanNoiseHysteresisSetTimer(a2, 0LL);
  return result;
}
