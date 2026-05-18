/*
 * XREFs of ?GetDeviceCount@Engine@1Spectre@@QEBAIXZ @ 0x1800341E4
 * Callers:
 *     ?FrameTick@Engine@1Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@@Z @ 0x180033C20 (-FrameTick@Engine@1Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@std@@@Z.c)
 *     ?GetDevice@Engine@1Spectre@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z @ 0x180034148 (-GetDevice@Engine@1Spectre@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z.c)
 *     ?GetDeviceIndex@Engine@1Spectre@@QEAAIAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800342A8 (-GetDeviceIndex@Engine@1Spectre@@QEAAIAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?GetHardwareVersion@Engine@1Spectre@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x180034420 (-GetHardwareVersion@Engine@1Spectre@@IEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ?OnShutdown@Engine@1Spectre@@MEAAXXZ @ 0x180035310 (-OnShutdown@Engine@1Spectre@@MEAAXXZ.c)
 *     ?PrintDevices@Engine@1Spectre@@QEAAXXZ @ 0x1800358C4 (-PrintDevices@Engine@1Spectre@@QEAAXXZ.c)
 *     ?SendPerformanceSummary@Engine@1Spectre@@IEAAXXZ @ 0x18003691C (-SendPerformanceSummary@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ??1?$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180029F20 (--1-$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA?AV?$shared_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A1C4 (-GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA-AV-$shared_lock@VMutex@Engine@Spectre@@@.c)
 */

__int64 __fastcall Spectre::Engine::Engine::GetDeviceCount(Spectre::Engine::Engine *this)
{
  __int64 v2; // rdi
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  Spectre::Engine::Lockable::GetSharedLockIfNecessary((Spectre::Engine::Engine *)((char *)this + 112), (__int64)v4);
  v2 = (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 4;
  std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>((__int64)v4);
  return (unsigned int)v2;
}
