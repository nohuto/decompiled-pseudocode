/*
 * XREFs of ??1Light@Engine@Spectre@@UEAA@XZ @ 0x180042F34
 * Callers:
 *     ??_GLight@Engine@Spectre@@UEAAPEAXI@Z @ 0x180042F90 (--_GLight@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Light::~Light(Spectre::Engine::Light *this)
{
  *(_QWORD *)this = &Spectre::Engine::Light::`vftable';
  Spectre::Engine::Component::~Component(this);
}
