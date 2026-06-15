/*
 * XREFs of ?AddRef@?$CComObject@VCAudioProcessor@@@ATL@@WBA@EAAKXZ @ 0x14002F310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CAudioProcessor>::AddRef(__int64 a1)
{
  return ATL::CComObject<CStreamInstance>::AddRef(a1 - 16);
}
