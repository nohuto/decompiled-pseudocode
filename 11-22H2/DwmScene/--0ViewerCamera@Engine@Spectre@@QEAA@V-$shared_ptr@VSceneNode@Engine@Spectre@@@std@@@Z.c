/*
 * XREFs of ??0ViewerCamera@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180091C94
 * Callers:
 *     ??$make_shared@VViewerCamera@Engine@Spectre@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VViewerCamera@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x180063A00 (--$make_shared@VViewerCamera@Engine@Spectre@@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std.c)
 *     ??$make_shared@VViewerCamera@Engine@Spectre@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VViewerCamera@Engine@Spectre@@@0@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x1800919A4 (--$make_shared@VViewerCamera@Engine@Spectre@@AEAV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??E?$_Atomic_integral@H$03@std@@QEAAHXZ @ 0x18001D354 (--E-$_Atomic_integral@H$03@std@@QEAAHXZ.c)
 *     ??0Camera@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18005930C (--0Camera@Engine@Spectre@@QEAA@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?Reset@ViewerCamera@Engine@Spectre@@UEAAXXZ @ 0x180092DB0 (-Reset@ViewerCamera@Engine@Spectre@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
Spectre::Engine::Camera *__fastcall Spectre::Engine::ViewerCamera::ViewerCamera(
        Spectre::Engine::Camera *this,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  std::_Ref_count_base *v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v7, a2);
  Spectre::Engine::Camera::Camera(this, (__int64)v4);
  *(_QWORD *)this = &Spectre::Engine::ViewerCamera::`vftable';
  *((_QWORD *)this + 221) = 0LL;
  *((_QWORD *)this + 222) = 0LL;
  *((_QWORD *)this + 223) = 0LL;
  *((_QWORD *)this + 224) = 0LL;
  *((_QWORD *)this + 225) = 0LL;
  *((_DWORD *)this + 452) = 0;
  *((_DWORD *)this + 457) = 1061158912;
  *((_DWORD *)this + 458) = 1092616192;
  *((_DWORD *)this + 470) = 1071644672;
  *((_DWORD *)this + 476) = std::_Atomic_integral<int,4>::operator++((__int64)&Spectre::Engine::ViewerCamera::sCounter);
  *(_QWORD *)((char *)this + 1884) = 0LL;
  *((_DWORD *)this + 460) = 1048971922;
  *((_DWORD *)this + 459) = -1077342245;
  *((_DWORD *)this + 464) = 1082130432;
  *((_DWORD *)this + 461) = 1077936128;
  *((_DWORD *)this + 463) = 1069547520;
  *((_DWORD *)this + 465) = 1084227584;
  *((_QWORD *)this + 225) = 0LL;
  *((_DWORD *)this + 452) = 0;
  Spectre::Engine::ViewerCamera::Reset(this);
  v5 = (std::_Ref_count_base *)a2[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return this;
}
