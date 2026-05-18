/*
 * XREFs of ??1ShaderPropertyLayout@Engine@Spectre@@QEAA@XZ @ 0x180081EF8
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VShaderPropertyLayout@Engine@Spectre@@@std@@EEAAXXZ @ 0x180050B70 (-_Destroy@-$_Ref_count_obj2@VShaderPropertyLayout@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@AEAAXXZ @ 0x1800105A8 (-_Tidy@-$vector@U-$pair@II@std@@V-$allocator@U-$pair@II@std@@@2@@std@@AEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18001B850 (-_Tidy@-$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@TValueElement@Sh.c)
 *     ?_Tidy@?$vector@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x180083AE0 (-_Tidy@-$vector@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UPropertyInfo@Sh.c)
 *     ?_Tidy@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x180083B3C (-_Tidy@-$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UTextureElemen.c)
 */

void __fastcall Spectre::Engine::ShaderPropertyLayout::~ShaderPropertyLayout(
        Spectre::Engine::ShaderPropertyLayout *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  std::vector<std::pair<unsigned int,unsigned int>>::_Tidy((__int64)this + 1216);
  std::vector<std::pair<unsigned int,unsigned int>>::_Tidy((__int64)this + 1192);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 148);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 145);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  std::vector<Spectre::Engine::ShaderPropertyLayout::TextureElement>::_Tidy((char *)this + 104);
  std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Tidy((__int64)this + 80);
  std::vector<Spectre::Engine::ShaderPropertyLayout::PropertyInfo>::_Tidy((char *)this + 56);
  std::string::_Tidy_deallocate((__int64)this + 16);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
}
