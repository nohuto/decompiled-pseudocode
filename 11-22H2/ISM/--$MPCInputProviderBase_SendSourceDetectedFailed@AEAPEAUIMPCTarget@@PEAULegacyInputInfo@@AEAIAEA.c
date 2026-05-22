/*
 * XREFs of ??$MPCInputProviderBase_SendSourceDetectedFailed@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@AEAIAEAJ@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@AEAIAEAJ@Z @ 0x1800D4510
 * Callers:
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x1800D7284 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?MPCInputProviderBase_SendSourceDetectedFailed_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@IJ@Z @ 0x1800D6C50 (-MPCInputProviderBase_SendSourceDetectedFailed_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInput.c)
 */

void __fastcall ISMTracing::MPCInputProviderBase_SendSourceDetectedFailed<IMPCTarget * &,LegacyInputInfo *,unsigned int &,long &>(
        struct IMPCTarget **a1,
        struct LegacyInputInfo **a2,
        unsigned int *a3,
        int *a4)
{
  __int64 v8; // rcx
  ISMTracing *v9; // rcx

  if ( ISMTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v8, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCInputProviderBase_SendSourceDetectedFailed_(v9, *a1, *a2, *a3, *a4);
  }
}
