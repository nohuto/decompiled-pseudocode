/*
 * XREFs of ?AddRef@?$CComObject@VCAudioPump@@@ATL@@UEAAKXZ @ 0x1400261B0
 * Callers:
 *     ?AddRef@?$CComObject@VCAudioPump@@@ATL@@W7EAAKXZ @ 0x140030810 (-AddRef@-$CComObject@VCAudioPump@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CAudioPump>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((int *)(a1 + 16));
}
