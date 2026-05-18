/*
 * XREFs of ??1Camera@Engine@Spectre@@UEAA@XZ @ 0x180059904
 * Callers:
 *     ??_GCamera@Engine@Spectre@@UEAAPEAXI@Z @ 0x180059D40 (--_GCamera@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1ShadowMapCamera@Engine@Spectre@@UEAA@XZ @ 0x18008DA74 (--1ShadowMapCamera@Engine@Spectre@@UEAA@XZ.c)
 *     ??1ViewerCamera@Engine@Spectre@@UEAA@XZ @ 0x180091F58 (--1ViewerCamera@Engine@Spectre@@UEAA@XZ.c)
 *     ??1ImageProcessingCamera@Engine@Spectre@@UEAA@XZ @ 0x180097998 (--1ImageProcessingCamera@Engine@Spectre@@UEAA@XZ.c)
 *     _Spectre::Engine::ShadowMapCamera::ShadowMapCamera_::_1_::dtor$1 @ 0x1800EA6C4 (_Spectre--Engine--ShadowMapCamera--ShadowMapCamera_--_1_--dtor$1.c)
 *     _Spectre::Engine::ViewerCamera::ViewerCamera_::_1_::dtor$2 @ 0x1800EAA77 (_Spectre--Engine--ViewerCamera--ViewerCamera_--_1_--dtor$2.c)
 *     _Spectre::Engine::ImageProcessingCamera::ImageProcessingCamera_::_1_::dtor$1 @ 0x1800EABF7 (_Spectre--Engine--ImageProcessingCamera--ImageProcessingCamera_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEAAXXZ @ 0x18001F6D0 (-_Tidy@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-.c)
 *     ??1?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180027F54 (--1-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceSampler@Engine@.c)
 *     ??1?$_Tree@V?$_Tmap_traits@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@U?$less@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180059830 (--1-$_Tree@V-$_Tmap_traits@U-$pair@HV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 *     ?_Tidy@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18005E800 (-_Tidy@-$vector@URenderPassInfo@Camera@Engine@Spectre@@V-$allocator@URenderPassInfo@Camera@Engin.c)
 */

void __fastcall Spectre::Engine::Camera::~Camera(Spectre::Engine::Camera *this, __int64 a2)
{
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8; // rcx

  *(_QWORD *)this = &Spectre::Engine::Camera::`vftable';
  std::_Func_class<void,>::_Tidy((__int64)this + 1704, a2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 211);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 209);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 207);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 205);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  std::_Tree<std::_Tmap_traits<std::pair<int,std::string>,Spectre::Utils::Math::Vector4,std::less<std::pair<int,std::string>>,std::allocator<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>>,0>>::~_Tree<std::_Tmap_traits<std::pair<int,std::string>,Spectre::Utils::Math::Vector4,std::less<std::pair<int,std::string>>,std::allocator<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>>,0>>((void **)this + 202);
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>((void **)this + 56);
  std::vector<std::wstring>::_Tidy((__int64)this + 416);
  if ( *((_BYTE *)this + 388) )
    *((_BYTE *)this + 388) = 0;
  std::string::_Tidy_deallocate((__int64)this + 248);
  std::string::_Tidy_deallocate((__int64)this + 216);
  std::string::_Tidy_deallocate((__int64)this + 184);
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 20);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v8 = (std::_Ref_count_base *)*((_QWORD *)this + 18);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  std::vector<Spectre::Engine::Camera::RenderPassInfo>::_Tidy((char *)this + 104);
  Spectre::Engine::Component::~Component(this);
}
