/*
 * XREFs of DCompositionGetTargetStatistics @ 0x1800FF6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DCompositionGetTargetStatistics(__int64 a1, __int64 a2, __int64 a3)
{
  int TargetStatistics; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  TargetStatistics = NtDCompositionGetTargetStatistics(&v5, a2, a3);
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(TargetStatistics);
}
