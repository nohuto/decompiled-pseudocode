/*
 * XREFs of ?StartIdleRotation@ViewerCamera@Engine@Spectre@@MEAAXXZ @ 0x180093110
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?GetTweenManager@Engine@1Spectre@@QEBA?AV?$shared_ptr@VTweenManager@Tweening@Utils@Spectre@@@std@@AEBV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x1800348A4 (-GetTweenManager@Engine@1Spectre@@QEBA-AV-$shared_ptr@VTweenManager@Tweening@Utils@Spectre@@@std.c)
 *     ?shared_from_this@?$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VComponent@Engine@Spectre@@@2@XZ @ 0x1800433FC (-shared_from_this@-$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ??$CreateTween@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@Spectre@@QEAA?AV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@AEBU?$TweenOptions@M@123@W4CurveType@123@V?$TransformationDefault@M@123@@Z @ 0x180091880 (--$CreateTween@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tw_ea_180091880.c)
 *     ??0?$TweenOptions@M@Tweening@Utils@Spectre@@QEAA@AEBV?$shared_ptr@M@std@@MW4TweenDirection@123@@Z @ 0x180091C04 (--0-$TweenOptions@M@Tweening@Utils@Spectre@@QEAA@AEBV-$shared_ptr@M@std@@MW4TweenDirection@123@@.c)
 *     ??1?$TweenOptions@M@Tweening@Utils@Spectre@@QEAA@XZ @ 0x180091DA0 (--1-$TweenOptions@M@Tweening@Utils@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall Spectre::Engine::ViewerCamera::StartIdleRotation(Spectre::Engine::ViewerCamera *this)
{
  __int64 *Scene; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  std::_Ref_count_base *v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+38h] [rbp-C8h] BYREF
  std::_Ref_count_base *v9; // [rsp+40h] [rbp-C0h]
  __int64 v10; // [rsp+48h] [rbp-B8h] BYREF
  std::_Ref_count_base *v11; // [rsp+50h] [rbp-B0h]
  __int64 v12; // [rsp+58h] [rbp-A8h] BYREF
  std::_Ref_count_base *v13; // [rsp+60h] [rbp-A0h]
  __int64 v14; // [rsp+68h] [rbp-98h] BYREF
  std::_Ref_count_base *v15; // [rsp+70h] [rbp-90h]
  _QWORD v16[24]; // [rsp+80h] [rbp-80h] BYREF

  Spectre::Engine::Component::GetEngine(this);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 56, &v8);
  Scene = (__int64 *)Spectre::Engine::SceneNode::GetScene(v8, &v14);
  Spectre::Engine::Engine::GetTweenManager(v3, &v12, Scene);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v4 = std::enable_shared_from_this<Spectre::Engine::Component>::shared_from_this((__int64)this + 8, &v10);
  v8 = (__int64)this + 1900;
  v5 = (std::_Ref_count_base *)v4[1];
  v9 = v5;
  *v4 = 0LL;
  v4[1] = 0LL;
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  Spectre::Utils::Tweening::TweenOptions<float>::TweenOptions<float>(v16, &v8, *((float *)this + 463));
  v16[5] = (unsigned int)(int)(float)(*((float *)this + 465) * 1000000000.0);
  v6 = Spectre::Utils::Tweening::TweenManager::CreateTween<float,Spectre::Utils::Tweening::TransformationDefault<float>>(
         v12,
         &v10,
         v16);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 223, v6);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  *((_BYTE *)this + 1898) = 1;
  Spectre::Utils::Tweening::TweenOptions<float>::~TweenOptions<float>(v16, v7);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
}
