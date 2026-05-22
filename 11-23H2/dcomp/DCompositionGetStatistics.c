/*
 * XREFs of DCompositionGetStatistics @ 0x1800FF6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DCompositionGetStatistics(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int Statistics; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1;
  Statistics = NtDCompositionGetStatistics(&v7, a2, a3, a4, a5);
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(Statistics);
}
