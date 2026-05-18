/*
 * XREFs of ??_GBounds@Engine@Spectre@@UEAAPEAXI@Z @ 0x18004A0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1Bounds@Engine@Spectre@@UEAA@XZ @ 0x18004A080 (--1Bounds@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::Bounds *__fastcall Spectre::Engine::Bounds::`scalar deleting destructor'(
        Spectre::Engine::Bounds *this,
        char a2)
{
  Spectre::Engine::Bounds::~Bounds(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
