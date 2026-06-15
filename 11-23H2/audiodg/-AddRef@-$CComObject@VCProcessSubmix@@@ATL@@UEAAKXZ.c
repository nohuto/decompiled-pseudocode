/*
 * XREFs of ?AddRef@?$CComObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x140024070
 * Callers:
 *     ?AddRef@?$CComObject@VCProcessSubmix@@@ATL@@W7EAAKXZ @ 0x1400309D0 (-AddRef@-$CComObject@VCProcessSubmix@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ @ 0x1400309F0 (-AddRef@-$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CProcessSubmix>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((int *)(a1 + 336));
}
