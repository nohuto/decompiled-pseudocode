/*
 * XREFs of ?GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA?AV?$shared_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A1C4
 * Callers:
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?GetDevice@Engine@1Spectre@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z @ 0x180034148 (-GetDevice@Engine@1Spectre@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z.c)
 *     ?GetDeviceCount@Engine@1Spectre@@QEBAIXZ @ 0x1800341E4 (-GetDeviceCount@Engine@1Spectre@@QEBAIXZ.c)
 *     ?GetDeviceFromID@Engine@1Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@W4RenderDeviceID@12@@Z @ 0x18003422C (-GetDeviceFromID@Engine@1Spectre@@QEAA-AV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@W4Rend.c)
 *     ?GetDeviceIndex@Engine@1Spectre@@QEAAIAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800342A8 (-GetDeviceIndex@Engine@1Spectre@@QEAAIAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?GetHardwareVersion@Engine@1Spectre@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x180034420 (-GetHardwareVersion@Engine@1Spectre@@IEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ?PrintDevices@Engine@1Spectre@@QEAAXXZ @ 0x1800358C4 (-PrintDevices@Engine@1Spectre@@QEAAXXZ.c)
 *     ?SafeGetDeviceList@Engine@1Spectre@@QEAA?AV?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800364DC (-SafeGetDeviceList@Engine@1Spectre@@QEAA-AV-$vector@V-$shared_ptr@VRenderDevice@Engine@Spectre@@.c)
 *     ?SendDevicePerformanceTelemetry@Engine@1Spectre@@IEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180036528 (-SendDevicePerformanceTelemetry@Engine@1Spectre@@IEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre.c)
 *     ?SendPerformanceSummary@Engine@1Spectre@@IEAAXXZ @ 0x18003691C (-SendPerformanceSummary@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ??1?$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180029F20 (--1-$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetSharedLock@Lockable@Engine@Spectre@@QEBA?AV?$shared_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A19C (-GetSharedLock@Lockable@Engine@Spectre@@QEBA-AV-$shared_lock@VMutex@Engine@Spectre@@@std@@XZ.c)
 *     ?HasExclusiveLock@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A260 (-HasExclusiveLock@Lockable@Engine@Spectre@@QEBA_NXZ.c)
 *     ?HasSharedLock@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A2B4 (-HasSharedLock@Lockable@Engine@Spectre@@QEBA_NXZ.c)
 *     ?unlock_shared@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5B8 (-unlock_shared@Mutex@Engine@Spectre@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::Lockable::GetSharedLockIfNecessary(Spectre::Engine::Lockable *this, __int64 a2)
{
  __int64 SharedLock; // rdi
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  if ( !Spectre::Engine::Lockable::HasSharedLock(this) && !Spectre::Engine::Lockable::HasExclusiveLock(this) )
  {
    SharedLock = Spectre::Engine::Lockable::GetSharedLock(this, (__int64)v6);
    if ( *(_BYTE *)(a2 + 8) )
      Spectre::Engine::Mutex::unlock_shared(*(Spectre::Engine::Mutex **)a2);
    *(_QWORD *)a2 = *(_QWORD *)SharedLock;
    *(_BYTE *)(a2 + 8) = *(_BYTE *)(SharedLock + 8);
    *(_QWORD *)SharedLock = 0LL;
    *(_BYTE *)(SharedLock + 8) = 0;
    std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>((__int64)v6);
  }
  return a2;
}
