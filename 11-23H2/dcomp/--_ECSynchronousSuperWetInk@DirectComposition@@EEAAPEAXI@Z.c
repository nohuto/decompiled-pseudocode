/*
 * XREFs of ??_ECSynchronousSuperWetInk@DirectComposition@@EEAAPEAXI@Z @ 0x1800FC170
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CSynchronousSuperWetInk@DirectComposition@@EEAA@XZ @ 0x1800FC0EC (--1CSynchronousSuperWetInk@DirectComposition@@EEAA@XZ.c)
 */

DirectComposition::CSynchronousSuperWetInk *__fastcall DirectComposition::CSynchronousSuperWetInk::`vector deleting destructor'(
        DirectComposition::CSynchronousSuperWetInk *this,
        char a2)
{
  DirectComposition::CSynchronousSuperWetInk::~CSynchronousSuperWetInk(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
