/*
 * XREFs of ??1RenderDevice@Engine@Spectre@@UEAA@XZ @ 0x180025BA0
 * Callers:
 *     ??_GRenderDevice@Engine@Spectre@@UEAAPEAXI@Z @ 0x180025E70 (--_GRenderDevice@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1RenderDeviceGeneric@Engine@Spectre@@UEAA@XZ @ 0x1800527C8 (--1RenderDeviceGeneric@Engine@Spectre@@UEAA@XZ.c)
 *     ??1RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800C4318 (--1RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 *     _Spectre::Engine::RenderDeviceGeneric::RenderDeviceGeneric_::_1_::dtor$2 @ 0x1800E74CC (_Spectre--Engine--RenderDeviceGeneric--RenderDeviceGeneric_--_1_--dtor$2.c)
 *     _Spectre::Engine::D3D11::RenderDeviceD3D11::RenderDeviceD3D11_::_1_::dtor$2 @ 0x1800F157D (_Spectre--Engine--D3D11--RenderDeviceD3D11--RenderDeviceD3D11_--_1_--dtor$2.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??1DeviceDescription@Engine@Spectre@@QEAA@XZ @ 0x1800179FC (--1DeviceDescription@Engine@Spectre@@QEAA@XZ.c)
 *     ??1CaptureState@RenderDevice@Engine@Spectre@@QEAA@XZ @ 0x180025AB0 (--1CaptureState@RenderDevice@Engine@Spectre@@QEAA@XZ.c)
 *     ??1Lockable@Engine@Spectre@@QEAA@XZ @ 0x180025B30 (--1Lockable@Engine@Spectre@@QEAA@XZ.c)
 *     ??1QueryPool@RenderDevice@Engine@Spectre@@UEAA@XZ @ 0x180025B6C (--1QueryPool@RenderDevice@Engine@Spectre@@UEAA@XZ.c)
 *     ??1ResourceFactory@Engine@Spectre@@QEAA@XZ @ 0x180025CD0 (--1ResourceFactory@Engine@Spectre@@QEAA@XZ.c)
 *     ?Shutdown@RenderDevice@Engine@Spectre@@QEAAXXZ @ 0x180027148 (-Shutdown@RenderDevice@Engine@Spectre@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@AEAAXXZ @ 0x180027784 (-_Tidy@-$vector@V-$function@$$A6AXXZ@std@@V-$allocator@V-$function@$$A6AXXZ@std@@@2@@std@@AEAAXX.c)
 *     ??1ResourceManager@Engine@Spectre@@QEAA@XZ @ 0x1800700C4 (--1ResourceManager@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::RenderDevice::~RenderDevice(Spectre::Engine::RenderDevice *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx

  *(_QWORD *)this = &Spectre::Engine::RenderDevice::`vftable';
  Spectre::Engine::RenderDevice::Shutdown(this);
  Spectre::Engine::RenderDevice::QueryPool::~QueryPool((void **)this + 512);
  Spectre::Engine::RenderDevice::CaptureState::~CaptureState((Spectre::Engine::RenderDevice *)((char *)this + 3992));
  std::vector<std::function<void (void)>>::_Tidy((char *)this + 3856);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 481);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  `eh vector destructor iterator'(
    (char *)this + 1280,
    40LL,
    64LL,
    (void (*)(void *))std::pair<int,std::string>::~pair<int,std::string>);
  Spectre::Engine::ResourceManager::~ResourceManager((Spectre::Engine::RenderDevice *)((char *)this + 1056));
  Spectre::Engine::ResourceManager::~ResourceManager((Spectre::Engine::RenderDevice *)((char *)this + 832));
  Spectre::Engine::ResourceManager::~ResourceManager((Spectre::Engine::RenderDevice *)((char *)this + 608));
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 75);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  Spectre::Engine::ResourceFactory::~ResourceFactory((Spectre::Engine::RenderDevice *)((char *)this + 496));
  Spectre::Engine::DeviceDescription::~DeviceDescription((Spectre::Engine::RenderDevice *)((char *)this + 288));
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 35);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)this + 248);
  std::wstring::_Tidy_deallocate((__int64)this + 208);
  std::wstring::_Tidy_deallocate((__int64)this + 176);
  std::wstring::_Tidy_deallocate((__int64)this + 144);
  std::wstring::_Tidy_deallocate((__int64)this + 112);
  std::wstring::_Tidy_deallocate((__int64)this + 80);
  Spectre::Engine::Lockable::~Lockable((Spectre::Engine::RenderDevice *)((char *)this + 24));
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v5 )
    std::_Ref_count_base::_Decwref(v5);
}
