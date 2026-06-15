/*
 * XREFs of ?Release@?$CComContainedObject@VCStreamInstance@@@ATL@@W7EAAKXZ @ 0x14002F510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CStreamInstance>::Release(__int64 a1)
{
  return ATL::CComContainedObject<CAudioDeviceGraph>::Release(a1 - 8);
}
