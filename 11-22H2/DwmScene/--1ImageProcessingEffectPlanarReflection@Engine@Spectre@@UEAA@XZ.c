/*
 * XREFs of ??1ImageProcessingEffectPlanarReflection@Engine@Spectre@@UEAA@XZ @ 0x180093BE0
 * Callers:
 *     ??_GImageProcessingEffectPlanarReflection@Engine@Spectre@@UEAAPEAXI@Z @ 0x180093C80 (--_GImageProcessingEffectPlanarReflection@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::ImageProcessingEffectPlanarReflection::~ImageProcessingEffectPlanarReflection(
        Spectre::Engine::ImageProcessingEffectPlanarReflection *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  *(_QWORD *)this = &Spectre::Engine::ImageProcessingEffectPlanarReflection::`vftable';
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 28);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 26);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 24);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  Spectre::Engine::ImageProcessingEffect::~ImageProcessingEffect(this);
}
