/*
 * XREFs of ??$CreateTween@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@Spectre@@QEAA?AV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@AEBU?$TweenOptions@M@123@W4CurveType@123@V?$TransformationDefault@M@123@@Z @ 0x180091880
 * Callers:
 *     ?StartIdleRotation@ViewerCamera@Engine@Spectre@@MEAAXXZ @ 0x180093110 (-StartIdleRotation@ViewerCamera@Engine@Spectre@@MEAAXXZ.c)
 *     ?StartReturnToDefaultElevation@ViewerCamera@Engine@Spectre@@UEAAXXZ @ 0x180093290 (-StartReturnToDefaultElevation@ViewerCamera@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ??$CreateTween@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@Spectre@@QEAA?AV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@AEBU?$TweenOptions@M@123@V?$unique_ptr@VICurve@Tweening@Utils@Spectre@@U?$default_delete@VICurve@Tweening@Utils@Spectre@@@std@@@5@V?$TransformationDefault@M@123@@Z @ 0x18009165C (--$CreateTween@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@.c)
 *     ?GetCurve@CurveFactory@Tweening@Utils@Spectre@@QEAA?AV?$unique_ptr@VICurve@Tweening@Utils@Spectre@@U?$default_delete@VICurve@Tweening@Utils@Spectre@@@std@@@std@@W4CurveType@234@@Z @ 0x1800E0B74 (-GetCurve@CurveFactory@Tweening@Utils@Spectre@@QEAA-AV-$unique_ptr@VICurve@Tweening@Utils@Spectr.c)
 */

_QWORD *__fastcall Spectre::Utils::Tweening::TweenManager::CreateTween<float,Spectre::Utils::Tweening::TransformationDefault<float>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 *Curve; // rax
  _QWORD *v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  Curve = (__int64 *)Spectre::Utils::Tweening::CurveFactory::GetCurve(a1, &v8);
  Spectre::Utils::Tweening::TweenManager::CreateTween<float,Spectre::Utils::Tweening::TransformationDefault<float>>(
    a1,
    a2,
    a3,
    Curve);
  return a2;
}
