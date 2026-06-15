/*
 * XREFs of ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140003240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CStreamGroup>>,ATL::CComCreator<ATL::CComAggObject<CStreamGroup>>>::CreateInstance(
        __int64 a1)
{
  if ( a1 )
    return ATL::CComCreator<ATL::CComAggObject<CStreamGroup>>::CreateInstance();
  else
    return ATL::CComCreator<ATL::CComObject<CStreamGroup>>::CreateInstance();
}
