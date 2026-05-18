/*
 * XREFs of ??1ImageProcessingEffectBlur@Engine@Spectre@@UEAA@XZ @ 0x18009BF10
 * Callers:
 *     ??_EImageProcessingEffectBlur@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009C110 (--_EImageProcessingEffectBlur@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@AEAAXXZ @ 0x1800105A8 (-_Tidy@-$vector@U-$pair@II@std@@V-$allocator@U-$pair@II@std@@@2@@std@@AEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ?clear@?$vector@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@2@@std@@QEAAXXZ @ 0x1800278E4 (-clear@-$vector@V-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VFra.c)
 */

void __fastcall Spectre::Engine::ImageProcessingEffectBlur::~ImageProcessingEffectBlur(
        Spectre::Engine::ImageProcessingEffectBlur *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8[2]; // [rsp+20h] [rbp-10h] BYREF

  *(_QWORD *)this = &Spectre::Engine::ImageProcessingEffectBlur::`vftable';
  *(_OWORD *)v8 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 9, (__int64 *)v8);
  if ( v8[1] )
    std::_Ref_count_base::_Decref(v8[1]);
  *(_OWORD *)v8 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 36, (__int64 *)v8);
  if ( v8[1] )
    std::_Ref_count_base::_Decref(v8[1]);
  *(_OWORD *)v8 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 40, (__int64 *)v8);
  if ( v8[1] )
    std::_Ref_count_base::_Decref(v8[1]);
  *(_OWORD *)v8 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 34, (__int64 *)v8);
  if ( v8[1] )
    std::_Ref_count_base::_Decref(v8[1]);
  *(_OWORD *)v8 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 25, (__int64 *)v8);
  if ( v8[1] )
    std::_Ref_count_base::_Decref(v8[1]);
  *(_OWORD *)v8 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 23, (__int64 *)v8);
  if ( v8[1] )
    std::_Ref_count_base::_Decref(v8[1]);
  std::vector<std::shared_ptr<Spectre::Engine::FrameBuffer>>::clear((__int64 *)this + 27);
  std::string::_Tidy_deallocate((__int64)this + 336);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 41);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 39);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 37);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 35);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  std::vector<std::pair<unsigned int,unsigned int>>::_Tidy((__int64)this + 240);
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)this + 216);
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 26);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 24);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  Spectre::Engine::ImageProcessingEffect::~ImageProcessingEffect(this);
}
