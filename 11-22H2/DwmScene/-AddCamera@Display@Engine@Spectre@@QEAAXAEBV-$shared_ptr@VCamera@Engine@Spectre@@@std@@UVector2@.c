/*
 * XREFs of ?AddCamera@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@UVector2@Math@Utils@3@1W4EViewportMode@Camera@23@@Z @ 0x180057470
 * Callers:
 *     ?AddCamera@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z @ 0x180057404 (-AddCamera@Display@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x180056C54 (--$_Emplace_reallocate@AEBV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@-$vector@V-$shared_ptr@VC.c)
 *     ??$_Try_emplace@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@$$V@?$map@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@U?$owner_less@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@_N@1@$$QEAV?$weak_ptr@VCamera@Engine@Spectre@@@1@@Z @ 0x180056F38 (--$_Try_emplace@V-$weak_ptr@VCamera@Engine@Spectre@@@std@@$$V@-$map@V-$weak_ptr@VCamera@Engine@S.c)
 *     ?GetSceneLockless@Display@Engine@Spectre@@AEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x180057A00 (-GetSceneLockless@Display@Engine@Spectre@@AEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=6
int __fastcall Spectre::Engine::Display::AddCamera(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, int a5)
{
  char v7; // si
  struct _Mtx_internal_imp_t *v8; // rbx
  char v9; // r14
  bool v10; // r15
  unsigned int v11; // eax
  int v12; // r8d
  _QWORD *Scene; // rax
  unsigned int v14; // eax
  int v15; // r8d
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  std::_Ref_count_base *v20; // [rsp+38h] [rbp-C8h]
  __int64 v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+48h] [rbp-B8h]
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  std::_Ref_count_base *v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  _QWORD v26[4]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  std::_Ref_count_base *v28; // [rsp+90h] [rbp-70h]
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v30[56]; // [rsp+E0h] [rbp-20h] BYREF

  v22 = a4;
  v21 = a3;
  v7 = 0;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v25 = a1 + 128;
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 128));
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(*a2 + 56LL, &v23);
  v9 = 1;
  v10 = 1;
  if ( v23 )
  {
    v7 = 1;
    if ( *(_QWORD *)Spectre::Engine::SceneNode::GetScene(v23, &v27) )
      v10 = 0;
  }
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~1u;
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
  }
  if ( v10 )
  {
    std::string::string(&v27, (__int64)"Cameras added to Displays must be attached to a scene.");
    v11 = (unsigned int)std::string::string(
                          v26,
                          (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                   "source\\engine\\display.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v11, v12, (unsigned int)&v27, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  Spectre::Engine::Display::GetSceneLockless(a1, &v27);
  if ( !v27
    || (Scene = (_QWORD *)Spectre::Engine::SceneNode::GetScene(v23, &v19),
        v7 |= 2u,
        !std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>(Scene, &v27)) )
  {
    v9 = 0;
  }
  if ( (v7 & 2) != 0 && v20 )
    std::_Ref_count_base::_Decref(v20);
  if ( v9 )
  {
    std::string::string(pExceptionObject, (__int64)"Displays require that all cameras be in the same scene.");
    v14 = (unsigned int)std::string::string(
                          v26,
                          (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                   "source\\engine\\display.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)v30, v14, v15, (unsigned int)pExceptionObject, 0);
    throw (Spectre::Engine::EngineException *)v30;
  }
  v16 = *(_QWORD **)(a1 + 48);
  if ( v16 == *(_QWORD **)(a1 + 56) )
  {
    std::vector<std::shared_ptr<Spectre::Engine::Camera>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::Camera> const &>(
      (char **)(a1 + 40),
      *(char **)(a1 + 48),
      a2);
  }
  else
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v16, a2);
    *(_QWORD *)(a1 + 48) += 16LL;
  }
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v19, a2);
  v17 = *(_QWORD *)std::map<std::weak_ptr<Spectre::Engine::Camera>,Spectre::Engine::Display::CameraViewport,std::owner_less<std::weak_ptr<Spectre::Engine::Camera>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::Camera> const,Spectre::Engine::Display::CameraViewport>>>::_Try_emplace<std::weak_ptr<Spectre::Engine::Camera>,>(
                     (__int64 *)(a1 + 88),
                     (__int64)v26,
                     (__int64)&v19);
  *(_QWORD *)(v17 + 48) = v21;
  *(_QWORD *)(v17 + 56) = v22;
  *(_DWORD *)(v17 + 64) = a5;
  if ( v20 )
    std::_Ref_count_base::_Decwref(v20);
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
  return _Mtx_unlock(v8);
}
