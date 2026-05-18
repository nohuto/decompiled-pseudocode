/*
 * XREFs of ??$make_unique@VExponentialEaseInOutCurve@Tweening@Utils@Spectre@@$$V$0A@@std@@YA?AV?$unique_ptr@VExponentialEaseInOutCurve@Tweening@Utils@Spectre@@U?$default_delete@VExponentialEaseInOutCurve@Tweening@Utils@Spectre@@@std@@@0@XZ @ 0x1800E0AFC
 * Callers:
 *     ?GetCurve@CurveFactory@Tweening@Utils@Spectre@@QEAA?AV?$unique_ptr@VICurve@Tweening@Utils@Spectre@@U?$default_delete@VICurve@Tweening@Utils@Spectre@@@std@@@std@@W4CurveType@234@@Z @ 0x1800E0B74 (-GetCurve@CurveFactory@Tweening@Utils@Spectre@@QEAA-AV-$unique_ptr@VICurve@Tweening@Utils@Spectr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<Spectre::Utils::Tweening::ExponentialEaseInOutCurve,,0>(_QWORD *a1)
{
  _QWORD *v2; // rax

  v2 = operator new(8uLL);
  if ( v2 )
    *v2 = &Spectre::Utils::Tweening::ExponentialEaseInOutCurve::`vftable';
  *a1 = v2;
  return a1;
}
