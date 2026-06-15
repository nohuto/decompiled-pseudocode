/*
 * XREFs of ?AddRef@?$CComObject@VCAudioProcessor@@@ATL@@UEAAKXZ @ 0x14002B920
 * Callers:
 *     ?AddRef@?$CComObject@VCAudioProcessor@@@ATL@@W7EAAKXZ @ 0x140033810 (-AddRef@-$CComObject@VCAudioProcessor@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCAudioProcessor@@@ATL@@WBA@EAAKXZ @ 0x140033830 (-AddRef@-$CComObject@VCAudioProcessor@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CAudioProcessor>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((int *)(a1 + 24));
}
