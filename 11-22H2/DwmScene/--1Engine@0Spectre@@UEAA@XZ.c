/*
 * XREFs of ??1Engine@0Spectre@@UEAA@XZ @ 0x180031CC4
 * Callers:
 *     ??_GEngine@0Spectre@@UEAAPEAXI@Z @ 0x180032600 (--_GEngine@0Spectre@@UEAAPEAXI@Z.c)
 *     ??1ViewerEngine@Engine@Spectre@@UEAA@XZ @ 0x1800640C8 (--1ViewerEngine@Engine@Spectre@@UEAA@XZ.c)
 *     _Spectre::Engine::ViewerEngine::ViewerEngine_::_1_::dtor$6 @ 0x1800E7ED8 (_Spectre--Engine--ViewerEngine--ViewerEngine_--_1_--dtor$6.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@AEAAXXZ @ 0x1800105A8 (-_Tidy@-$vector@U-$pair@II@std@@V-$allocator@U-$pair@II@std@@@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??1DeviceDescription@Engine@Spectre@@QEAA@XZ @ 0x1800179FC (--1DeviceDescription@Engine@Spectre@@QEAA@XZ.c)
 *     ??1Lockable@Engine@Spectre@@QEAA@XZ @ 0x180025B30 (--1Lockable@Engine@Spectre@@QEAA@XZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180027F54 (--1-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceSampler@Engine@.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@U?$owner_less@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800317DC (--1-$_Tree@V-$_Tmap_traits@V-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V-$shared_ptr@VDispla.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@U?$owner_less@V?$weak_ptr@VScene@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18003180C (--1-$_Tree@V-$_Tmap_traits@V-$weak_ptr@VScene@Engine@Spectre@@@std@@V-$vector@V-$shared_ptr@VCam.c)
 *     ??1?$unique_ptr@VCpuProfileStatsRenderer@Engine@Spectre@@U?$default_delete@VCpuProfileStatsRenderer@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x180031BA0 (--1-$unique_ptr@VCpuProfileStatsRenderer@Engine@Spectre@@U-$default_delete@VCpuProfileStatsRende.c)
 *     ??1?$unique_ptr@VISymbolManager@Engine@Spectre@@U?$default_delete@VISymbolManager@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x180031BD4 (--1-$unique_ptr@VISymbolManager@Engine@Spectre@@U-$default_delete@VISymbolManager@Engine@Spectre.c)
 *     ??1GpuProfileData@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ @ 0x180031F1C (--1GpuProfileData@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ.c)
 *     ??1thread@std@@QEAA@XZ @ 0x180032088 (--1thread@std@@QEAA@XZ.c)
 *     ?Shutdown@Engine@1Spectre@@QEAAXXZ @ 0x180036EAC (-Shutdown@Engine@1Spectre@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180038590 (-_Tidy@-$vector@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr@VRe.c)
 *     ??1FrameData@Engine@Spectre@@QEAA@XZ @ 0x1800743B0 (--1FrameData@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=30
void __fastcall Spectre::Engine::Engine::~Engine(Spectre::Engine::Engine *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  _QWORD **v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  std::_Ref_count_base *v10; // rcx
  std::_Ref_count_base *v11; // rcx

  *(_QWORD *)this = &Spectre::Engine::Engine::`vftable';
  Spectre::Engine::Engine::Shutdown(this);
  Spectre::Utils::TelemetryTraceLogger::GpuProfileData::~GpuProfileData((Spectre::Engine::Engine *)((char *)this + 1424));
  std::wstring::_Tidy_deallocate((__int64)this + 1392);
  _Mtx_destroy_in_situ((Spectre::Engine::Engine *)((char *)this + 1280));
  _Cnd_destroy_in_situ((Spectre::Engine::Engine *)((char *)this + 1208));
  std::thread::~thread((Spectre::Engine::Engine *)((char *)this + 1184));
  Spectre::Engine::Lockable::~Lockable((Spectre::Engine::Engine *)((char *)this + 1104));
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>((void **)this + 135);
  std::unique_ptr<Spectre::Engine::CpuProfileStatsRenderer>::~unique_ptr<Spectre::Engine::CpuProfileStatsRenderer>((void ***)this + 123);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 122);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::_Tidy((char *)this + 888);
  std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::_Tidy((char *)this + 864);
  Spectre::Engine::Lockable::~Lockable((Spectre::Engine::Engine *)((char *)this + 808));
  std::_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::Scene>,std::vector<std::shared_ptr<Spectre::Engine::Camera>>,std::owner_less<std::weak_ptr<Spectre::Engine::Scene>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::Scene> const,std::vector<std::shared_ptr<Spectre::Engine::Camera>>>>,0>>::~_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::Scene>,std::vector<std::shared_ptr<Spectre::Engine::Camera>>,std::owner_less<std::weak_ptr<Spectre::Engine::Scene>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::Scene> const,std::vector<std::shared_ptr<Spectre::Engine::Camera>>>>,0>>((void **)this + 91);
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)this + 704);
  Spectre::Engine::DeviceDescription::~DeviceDescription((Spectre::Engine::Engine *)((char *)this + 568));
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 65);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 63);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 61);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 59);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  Spectre::Engine::FrameData::~FrameData((Spectre::Engine::Engine *)((char *)this + 368));
  Spectre::Engine::Lockable::~Lockable((Spectre::Engine::Engine *)((char *)this + 312));
  std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::_Tidy((char *)this + 288);
  std::vector<std::pair<unsigned int,unsigned int>>::_Tidy((__int64)this + 256);
  std::_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::RenderDevice>,std::shared_ptr<Spectre::Engine::Display>,std::owner_less<std::weak_ptr<Spectre::Engine::RenderDevice>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>>,0>>::~_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::RenderDevice>,std::shared_ptr<Spectre::Engine::Display>,std::owner_less<std::weak_ptr<Spectre::Engine::RenderDevice>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>>,0>>((void **)this + 23);
  v7 = (_QWORD **)*((_QWORD *)this + 21);
  *v7[1] = 0LL;
  v8 = *v7;
  if ( *v7 )
  {
    do
    {
      v9 = (_QWORD *)*v8;
      v10 = (std::_Ref_count_base *)v8[3];
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
      std::_Deallocate<16,0>(v8, 0x20uLL);
      v8 = v9;
    }
    while ( v9 );
  }
  std::_Deallocate<16,0>(*((void **)this + 21), 0x20uLL);
  Spectre::Engine::Lockable::~Lockable((Spectre::Engine::Engine *)((char *)this + 112));
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)this + 88);
  std::unique_ptr<Spectre::Engine::ISymbolManager>::~unique_ptr<Spectre::Engine::ISymbolManager>((__int64 (__fastcall ****)(_QWORD, __int64))this + 10);
  v11 = (std::_Ref_count_base *)*((_QWORD *)this + 9);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  Spectre::Engine::Lockable::~Lockable((Spectre::Engine::Engine *)((char *)this + 8));
}
