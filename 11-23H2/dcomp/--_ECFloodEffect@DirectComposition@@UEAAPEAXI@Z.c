/*
 * XREFs of ??_ECFloodEffect@DirectComposition@@UEAAPEAXI@Z @ 0x1800ED96C
 * Callers:
 *     ??_ECArithmeticCompositeEffect@DirectComposition@@W7EAAPEAXI@Z @ 0x1800A8330 (--_ECArithmeticCompositeEffect@DirectComposition@@W7EAAPEAXI@Z.c)
 *     ??_ECFloodEffect@DirectComposition@@WCI@EAAPEAXI@Z @ 0x1800A8350 (--_ECFloodEffect@DirectComposition@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CFilterEffect@DirectComposition@@MEAA@XZ @ 0x1800F7ECC (--1CFilterEffect@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CFloodEffect *__fastcall DirectComposition::CFloodEffect::`vector deleting destructor'(
        DirectComposition::CFloodEffect *this,
        char a2)
{
  DirectComposition::CFilterEffect::~CFilterEffect((DirectComposition::CFloodEffect *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
