/*
 * XREFs of ??0?$TweenOptions@M@Tweening@Utils@Spectre@@QEAA@AEBU0123@@Z @ 0x180091B88
 * Callers:
 *     ??$CreateTween@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@Spectre@@QEAA?AV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@AEBU?$TweenOptions@M@123@V?$unique_ptr@VICurve@Tweening@Utils@Spectre@@U?$default_delete@VICurve@Tweening@Utils@Spectre@@@std@@@5@V?$TransformationDefault@M@123@@Z @ 0x18009165C (--$CreateTween@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x18001D074 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$function@$$A6AXN@Z@std@@QEAA@AEBV01@@Z @ 0x180091C4C (--0-$function@$$A6AXN@Z@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Utils::Tweening::TweenOptions<float>::TweenOptions<float>(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    (_QWORD *)a1,
    (_QWORD *)a2);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    (_QWORD *)(v4 + 16),
    (_QWORD *)(v5 + 16));
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  std::function<void (double)>::function<void (double)>(a1 + 56, a2 + 56);
  std::function<void (void)>::function<void (void)>(a1 + 120, a2 + 120);
  return a1;
}
