/*
 * XREFs of ??_ECImmersiveWindowFactory@@EEAAPEAXI@Z @ 0x1800A4C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveWindowFactory@@EEAA@XZ @ 0x1800A4C58 (--1CImmersiveWindowFactory@@EEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180188D28 (--3@YAXPEAX@Z.c)
 */

CImmersiveWindowFactory *__fastcall CImmersiveWindowFactory::`vector deleting destructor'(
        CImmersiveWindowFactory *this,
        char a2)
{
  CImmersiveWindowFactory::~CImmersiveWindowFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
