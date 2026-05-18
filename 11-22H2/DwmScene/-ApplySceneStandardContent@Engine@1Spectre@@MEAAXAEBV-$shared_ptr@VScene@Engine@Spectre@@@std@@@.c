/*
 * XREFs of ?ApplySceneStandardContent@Engine@1Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180032880
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800134DC (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetExclusiveLock@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180029FF0 (-GetExclusiveLock@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre@@@std@@XZ.c)
 *     ??$AddComponent@VCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@XZ @ 0x18002DAEC (--$AddComponent@VCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VCamera@E.c)
 *     ?AddCamera@Engine@1Spectre@@QEAA_KV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z @ 0x1800326EC (-AddCamera@Engine@1Spectre@@QEAA_KV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z.c)
 *     ?GenerateUniqueID@SceneNode@Engine@Spectre@@SA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18003BF14 (-GenerateUniqueID@SceneNode@Engine@Spectre@@SA_KAEBV-$basic_string@DU-$char_traits@D@std@@V-$all.c)
 *     ?AddNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x18004049C (-AddNode@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV-$basic_s.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall Spectre::Engine::Engine::ApplySceneStandardContent(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 UniqueID; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-49h] BYREF
  __int64 v10; // [rsp+30h] [rbp-39h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-31h]
  Spectre::Engine::SceneNode *v12; // [rsp+40h] [rbp-29h] BYREF
  std::_Ref_count_base *v13; // [rsp+48h] [rbp-21h]
  _BYTE v14[16]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v15[4]; // [rsp+60h] [rbp-9h] BYREF
  void *v16[4]; // [rsp+80h] [rbp+17h] BYREF

  Spectre::Engine::Lockable::GetExclusiveLock((Spectre::Engine::Mutex *)(*a2 + 16), (__int64)v14);
  v4 = *a2;
  v5 = std::wstring::wstring(v15, (__int64)&Spectre::Engine::SceneLayerStandardID::kCameras);
  std::string::string(v16, (__int64)"DefaultCamera");
  UniqueID = Spectre::Engine::SceneNode::GenerateUniqueID(v16);
  Spectre::Engine::Scene::AddNode(v4, &v12, UniqueID, v5, v15);
  std::string::_Tidy_deallocate((__int64)v16);
  Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::Camera>(v12, &v10);
  std::string::string(v16, (__int64)"DefaultCamera");
  v7 = v10;
  std::string::operator=((void **)(v10 + 24), v16);
  std::string::_Tidy_deallocate((__int64)v16);
  *(_BYTE *)(v7 + 72) = 0;
  v8 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v9,
         &v10);
  Spectre::Engine::Engine::AddCamera(a1, v8);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v14);
}
