/*
 * XREFs of ??1ShaderPropertyBlock@Engine@Spectre@@QEAA@XZ @ 0x180084568
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VShaderPropertyBlock@Engine@Spectre@@@std@@EEAAXXZ @ 0x180083AD0 (-_Destroy@-$_Ref_count_obj2@VShaderPropertyBlock@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18001B850 (-_Tidy@-$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@TValueElement@Sh.c)
 *     ??1?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@_N@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180027F84 (--1-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU-$less@W4RenderDeviceID@Engine@Sp.c)
 *     ?_Tidy@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x180083B3C (-_Tidy@-$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UTextureElemen.c)
 */

void __fastcall Spectre::Engine::ShaderPropertyBlock::~ShaderPropertyBlock(Spectre::Engine::ShaderPropertyBlock *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  *(_QWORD *)this = &Spectre::Engine::ShaderPropertyBlock::`vftable';
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 17);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 15);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>((void **)this + 11);
  std::vector<Spectre::Engine::ShaderPropertyLayout::TextureElement>::_Tidy((__int64)this + 56);
  std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Tidy((__int64)this + 32);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
}
