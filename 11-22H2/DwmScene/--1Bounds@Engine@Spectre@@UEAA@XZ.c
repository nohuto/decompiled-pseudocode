/*
 * XREFs of ??1Bounds@Engine@Spectre@@UEAA@XZ @ 0x18004A080
 * Callers:
 *     ??_GBounds@Engine@Spectre@@UEAAPEAXI@Z @ 0x18004A0A0 (--_GBounds@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Bounds::~Bounds(Spectre::Engine::Bounds *this)
{
  *(_QWORD *)this = &Spectre::Engine::Bounds::`vftable';
  Spectre::Engine::Component::~Component(this);
}
