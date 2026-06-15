/*
 * XREFs of ?AddRef@?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x14004B920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComAggObject<CAudioDeviceGraph>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((int *)(a1 + 8));
}
