/*
 * XREFs of ??_ECImmersiveMode@@MEAAPEAXI@Z @ 0x180174100
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveMode@@MEAA@XZ @ 0x18017413C (--1CImmersiveMode@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CImmersiveMode *__fastcall CImmersiveMode::`vector deleting destructor'(CImmersiveMode *this, char a2)
{
  CImmersiveMode::~CImmersiveMode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1D0uLL);
  return this;
}
