/*
 * XREFs of ??$GetTweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@YA?AV?$unique_ptr@V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@U?$default_delete@V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@@std@@@std@@V?$shared_ptr@M@4@MMV?$TransformationDefault@M@012@@Z @ 0x1800918DC
 * Callers:
 *     ??$CreateTween@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@Spectre@@QEAA?AV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@AEBU?$TweenOptions@M@123@V?$unique_ptr@VICurve@Tweening@Utils@Spectre@@U?$default_delete@VICurve@Tweening@Utils@Spectre@@@std@@@5@V?$TransformationDefault@M@123@@Z @ 0x18009165C (--$CreateTween@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_unique@V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@AEAV?$shared_ptr@M@std@@AEAMAEAMAEAV?$TransformationDefault@M@234@$0A@@std@@YA?AV?$unique_ptr@V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@U?$default_delete@V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@@std@@@0@AEAV?$shared_ptr@M@0@AEAM1AEAV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Z @ 0x180091A40 (--$make_unique@V-$TweenProperty@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Ut.c)
 */

__int64 __fastcall Spectre::Utils::Tweening::GetTweenProperty<float,Spectre::Utils::Tweening::TransformationDefault<float>>(
        __int64 a1,
        __int64 a2,
        float a3,
        float a4)
{
  std::_Ref_count_base *v6; // rcx
  float v8; // [rsp+50h] [rbp+18h] BYREF
  float v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v8 = a3;
  std::make_unique<Spectre::Utils::Tweening::TweenProperty<float,Spectre::Utils::Tweening::TransformationDefault<float>>,std::shared_ptr<float> &,float &,float &,Spectre::Utils::Tweening::TransformationDefault<float> &,0>(
    a1,
    a2,
    &v8,
    &v9);
  v6 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return a1;
}
