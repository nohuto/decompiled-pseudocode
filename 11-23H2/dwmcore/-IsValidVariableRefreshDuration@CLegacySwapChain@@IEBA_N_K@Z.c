/*
 * XREFs of ?IsValidVariableRefreshDuration@CLegacySwapChain@@IEBA_N_K@Z @ 0x18029B11C
 * Callers:
 *     ?BoostFrameRate@CLegacySwapChain@@UEAA_N_N@Z @ 0x18029A390 (-BoostFrameRate@CLegacySwapChain@@UEAA_N_N@Z.c)
 *     ?CheckPresentDurationSupport@CLegacySwapChain@@UEBAII_NI@Z @ 0x18029A500 (-CheckPresentDurationSupport@CLegacySwapChain@@UEBAII_NI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CLegacySwapChain::IsValidVariableRefreshDuration(CLegacySwapChain *this, unsigned __int64 a2)
{
  char result; // al
  unsigned __int64 v3; // rcx

  result = 0;
  if ( a2 >= *((_QWORD *)this + 37) )
  {
    v3 = *((_QWORD *)this + 38);
    if ( !v3 || a2 <= v3 )
      return 1;
  }
  return result;
}
