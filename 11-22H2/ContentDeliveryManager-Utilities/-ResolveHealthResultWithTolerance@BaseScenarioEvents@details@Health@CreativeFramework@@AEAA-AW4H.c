/*
 * XREFs of ?ResolveHealthResultWithTolerance@BaseScenarioEvents@details@Health@CreativeFramework@@AEAA?AW4HealthEvaluationResult@234@W45234@@Z @ 0x18005D4A4
 * Callers:
 *     ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180055F14 (-Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV-$shared_ptr@VCorrelationVe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Health::details::BaseScenarioEvents::ResolveHealthResultWithTolerance(
        __int64 a1,
        unsigned __int16 a2)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rcx
  unsigned __int8 v6; // r8
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v4 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  if ( *(_WORD *)(a1 + 162) != a2 || (v5 = *(_QWORD *)(a1 + 168)) == 0 )
  {
    *(_WORD *)(a1 + 162) = a2;
    v5 = v4;
    *(_BYTE *)(a1 + 176) = 0;
    *(_QWORD *)(a1 + 168) = v4;
    *(_BYTE *)(a1 + 253) = 1;
  }
  v6 = *(_BYTE *)(a1 + 176);
  if ( v6 != 0xFF )
  {
    ++v6;
    *(_BYTE *)(a1 + 253) = 1;
    *(_BYTE *)(a1 + 176) = v6;
  }
  if ( a2 != 2 && ((unsigned int)v5 + (v5 & 0xFFFFFFFF00000000uLL) + 144000000000LL > v4 || v6 <= 3u) )
    return *(unsigned __int16 *)(a1 + 160);
  return a2;
}
