/*
 * XREFs of ?AddRef@CDevice@DirectComposition@@UEAAKXZ @ 0x18008EB70
 * Callers:
 *     ?AddRef@CDevice@DirectComposition@@W7EAAKXZ @ 0x1800A83D0 (-AddRef@CDevice@DirectComposition@@W7EAAKXZ.c)
 *     ?AddRef@CDevice@DirectComposition@@WBA@EAAKXZ @ 0x1800A83F0 (-AddRef@CDevice@DirectComposition@@WBA@EAAKXZ.c)
 *     ?AddRef@CDevice@DirectComposition@@WBI@EAAKXZ @ 0x1800A8410 (-AddRef@CDevice@DirectComposition@@WBI@EAAKXZ.c)
 *     ?AddRef@CDevice@DirectComposition@@WCA@EAAKXZ @ 0x1800A8430 (-AddRef@CDevice@DirectComposition@@WCA@EAAKXZ.c)
 *     ?AddRef@CDevice@DirectComposition@@WCI@EAAKXZ @ 0x1800A8450 (-AddRef@CDevice@DirectComposition@@WCI@EAAKXZ.c)
 *     ?AddRef@CDevice@DirectComposition@@WDA@EAAKXZ @ 0x1800A8470 (-AddRef@CDevice@DirectComposition@@WDA@EAAKXZ.c)
 *     ?AddRef@CDevice@DirectComposition@@WDI@EAAKXZ @ 0x1800A8490 (-AddRef@CDevice@DirectComposition@@WDI@EAAKXZ.c)
 *     ?AddRef@CDevice@DirectComposition@@WEA@EAAKXZ @ 0x1800A84B0 (-AddRef@CDevice@DirectComposition@@WEA@EAAKXZ.c)
 *     ?AddRef@CDevice@DirectComposition@@WEI@EAAKXZ @ 0x1800A84D0 (-AddRef@CDevice@DirectComposition@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::AddRef(DirectComposition::CDevice *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 38);
}
