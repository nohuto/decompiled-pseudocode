/*
 * XREFs of ??1?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@UEAA@XZ @ 0x180091E14
 * Callers:
 *     ??_E?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@UEAAPEAXI@Z @ 0x180091FE0 (--_E-$TweenProperty@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Utils::Tweening::TweenProperty<float,Spectre::Utils::Tweening::TransformationDefault<float>>::~TweenProperty<float,Spectre::Utils::Tweening::TransformationDefault<float>>(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 32);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  v3 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
}
