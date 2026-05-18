/*
 * XREFs of ??0Scene@Engine@Spectre@@AEAA@PEAV112@@Z @ 0x18003FB60
 * Callers:
 *     ?CreateInstance@Scene@Engine@Spectre@@SA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@@Z @ 0x180040794 (-CreateInstance@Scene@Engine@Spectre@@SA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@@Z.c)
 * Callees:
 *     ??0Lockable@Engine@Spectre@@QEAA@W4ThreadingMode@012@@Z @ 0x180029EDC (--0Lockable@Engine@Spectre@@QEAA@W4ThreadingMode@012@@Z.c)
 *     ?GetThreadingMode@Lockable@Engine@Spectre@@QEBA?AW4ThreadingMode@123@XZ @ 0x18002A254 (-GetThreadingMode@Lockable@Engine@Spectre@@QEBA-AW4ThreadingMode@123@XZ.c)
 *     ??0?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@@std@@@2@@std@@QEAA@XZ @ 0x18003FAB0 (--0-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$shared_ptr@VSceneLa.c)
 *     ??0?$map@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@@std@@QEAA@XZ @ 0x18003FAF0 (--0-$map@Vtype_index@std@@V-$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U-$less@Vtype_index@.c)
 *     ??0?$unordered_map@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18003FB30 (--0-$unordered_map@_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@std@@U-$hash@_K@2@U-$equal_to@_K@2@.c)
 *     ??0SharedMutex@Utils@Spectre@@QEAA@XZ @ 0x1800E0CE0 (--0SharedMutex@Utils@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
Spectre::Engine::Scene *__fastcall Spectre::Engine::Scene::Scene(
        Spectre::Engine::Scene *this,
        struct Spectre::Engine::Engine *a2)
{
  int ThreadingMode; // eax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  if ( a2 )
    ThreadingMode = Spectre::Engine::Lockable::GetThreadingMode((__int64)a2 + 8);
  else
    ThreadingMode = 1;
  Spectre::Engine::Lockable::Lockable((__int64)this + 16, ThreadingMode);
  *((_QWORD *)this + 9) = 0xFFFFFFFF00000001uLL;
  *((_QWORD *)this + 10) = 0LL;
  std::map<std::wstring,std::shared_ptr<Spectre::Engine::SceneLayer>>::map<std::wstring,std::shared_ptr<Spectre::Engine::SceneLayer>>((_QWORD *)this + 11);
  *((_QWORD *)this + 13) = a2;
  *((_DWORD *)this + 28) = 1;
  *((_BYTE *)this + 116) = 0;
  std::unordered_map<unsigned __int64,std::weak_ptr<Spectre::Engine::SceneNode>>::unordered_map<unsigned __int64,std::weak_ptr<Spectre::Engine::SceneNode>>((__int64)this + 120);
  Spectre::Utils::SharedMutex::SharedMutex((Spectre::Engine::Scene *)((char *)this + 184));
  *((_DWORD *)this + 48) = 0;
  std::map<std::type_index,std::shared_ptr<Spectre::Engine::SceneCustomData>>::map<std::type_index,std::shared_ptr<Spectre::Engine::SceneCustomData>>((_QWORD *)this + 25);
  return this;
}
