/*
 * XREFs of ??$?4V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@U?$default_delete@V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@@std@@$0A@@?$unique_ptr@VITweenable@Tweening@Utils@Spectre@@U?$default_delete@VITweenable@Tweening@Utils@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@U?$default_delete@V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@@std@@@1@@Z @ 0x18009162C
 * Callers:
 *     ??$CreateTween@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@Spectre@@QEAA?AV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@AEBU?$TweenOptions@M@123@V?$unique_ptr@VICurve@Tweening@Utils@Spectre@@U?$default_delete@VICurve@Tweening@Utils@Spectre@@@std@@@5@V?$TransformationDefault@M@123@@Z @ 0x18009165C (--$CreateTween@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@.c)
 * Callees:
 *     ??R?$default_delete@VITweenable@Tweening@Utils@Spectre@@@std@@QEBAXPEAVITweenable@Tweening@Utils@Spectre@@@Z @ 0x180091FA0 (--R-$default_delete@VITweenable@Tweening@Utils@Spectre@@@std@@QEBAXPEAVITweenable@Tweening@Utils.c)
 */

__int64 *__fastcall std::unique_ptr<Spectre::Utils::Tweening::ITweenable>::operator=<Spectre::Utils::Tweening::TweenProperty<float,Spectre::Utils::Tweening::TransformationDefault<float>>,std::default_delete<Spectre::Utils::Tweening::TweenProperty<float,Spectre::Utils::Tweening::TransformationDefault<float>>>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<Spectre::Utils::Tweening::ITweenable>::operator()();
  return a1;
}
