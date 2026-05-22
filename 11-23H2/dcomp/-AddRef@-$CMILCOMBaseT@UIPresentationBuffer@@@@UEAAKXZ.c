/*
 * XREFs of ?AddRef@?$CMILCOMBaseT@UIPresentationBuffer@@@@UEAAKXZ @ 0x18008C4D0
 * Callers:
 *     ?AddRef@CVirtualSurface@DirectComposition@@WBA@EAAKXZ @ 0x1800A91D0 (-AddRef@CVirtualSurface@DirectComposition@@WBA@EAAKXZ.c)
 *     ?AddRef@CVirtualSurface@DirectComposition@@WEA@EAAKXZ @ 0x1800A91F0 (-AddRef@CVirtualSurface@DirectComposition@@WEA@EAAKXZ.c)
 *     ?AddRef@CVirtualSurface@DirectComposition@@WEI@EAAKXZ @ 0x1800A9210 (-AddRef@CVirtualSurface@DirectComposition@@WEI@EAAKXZ.c)
 *     ?AddRef@CVirtualSurface@DirectComposition@@WFA@EAAKXZ @ 0x1800A9230 (-AddRef@CVirtualSurface@DirectComposition@@WFA@EAAKXZ.c)
 *     ?AddRef@CCompositionTexture@DirectComposition@@WBA@EAAKXZ @ 0x1800A93F0 (-AddRef@CCompositionTexture@DirectComposition@@WBA@EAAKXZ.c)
 *     ?AddRef@CPresentationSurface@@WCA@EAAKXZ @ 0x1800B1D00 (-AddRef@CPresentationSurface@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<IPresentationBuffer>::AddRef(__int64 a1)
{
  return CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 + 8));
}
