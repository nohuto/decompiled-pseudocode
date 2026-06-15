/*
 * XREFs of ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400847E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CCrossProcessServerOutputEndpoint>>,ATL::CComCreator<ATL::CComAggObject<CCrossProcessServerOutputEndpoint>>>::CreateInstance(
        __int64 a1)
{
  if ( a1 )
    return ATL::CComCreator<ATL::CComAggObject<CCrossProcessServerOutputEndpoint>>::CreateInstance();
  else
    return ATL::CComCreator<ATL::CComObject<CCrossProcessServerOutputEndpoint>>::CreateInstance();
}
