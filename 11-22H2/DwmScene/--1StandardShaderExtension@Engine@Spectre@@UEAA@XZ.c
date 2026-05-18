/*
 * XREFs of ??1StandardShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007CC08
 * Callers:
 *     ??_EStandardShaderExtension@Engine@Spectre@@UEAAPEAXI@Z @ 0x18007CC50 (--_EStandardShaderExtension@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@std@@QEAA@XZ @ 0x18007CB94 (--1-$unique_ptr@ULightConstants@Engine@Spectre@@V-$function@$$A6AXPEAULightConstants@Engine@Spec.c)
 */

void __fastcall Spectre::Engine::StandardShaderExtension::~StandardShaderExtension(
        Spectre::Engine::StandardShaderExtension *this,
        __int64 a2)
{
  *(_QWORD *)this = &Spectre::Engine::StandardShaderExtension::`vftable';
  std::unique_ptr<Spectre::Engine::LightConstants,std::function<void (Spectre::Engine::LightConstants *)>>::~unique_ptr<Spectre::Engine::LightConstants,std::function<void (Spectre::Engine::LightConstants *)>>(
    (__int64)this + 152,
    a2);
  Spectre::Engine::BaseShaderExtension::~BaseShaderExtension(this);
}
