/*
 * XREFs of ??0ImageProcessingCamera@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800978B4
 * Callers:
 *     ??$make_shared@VImageProcessingCamera@Engine@Spectre@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x180071CD0 (--$make_shared@VImageProcessingCamera@Engine@Spectre@@V-$shared_ptr@VSceneNode@Engine@Spectre@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800134DC (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$make_shared@VDefaultSceneNodeTraversal@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@0@XZ @ 0x1800252CC (--$make_shared@VDefaultSceneNodeTraversal@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VDefaultSce.c)
 *     ??0Camera@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18005930C (--0Camera@Engine@Spectre@@QEAA@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?AddRenderPass@Camera@Engine@Spectre@@QEAAH_K0V?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@0@Z @ 0x180059E28 (-AddRenderPass@Camera@Engine@Spectre@@QEAAH_K0V-$shared_ptr@VISceneNodeTraversal@Engine@Spectre@.c)
 */

// Hidden C++ exception states: #wind=3
void **__fastcall Spectre::Engine::ImageProcessingCamera::ImageProcessingCamera(void **this, _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int128 v6; // [rsp+30h] [rbp-50h] BYREF
  void **v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h] BYREF
  void *v9; // [rsp+58h] [rbp-28h] BYREF
  std::_Ref_count_base *v10; // [rsp+60h] [rbp-20h]

  v7 = this;
  v3 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v8,
         a2);
  Spectre::Engine::Camera::Camera((Spectre::Engine::Camera *)this, (__int64)v3);
  *this = &Spectre::Engine::ImageProcessingCamera::`vftable';
  v4 = std::make_shared<Spectre::Engine::DefaultSceneNodeTraversal,>(&v9);
  v6 = 0LL;
  v6 = *(_OWORD *)v4;
  *v4 = 0LL;
  v4[1] = 0LL;
  Spectre::Engine::Camera::AddRenderPass((__int64 *)this, 0LL, 0LL, &v6, 0LL);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  std::string::string(&v9, (__int64)"ImageProcessingCamera");
  std::string::operator=(this + 3, &v9);
  std::string::_Tidy_deallocate((__int64)&v9);
  return this;
}
