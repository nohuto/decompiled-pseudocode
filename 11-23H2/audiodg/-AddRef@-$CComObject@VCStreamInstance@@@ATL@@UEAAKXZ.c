/*
 * XREFs of ?AddRef@?$CComObject@VCStreamInstance@@@ATL@@UEAAKXZ @ 0x1400221C0
 * Callers:
 *     ?AddRef@?$CComObject@VCStreamInstance@@@ATL@@W7EAAKXZ @ 0x14002F2F0 (-AddRef@-$CComObject@VCStreamInstance@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCAudioProcessor@@@ATL@@WBA@EAAKXZ @ 0x14002F310 (-AddRef@-$CComObject@VCAudioProcessor@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CStreamInstance>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((int *)(a1 + 24));
}
