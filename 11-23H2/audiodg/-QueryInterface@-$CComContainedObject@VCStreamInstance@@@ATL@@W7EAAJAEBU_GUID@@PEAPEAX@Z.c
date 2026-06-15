/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCStreamInstance@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002F390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CStreamInstance>::QueryInterface(__int64 a1)
{
  return ATL::CComContainedObject<CAudioDeviceGraph>::QueryInterface(a1 - 8);
}
