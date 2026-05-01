/*
 * XREFs of ??_EViewPresentationMediator@@UEAAPEAXI@Z @ 0x18041AD68
 * Callers:
 *     ??_EViewPresentationMediator@@WCI@EAAPEAXI@Z @ 0x1801FCC80 (--_EViewPresentationMediator@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1ViewPresentationMediator@@UEAA@XZ @ 0x18041ABEC (--1ViewPresentationMediator@@UEAA@XZ.c)
 */

ViewPresentationMediator *__fastcall ViewPresentationMediator::`vector deleting destructor'(
        ViewPresentationMediator *this,
        char a2)
{
  ViewPresentationMediator::~ViewPresentationMediator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
