/*
 * XREFs of ??$?0M@Tween@Tweening@Utils@Spectre@@AEAA@U?$TweenOptions@M@123@V?$unique_ptr@VICurve@Tweening@Utils@Spectre@@U?$default_delete@VICurve@Tweening@Utils@Spectre@@@std@@@std@@@Z @ 0x180091458
 * Callers:
 *     ??$CreateTween@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@Spectre@@QEAA?AV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@AEBU?$TweenOptions@M@123@V?$unique_ptr@VICurve@Tweening@Utils@Spectre@@U?$default_delete@VICurve@Tweening@Utils@Spectre@@@std@@@5@V?$TransformationDefault@M@123@@Z @ 0x18009165C (--$CreateTween@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@.c)
 * Callees:
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x18001D074 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$function@$$A6AXN@Z@std@@QEAA@AEBV01@@Z @ 0x180091C4C (--0-$function@$$A6AXN@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$TweenOptions@M@Tweening@Utils@Spectre@@QEAA@XZ @ 0x180091DA0 (--1-$TweenOptions@M@Tweening@Utils@Spectre@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VExponentialEaseInOutCurve@Tweening@Utils@Spectre@@U?$default_delete@VExponentialEaseInOutCurve@Tweening@Utils@Spectre@@@std@@@std@@QEAA@XZ @ 0x180091E9C (--1-$unique_ptr@VExponentialEaseInOutCurve@Tweening@Utils@Spectre@@U-$default_delete@VExponentia.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Spectre::Utils::Tweening::Tween::Tween(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax

  v6 = *a3;
  *a3 = 0LL;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 52);
  *(_QWORD *)(a1 + 32) = 0LL;
  std::function<void (double)>::function<void (double)>(a1 + 40, a2 + 56);
  std::function<void (void)>::function<void (void)>(a1 + 104, a2 + 120);
  *(_BYTE *)(a1 + 168) = 0;
  Spectre::Utils::Tweening::TweenOptions<float>::~TweenOptions<float>(a2);
  std::unique_ptr<Spectre::Utils::Tweening::ExponentialEaseInOutCurve>::~unique_ptr<Spectre::Utils::Tweening::ExponentialEaseInOutCurve>(a3);
  return a1;
}
