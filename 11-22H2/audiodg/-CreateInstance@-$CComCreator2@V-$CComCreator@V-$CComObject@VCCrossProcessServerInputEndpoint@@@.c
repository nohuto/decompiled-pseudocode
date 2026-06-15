/*
 * XREFs of ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400915D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CCrossProcessServerInputEndpoint>>,ATL::CComCreator<ATL::CComAggObject<CCrossProcessServerInputEndpoint>>>::CreateInstance(
        __int64 a1)
{
  if ( a1 )
    return ATL::CComCreator<ATL::CComAggObject<CCrossProcessServerInputEndpoint>>::CreateInstance();
  else
    return ATL::CComCreator<ATL::CComObject<CCrossProcessServerInputEndpoint>>::CreateInstance();
}
