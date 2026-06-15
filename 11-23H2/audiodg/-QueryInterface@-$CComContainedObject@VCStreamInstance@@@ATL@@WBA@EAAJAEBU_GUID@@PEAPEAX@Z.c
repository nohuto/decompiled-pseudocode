/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCStreamInstance@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002F3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CStreamInstance>::QueryInterface(__int64 a1)
{
  return ATL::CComContainedObject<CAudioDeviceGraph>::QueryInterface(a1 - 16);
}
