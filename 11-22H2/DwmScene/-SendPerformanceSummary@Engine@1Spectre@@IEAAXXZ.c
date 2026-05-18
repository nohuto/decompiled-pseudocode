/*
 * XREFs of ?SendPerformanceSummary@Engine@1Spectre@@IEAAXXZ @ 0x18003691C
 * Callers:
 *     ?SendPerformanceSummaryTimer@Engine@1Spectre@@IEAAXXZ @ 0x1800369E0 (-SendPerformanceSummaryTimer@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ??1?$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180029F20 (--1-$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA?AV?$shared_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A1C4 (-GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA-AV-$shared_lock@VMutex@Engine@Spectre@@@.c)
 *     ?Clear@GpuProfileData@TelemetryTraceLogger@Utils@Spectre@@QEAAXXZ @ 0x180032AC8 (-Clear@GpuProfileData@TelemetryTraceLogger@Utils@Spectre@@QEAAXXZ.c)
 *     ?GetDevice@Engine@1Spectre@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z @ 0x180034148 (-GetDevice@Engine@1Spectre@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z.c)
 *     ?GetDeviceCount@Engine@1Spectre@@QEBAIXZ @ 0x1800341E4 (-GetDeviceCount@Engine@1Spectre@@QEBAIXZ.c)
 *     ?SendDevicePerformanceTelemetry@Engine@1Spectre@@IEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180036528 (-SendDevicePerformanceTelemetry@Engine@1Spectre@@IEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::Engine::SendPerformanceSummary(__int64 ***this)
{
  unsigned int i; // edi
  _QWORD *Device; // rax
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[16]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v6[24]; // [rsp+40h] [rbp-18h] BYREF

  Spectre::Engine::Lockable::GetSharedLockIfNecessary((Spectre::Engine::Lockable *)(this + 1), (__int64)v6);
  Spectre::Engine::Lockable::GetSharedLockIfNecessary((Spectre::Engine::Lockable *)(this + 14), (__int64)v5);
  for ( i = 0; i < (unsigned int)Spectre::Engine::Engine::GetDeviceCount((Spectre::Engine::Engine *)this); ++i )
  {
    Device = Spectre::Engine::Engine::GetDevice((Spectre::Engine::Engine *)this, &v4, i);
    Spectre::Engine::Engine::SendDevicePerformanceTelemetry((__int64)this, Device);
  }
  *((_DWORD *)this + 342) = -8388609;
  *((_DWORD *)this + 343) = 2139095039;
  *((_DWORD *)this + 344) = 0;
  this[173] = 0LL;
  Spectre::Utils::TelemetryTraceLogger::GpuProfileData::Clear(this + 178);
  std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>((__int64)v5);
  std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>((__int64)v6);
}
