/*
 * XREFs of ??1?$TweenOptions@M@Tweening@Utils@Spectre@@QEAA@XZ @ 0x180091DA0
 * Callers:
 *     ??$?0M@Tween@Tweening@Utils@Spectre@@AEAA@U?$TweenOptions@M@123@V?$unique_ptr@VICurve@Tweening@Utils@Spectre@@U?$default_delete@VICurve@Tweening@Utils@Spectre@@@std@@@std@@@Z @ 0x180091458 (--$-0M@Tween@Tweening@Utils@Spectre@@AEAA@U-$TweenOptions@M@123@V-$unique_ptr@VICurve@Tweening@U.c)
 *     ?StartIdleRotation@ViewerCamera@Engine@Spectre@@MEAAXXZ @ 0x180093110 (-StartIdleRotation@ViewerCamera@Engine@Spectre@@MEAAXXZ.c)
 *     ?StartReturnToDefaultElevation@ViewerCamera@Engine@Spectre@@UEAAXXZ @ 0x180093290 (-StartReturnToDefaultElevation@ViewerCamera@Engine@Spectre@@UEAAXXZ.c)
 *     _Spectre::Utils::Tweening::Tween::Tween_float__::_1_::dtor$1 @ 0x1800EA962 (_Spectre--Utils--Tweening--Tween--Tween_float__--_1_--dtor$1.c)
 *     _Spectre::Engine::ViewerCamera::StartReturnToDefaultElevation_::_1_::dtor$4 @ 0x1800EAABB (_Spectre--Engine--ViewerCamera--StartReturnToDefaultElevation_--_1_--dtor$4.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Utils::Tweening::TweenOptions<float>::~TweenOptions<float>(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx

  std::_Func_class<void,>::_Tidy((__int64)(a1 + 15), a2);
  v4 = (_QWORD *)a1[14];
  if ( v4 )
  {
    LOBYTE(v3) = v4 != a1 + 7;
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 32LL))(v4, v3);
    a1[14] = 0LL;
  }
  v5 = (std::_Ref_count_base *)a1[3];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = (std::_Ref_count_base *)a1[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
