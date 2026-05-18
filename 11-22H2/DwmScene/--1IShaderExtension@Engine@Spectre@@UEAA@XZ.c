/*
 * XREFs of ??1IShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18005FBF0
 * Callers:
 *     ??_EIShaderExtension@Engine@Spectre@@UEAAPEAXI@Z @ 0x18005FE10 (--_EIShaderExtension@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1ImageProcessingShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007E820 (--1ImageProcessingShaderExtension@Engine@Spectre@@UEAA@XZ.c)
 *     ??1SymbolShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007F358 (--1SymbolShaderExtension@Engine@Spectre@@UEAA@XZ.c)
 *     ??1FontShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007F73C (--1FontShaderExtension@Engine@Spectre@@UEAA@XZ.c)
 *     ??1BackgroundUnlitShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007FDD0 (--1BackgroundUnlitShaderExtension@Engine@Spectre@@UEAA@XZ.c)
 *     ??1BaseShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x1800989F0 (--1BaseShaderExtension@Engine@Spectre@@UEAA@XZ.c)
 *     _Spectre::Engine::BackgroundUnlitShaderExtension::BackgroundUnlitShaderExtension_::_1_::dtor$1 @ 0x1800EA06D (_Spectre--Engine--BackgroundUnlitShaderExtension--BackgroundUnlitShaderExtension_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall Spectre::Engine::IShaderExtension::~IShaderExtension(Spectre::Engine::IShaderExtension *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  *(_QWORD *)this = &Spectre::Engine::IShaderExtension::`vftable';
  std::string::_Tidy_deallocate((__int64)this + 72);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 8);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::string::_Tidy_deallocate((__int64)this + 24);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
}
