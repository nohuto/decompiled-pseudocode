/*
 * XREFs of ??_EIVisitable@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800293A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

Spectre::Engine::IVisitable *__fastcall Spectre::Engine::IVisitable::`vector deleting destructor'(
        Spectre::Engine::IVisitable *this,
        char a2)
{
  *(_QWORD *)this = &Spectre::Engine::IVisitable::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
