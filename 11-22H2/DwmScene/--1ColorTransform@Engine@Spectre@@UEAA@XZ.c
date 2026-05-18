/*
 * XREFs of ??1ColorTransform@Engine@Spectre@@UEAA@XZ @ 0x18008F58C
 * Callers:
 *     ??_EColorTransform@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008F5E0 (--_EColorTransform@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18001B850 (-_Tidy@-$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@TValueElement@Sh.c)
 */

void __fastcall Spectre::Engine::ColorTransform::~ColorTransform(Spectre::Engine::ColorTransform *this)
{
  std::_Ref_count_base *v2; // rcx

  *(_QWORD *)this = &Spectre::Engine::ColorTransform::`vftable';
  std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Tidy((__int64)this + 112);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 13);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  Spectre::Engine::Component::~Component(this);
}
