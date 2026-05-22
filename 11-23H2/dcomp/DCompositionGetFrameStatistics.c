/*
 * XREFs of DCompositionGetFrameStatistics @ 0x180006720
 * Callers:
 *     <none>
 * Callees:
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall DCompositionGetFrameStatistics(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int FrameStatistics; // eax
  int v7; // edx
  _DWORD v9[6]; // [rsp+20h] [rbp-38h] BYREF

  FrameStatistics = NtDCompositionGetFrameStatistics(a1, v9);
  v7 = DirectComposition::CDevice::HRESULTFromNTSTATUS(FrameStatistics);
  if ( v7 < 0 )
  {
    if ( a1 )
    {
      *(_OWORD *)a1 = 0LL;
      *(_OWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 32) = 0LL;
    }
  }
  else
  {
    DirectComposition::CDevice::s_minSafeFeatureLevel = v9[0];
    if ( a2 )
      *a2 = v9[0];
    if ( a3 )
      *a3 = v9[1];
  }
  return (unsigned int)v7;
}
