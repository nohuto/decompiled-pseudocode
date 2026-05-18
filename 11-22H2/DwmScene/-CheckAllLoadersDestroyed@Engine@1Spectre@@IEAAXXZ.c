/*
 * XREFs of ?CheckAllLoadersDestroyed@Engine@1Spectre@@IEAAXXZ @ 0x180032A64
 * Callers:
 *     ?OnShutdown@Engine@1Spectre@@MEAAXXZ @ 0x180035310 (-OnShutdown@Engine@1Spectre@@MEAAXXZ.c)
 * Callees:
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?RemoveExpiredLoaders@Engine@1Spectre@@IEAAXXZ @ 0x180035B10 (-RemoveExpiredLoaders@Engine@1Spectre@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Engine::CheckAllLoadersDestroyed(Spectre::Engine::Engine *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Engine *)((char *)this + 312), (__int64)v2);
  Spectre::Engine::Engine::RemoveExpiredLoaders(this);
  if ( *((_QWORD *)this + 36) != *((_QWORD *)this + 37) )
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsNativeRenderer_Engine,
      5,
      "Engine::CheckAllLoadersDestroyed() -- detected live Loader objects!");
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v2);
}
