/*
 * XREFs of ??0Scene@Engine@Spectre@@AEAA@PEAV112@W4ThreadingMode@Lockable@12@@Z @ 0x18003FC0C
 * Callers:
 *     ?CreateInstance@Scene@Engine@Spectre@@SA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@W4ThreadingMode@Lockable@23@@Z @ 0x180040828 (-CreateInstance@Scene@Engine@Spectre@@SA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@W4T.c)
 * Callees:
 *     ??0Lockable@Engine@Spectre@@QEAA@W4ThreadingMode@012@@Z @ 0x180029EDC (--0Lockable@Engine@Spectre@@QEAA@W4ThreadingMode@012@@Z.c)
 *     ??0?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@@std@@@2@@std@@QEAA@XZ @ 0x18003FAB0 (--0-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$shared_ptr@VSceneLa.c)
 *     ??0?$map@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@@std@@QEAA@XZ @ 0x18003FAF0 (--0-$map@Vtype_index@std@@V-$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U-$less@Vtype_index@.c)
 *     ??0?$unordered_map@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18003FB30 (--0-$unordered_map@_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@std@@U-$hash@_K@2@U-$equal_to@_K@2@.c)
 *     ??0SharedMutex@Utils@Spectre@@QEAA@XZ @ 0x1800E0CE0 (--0SharedMutex@Utils@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Spectre::Engine::Scene::Scene(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  Spectre::Engine::Lockable::Lockable(a1 + 16, 0);
  *(_QWORD *)(a1 + 72) = 0xFFFFFFFF00000001uLL;
  *(_QWORD *)(a1 + 80) = 0LL;
  std::map<std::wstring,std::shared_ptr<Spectre::Engine::SceneLayer>>::map<std::wstring,std::shared_ptr<Spectre::Engine::SceneLayer>>((_QWORD *)(a1 + 88));
  *(_QWORD *)(a1 + 104) = a2;
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 116) = 0;
  std::unordered_map<unsigned __int64,std::weak_ptr<Spectre::Engine::SceneNode>>::unordered_map<unsigned __int64,std::weak_ptr<Spectre::Engine::SceneNode>>(a1 + 120);
  Spectre::Utils::SharedMutex::SharedMutex((Spectre::Utils::SharedMutex *)(a1 + 184));
  *(_DWORD *)(a1 + 192) = 0;
  std::map<std::type_index,std::shared_ptr<Spectre::Engine::SceneCustomData>>::map<std::type_index,std::shared_ptr<Spectre::Engine::SceneCustomData>>((_QWORD *)(a1 + 200));
  return a1;
}
