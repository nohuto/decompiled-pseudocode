/*
 * XREFs of ?CreateInstance@Scene@Engine@Spectre@@SA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@@Z @ 0x180040794
 * Callers:
 *     ?CreateScene@Engine@1Spectre@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x1800332A4 (-CreateScene@Engine@1Spectre@@QEAA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 * Callees:
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ?GetExclusiveLock@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180029FF0 (-GetExclusiveLock@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre@@@std@@XZ.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$shared_ptr@VScene@Engine@Spectre@@@std@@QEAA@PEAVScene@Engine@Spectre@@@Z @ 0x18003EED4 (--$-0VScene@Engine@Spectre@@$0A@@-$shared_ptr@VScene@Engine@Spectre@@@std@@QEAA@PEAVScene@Engine.c)
 *     ??0Scene@Engine@Spectre@@AEAA@PEAV112@@Z @ 0x18003FB60 (--0Scene@Engine@Spectre@@AEAA@PEAV112@@Z.c)
 *     ?Initialize@Scene@Engine@Spectre@@AEAAXXZ @ 0x1800413C0 (-Initialize@Scene@Engine@Spectre@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 **__fastcall Spectre::Engine::Scene::CreateInstance(__int64 **a1, struct Spectre::Engine::Engine *a2)
{
  __int64 *v4; // rbx
  Spectre::Engine::Scene *v5; // rax
  _BYTE v7[32]; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0LL;
  v5 = (Spectre::Engine::Scene *)operator new(0xD8uLL);
  if ( v5 )
    v4 = (__int64 *)Spectre::Engine::Scene::Scene(v5, a2);
  std::shared_ptr<Spectre::Engine::Scene>::shared_ptr<Spectre::Engine::Scene>(a1, v4);
  Spectre::Engine::Lockable::GetExclusiveLock((Spectre::Engine::Mutex *)(*a1 + 2), (__int64)v7);
  Spectre::Engine::Scene::Initialize((Spectre::Engine::Scene *)*a1);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v7);
  return a1;
}
