/*
 * XREFs of ?GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA?AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ @ 0x1C03364C8
 * Callers:
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C0337D40 (DxgkGetProcessSchedulingPriorityBand.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGPROCESS::GetProcessSchedulingPriorityBand(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 432);
  if ( v1 == 1 )
    return 1LL;
  if ( (v1 & 0xFFFFFFFD) == 0 )
    return 0LL;
  WdLogSingleEntry1(1LL, 4781LL);
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 4781LL, 0LL, 0LL, 0LL, 0LL);
  return 3LL;
}
