/*
 * XREFs of ??1ImageProcessingEffect@Engine@Spectre@@UEAA@XZ @ 0x180097D2C
 * Callers:
 *     ??1ImageProcessingEffectPlanarReflection@Engine@Spectre@@UEAA@XZ @ 0x180093BE0 (--1ImageProcessingEffectPlanarReflection@Engine@Spectre@@UEAA@XZ.c)
 *     ??1ImageProcessingEffectBloom@Engine@Spectre@@UEAA@XZ @ 0x180095C2C (--1ImageProcessingEffectBloom@Engine@Spectre@@UEAA@XZ.c)
 *     ??_GImageProcessingEffect@Engine@Spectre@@UEAAPEAXI@Z @ 0x180097E50 (--_GImageProcessingEffect@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1ImageProcessingEffectBlur@Engine@Spectre@@UEAA@XZ @ 0x18009BF10 (--1ImageProcessingEffectBlur@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 */

void __fastcall Spectre::Engine::ImageProcessingEffect::~ImageProcessingEffect(
        Spectre::Engine::ImageProcessingEffect *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rcx

  *(_QWORD *)this = &Spectre::Engine::ImageProcessingEffect::`vftable';
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)this + 152);
  std::string::_Tidy_deallocate((__int64)this + 104);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 12);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 10);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 8);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 6);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 4);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  *(_QWORD *)this = &Spectre::Engine::IImageProcessingEffect::`vftable';
}
