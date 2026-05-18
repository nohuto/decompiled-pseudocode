/*
 * XREFs of ??_EITimeProvider@Utils@Spectre@@UEAAPEAXI@Z @ 0x18001FFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

Spectre::Utils::ITimeProvider *__fastcall Spectre::Utils::ITimeProvider::`vector deleting destructor'(
        Spectre::Utils::ITimeProvider *this,
        char a2)
{
  *(_QWORD *)this = &Spectre::Utils::ITimeProvider::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
