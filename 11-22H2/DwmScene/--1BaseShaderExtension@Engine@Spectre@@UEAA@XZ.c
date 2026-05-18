/*
 * XREFs of ??1BaseShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x1800989F0
 * Callers:
 *     ??1StandardShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007CC08 (--1StandardShaderExtension@Engine@Spectre@@UEAA@XZ.c)
 *     ??1UnlitShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007FAA8 (--1UnlitShaderExtension@Engine@Spectre@@UEAA@XZ.c)
 *     ??_GBaseShaderExtension@Engine@Spectre@@UEAAPEAXI@Z @ 0x180098AD0 (--_GBaseShaderExtension@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     _Spectre::Engine::StandardShaderExtension::StandardShaderExtension_::_1_::dtor$1 @ 0x1800E9BD4 (_Spectre--Engine--StandardShaderExtension--StandardShaderExtension_--_1_--dtor$1.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180038548 (-_Tidy@-$vector@V-$shared_ptr@VComponent@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VCompo.c)
 */

void __fastcall Spectre::Engine::BaseShaderExtension::~BaseShaderExtension(Spectre::Engine::BaseShaderExtension *this)
{
  *(_QWORD *)this = &Spectre::Engine::BaseShaderExtension::`vftable';
  std::vector<std::shared_ptr<Spectre::Engine::Component>>::_Tidy((__int64)this + 128);
  Spectre::Engine::IShaderExtension::~IShaderExtension(this);
}
