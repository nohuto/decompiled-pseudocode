/*
 * XREFs of ??_EICurve@Tweening@Utils@Spectre@@UEAAPEAXI@Z @ 0x1800E0B40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

Spectre::Utils::Tweening::ICurve *__fastcall Spectre::Utils::Tweening::ICurve::`vector deleting destructor'(
        Spectre::Utils::Tweening::ICurve *this,
        char a2)
{
  *(_QWORD *)this = &Spectre::Utils::Tweening::ICurve::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
