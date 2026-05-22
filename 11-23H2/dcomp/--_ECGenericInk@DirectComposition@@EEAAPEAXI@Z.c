/*
 * XREFs of ??_ECGenericInk@DirectComposition@@EEAAPEAXI@Z @ 0x1800ED9AC
 * Callers:
 *     ??_ECGenericInk@DirectComposition@@G7EAAPEAXI@Z @ 0x1800A8370 (--_ECGenericInk@DirectComposition@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CGenericInk@DirectComposition@@EEAA@XZ @ 0x1800ED878 (--1CGenericInk@DirectComposition@@EEAA@XZ.c)
 */

DirectComposition::CGenericInk *__fastcall DirectComposition::CGenericInk::`vector deleting destructor'(
        DirectComposition::CGenericInk *this,
        char a2)
{
  DirectComposition::CGenericInk::~CGenericInk(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
