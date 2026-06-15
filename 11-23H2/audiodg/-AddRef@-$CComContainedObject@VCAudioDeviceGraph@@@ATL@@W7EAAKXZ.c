/*
 * XREFs of ?AddRef@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ @ 0x14002F250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CAudioDeviceGraph>::AddRef(__int64 a1)
{
  return ATL::CComContainedObject<CStreamInstance>::AddRef(a1 - 8);
}
