/*
 * XREFs of ??_EComponent@Engine@Spectre@@UEAAPEAXI@Z @ 0x180042F50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1Component@Engine@Spectre@@UEAA@XZ @ 0x180042EBC (--1Component@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::Component *__fastcall Spectre::Engine::Component::`vector deleting destructor'(
        Spectre::Engine::Component *this,
        char a2)
{
  Spectre::Engine::Component::~Component(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
