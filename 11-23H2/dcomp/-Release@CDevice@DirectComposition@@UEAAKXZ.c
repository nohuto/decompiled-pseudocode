/*
 * XREFs of ?Release@CDevice@DirectComposition@@UEAAKXZ @ 0x180082D10
 * Callers:
 *     ?Release@CDevice@DirectComposition@@W7EAAKXZ @ 0x1800A8F10 (-Release@CDevice@DirectComposition@@W7EAAKXZ.c)
 *     ?Release@CDevice@DirectComposition@@WBA@EAAKXZ @ 0x1800A8F30 (-Release@CDevice@DirectComposition@@WBA@EAAKXZ.c)
 *     ?Release@CDevice@DirectComposition@@WBI@EAAKXZ @ 0x1800A8F50 (-Release@CDevice@DirectComposition@@WBI@EAAKXZ.c)
 *     ?Release@CDevice@DirectComposition@@WCA@EAAKXZ @ 0x1800A8F70 (-Release@CDevice@DirectComposition@@WCA@EAAKXZ.c)
 *     ?Release@CDevice@DirectComposition@@WCI@EAAKXZ @ 0x1800A8F90 (-Release@CDevice@DirectComposition@@WCI@EAAKXZ.c)
 *     ?Release@CDevice@DirectComposition@@WDA@EAAKXZ @ 0x1800A8FB0 (-Release@CDevice@DirectComposition@@WDA@EAAKXZ.c)
 *     ?Release@CDevice@DirectComposition@@WDI@EAAKXZ @ 0x1800A8FD0 (-Release@CDevice@DirectComposition@@WDI@EAAKXZ.c)
 *     ?Release@CDevice@DirectComposition@@WEA@EAAKXZ @ 0x1800A8FF0 (-Release@CDevice@DirectComposition@@WEA@EAAKXZ.c)
 *     ?Release@CDevice@DirectComposition@@WEI@EAAKXZ @ 0x1800A9010 (-Release@CDevice@DirectComposition@@WEI@EAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CDevice@DirectComposition@@QEAA@XZ @ 0x18005E2D8 (--1CDevice@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::Release(DirectComposition::CDevice *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 38);
  if ( !v2 && this )
  {
    DirectComposition::CDevice::~CDevice(this);
    operator delete(this);
  }
  return v2;
}
