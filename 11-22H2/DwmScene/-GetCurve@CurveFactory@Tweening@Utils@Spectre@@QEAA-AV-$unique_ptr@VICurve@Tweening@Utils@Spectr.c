/*
 * XREFs of ?GetCurve@CurveFactory@Tweening@Utils@Spectre@@QEAA?AV?$unique_ptr@VICurve@Tweening@Utils@Spectre@@U?$default_delete@VICurve@Tweening@Utils@Spectre@@@std@@@std@@W4CurveType@234@@Z @ 0x1800E0B74
 * Callers:
 *     ??$CreateTween@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@Spectre@@QEAA?AV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@AEBU?$TweenOptions@M@123@W4CurveType@123@V?$TransformationDefault@M@123@@Z @ 0x180091880 (--$CreateTween@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tw_ea_180091880.c)
 * Callees:
 *     ??1?$unique_ptr@VExponentialEaseInOutCurve@Tweening@Utils@Spectre@@U?$default_delete@VExponentialEaseInOutCurve@Tweening@Utils@Spectre@@@std@@@std@@QEAA@XZ @ 0x180091E9C (--1-$unique_ptr@VExponentialEaseInOutCurve@Tweening@Utils@Spectre@@U-$default_delete@VExponentia.c)
 *     ??$make_unique@VExponentialEaseInOutCurve@Tweening@Utils@Spectre@@$$V$0A@@std@@YA?AV?$unique_ptr@VExponentialEaseInOutCurve@Tweening@Utils@Spectre@@U?$default_delete@VExponentialEaseInOutCurve@Tweening@Utils@Spectre@@@std@@@0@XZ @ 0x1800E0AFC (--$make_unique@VExponentialEaseInOutCurve@Tweening@Utils@Spectre@@$$V$0A@@std@@YA-AV-$unique_ptr.c)
 */

_QWORD *__fastcall Spectre::Utils::Tweening::CurveFactory::GetCurve(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = (__int64)a2;
  v3 = std::make_unique<Spectre::Utils::Tweening::ExponentialEaseInOutCurve,,0>(v6);
  v4 = *v3;
  *v3 = 0LL;
  *a2 = v4;
  std::unique_ptr<Spectre::Utils::Tweening::ExponentialEaseInOutCurve>::~unique_ptr<Spectre::Utils::Tweening::ExponentialEaseInOutCurve>(v6);
  return a2;
}
