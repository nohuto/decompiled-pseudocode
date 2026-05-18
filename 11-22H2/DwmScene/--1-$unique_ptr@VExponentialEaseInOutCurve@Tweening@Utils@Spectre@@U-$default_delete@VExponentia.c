/*
 * XREFs of ??1?$unique_ptr@VExponentialEaseInOutCurve@Tweening@Utils@Spectre@@U?$default_delete@VExponentialEaseInOutCurve@Tweening@Utils@Spectre@@@std@@@std@@QEAA@XZ @ 0x180091E9C
 * Callers:
 *     ??$?0M@Tween@Tweening@Utils@Spectre@@AEAA@U?$TweenOptions@M@123@V?$unique_ptr@VICurve@Tweening@Utils@Spectre@@U?$default_delete@VICurve@Tweening@Utils@Spectre@@@std@@@std@@@Z @ 0x180091458 (--$-0M@Tween@Tweening@Utils@Spectre@@AEAA@U-$TweenOptions@M@123@V-$unique_ptr@VICurve@Tweening@U.c)
 *     ??$CreateTween@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@Spectre@@QEAA?AV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@AEBU?$TweenOptions@M@123@V?$unique_ptr@VICurve@Tweening@Utils@Spectre@@U?$default_delete@VICurve@Tweening@Utils@Spectre@@@std@@@5@V?$TransformationDefault@M@123@@Z @ 0x18009165C (--$CreateTween@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@.c)
 *     ??1Tween@Tweening@Utils@Spectre@@QEAA@XZ @ 0x180091EF0 (--1Tween@Tweening@Utils@Spectre@@QEAA@XZ.c)
 *     ?GetCurve@CurveFactory@Tweening@Utils@Spectre@@QEAA?AV?$unique_ptr@VICurve@Tweening@Utils@Spectre@@U?$default_delete@VICurve@Tweening@Utils@Spectre@@@std@@@std@@W4CurveType@234@@Z @ 0x1800E0B74 (-GetCurve@CurveFactory@Tweening@Utils@Spectre@@QEAA-AV-$unique_ptr@VICurve@Tweening@Utils@Spectr.c)
 *     _Spectre::Utils::Tweening::Tween::Tween_float__::_1_::dtor$0 @ 0x1800EA950 (_Spectre--Utils--Tweening--Tween--Tween_float__--_1_--dtor$0.c)
 *     _Spectre::Utils::Tweening::Tween::Tween_float__::_1_::dtor$2 @ 0x1800EA974 (_Spectre--Utils--Tweening--Tween--Tween_float__--_1_--dtor$2.c)
 *     _Spectre::Utils::Tweening::TweenManager::CreateTween_float_Spectre::Utils::Tweening::TransformationDefault_float____::_1_::dtor$0 @ 0x1800EA9B2 (_Spectre--Utils--Tweening--TweenManager--CreateTween_float_Spectre--Utils--Tweening--Transformat.c)
 *     _Spectre::Utils::Tweening::TweenManager::CreateTween_float_Spectre::Utils::Tweening::TransformationDefault_float____::_1_::dtor$2 @ 0x1800EA9E8 (_Spectre--Utils--Tweening--TweenManager--CreateTween_float_Spectre--Utils--Tweening_ea_1800EA9E8.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<Spectre::Utils::Tweening::ExponentialEaseInOutCurve>::~unique_ptr<Spectre::Utils::Tweening::ExponentialEaseInOutCurve>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  return result;
}
