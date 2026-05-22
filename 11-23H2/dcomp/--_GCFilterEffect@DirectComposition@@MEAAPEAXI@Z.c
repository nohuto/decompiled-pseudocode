/*
 * XREFs of ??_GCFilterEffect@DirectComposition@@MEAAPEAXI@Z @ 0x1800F7F70
 * Callers:
 *     ??_ECFilterEffect@DirectComposition@@OCA@EAAPEAXI@Z @ 0x1800A9090 (--_ECFilterEffect@DirectComposition@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CFilterEffect@DirectComposition@@MEAA@XZ @ 0x1800F7ECC (--1CFilterEffect@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CFilterEffect *__fastcall DirectComposition::CFilterEffect::`scalar deleting destructor'(
        DirectComposition::CFilterEffect *this,
        char a2)
{
  DirectComposition::CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
