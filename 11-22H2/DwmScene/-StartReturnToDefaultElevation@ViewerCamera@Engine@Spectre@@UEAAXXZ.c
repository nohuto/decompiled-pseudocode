/*
 * XREFs of ?StartReturnToDefaultElevation@ViewerCamera@Engine@Spectre@@UEAAXXZ @ 0x180093290
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?GetTweenManager@Engine@1Spectre@@QEBA?AV?$shared_ptr@VTweenManager@Tweening@Utils@Spectre@@@std@@AEBV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x1800348A4 (-GetTweenManager@Engine@1Spectre@@QEBA-AV-$shared_ptr@VTweenManager@Tweening@Utils@Spectre@@@std.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     std::function_void___cdecl(void)_::operator___lambda_ea41cd23b26e0611689875f9c09e5ed7__0_ @ 0x180091554 (std--function_void___cdecl(void)_--operator___lambda_ea41cd23b26e0611689875f9c09e5ed7__0_.c)
 *     ??$CreateTween@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@Spectre@@QEAA?AV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@AEBU?$TweenOptions@M@123@W4CurveType@123@V?$TransformationDefault@M@123@@Z @ 0x180091880 (--$CreateTween@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tw_ea_180091880.c)
 *     ??0?$TweenOptions@M@Tweening@Utils@Spectre@@QEAA@AEBV?$shared_ptr@M@std@@MW4TweenDirection@123@@Z @ 0x180091C04 (--0-$TweenOptions@M@Tweening@Utils@Spectre@@QEAA@AEBV-$shared_ptr@M@std@@MW4TweenDirection@123@@.c)
 *     ??1?$TweenOptions@M@Tweening@Utils@Spectre@@QEAA@XZ @ 0x180091DA0 (--1-$TweenOptions@M@Tweening@Utils@Spectre@@QEAA@XZ.c)
 *     ?AccessElevation@ViewerCamera@Engine@Spectre@@QEAA?AV?$shared_ptr@M@std@@XZ @ 0x1800920B8 (-AccessElevation@ViewerCamera@Engine@Spectre@@QEAA-AV-$shared_ptr@M@std@@XZ.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall Spectre::Engine::ViewerCamera::StartReturnToDefaultElevation(Spectre::Engine::ViewerCamera *this)
{
  __int64 *Scene; // rax
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rdx
  Spectre::Engine::ViewerCamera *v6; // [rsp+38h] [rbp-C8h] BYREF
  std::_Ref_count_base *v7; // [rsp+40h] [rbp-C0h]
  __int64 v8; // [rsp+48h] [rbp-B8h] BYREF
  std::_Ref_count_base *v9; // [rsp+50h] [rbp-B0h]
  __int64 v10; // [rsp+58h] [rbp-A8h] BYREF
  std::_Ref_count_base *v11; // [rsp+60h] [rbp-A0h]
  __int64 v12; // [rsp+68h] [rbp-98h] BYREF
  std::_Ref_count_base *v13; // [rsp+70h] [rbp-90h]
  _QWORD v14[15]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v15[72]; // [rsp+F8h] [rbp-8h] BYREF

  Spectre::Engine::Component::GetEngine(this);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 56, &v6);
  Scene = (__int64 *)Spectre::Engine::SceneNode::GetScene((__int64)v6, &v8);
  Spectre::Engine::Engine::GetTweenManager(v3, &v12, Scene);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  Spectre::Engine::ViewerCamera::AccessElevation((__int64)this, &v10);
  Spectre::Utils::Tweening::TweenOptions<float>::TweenOptions<float>(v14, &v10, *((float *)this + 460));
  v14[5] = (unsigned int)(int)(float)(*((float *)this + 462) * 1000000000.0);
  v6 = this;
  std::function_void___cdecl_void__::operator___lambda_ea41cd23b26e0611689875f9c09e5ed7__0_((__int64)v15, &v6);
  v4 = Spectre::Utils::Tweening::TweenManager::CreateTween<float,Spectre::Utils::Tweening::TransformationDefault<float>>(
         v12,
         &v8,
         v14);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 221, v4);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  *((_WORD *)this + 948) = 1;
  Spectre::Utils::Tweening::TweenOptions<float>::~TweenOptions<float>(v14, v5);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
}
