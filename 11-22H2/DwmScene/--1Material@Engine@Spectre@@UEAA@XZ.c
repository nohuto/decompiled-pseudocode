/*
 * XREFs of ??1Material@Engine@Spectre@@UEAA@XZ @ 0x180043A44
 * Callers:
 *     ??_GMaterial@Engine@Spectre@@UEAAPEAXI@Z @ 0x180043DC0 (--_GMaterial@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@_N@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180027F84 (--1-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU-$less@W4RenderDeviceID@Engine@Sp.c)
 *     ?Release@Material@Engine@Spectre@@QEAAXXZ @ 0x180044568 (-Release@Material@Engine@Spectre@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::Material::~Material(void **this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx

  *this = &Spectre::Engine::Material::`vftable';
  Spectre::Engine::Material::Release((Spectre::Engine::Material *)this);
  v2 = (std::_Ref_count_base *)this[28];
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>(this + 25);
  v3 = (std::_Ref_count_base *)this[22];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)this[18];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (std::_Ref_count_base *)this[16];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = (std::_Ref_count_base *)this[13];
  if ( v6 )
    std::_Ref_count_base::_Decwref(v6);
  Spectre::Engine::SharedResource::~SharedResource(this);
}
