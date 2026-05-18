/*
 * XREFs of ??1?$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180029F20
 * Callers:
 *     ?GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA?AV?$shared_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A1C4 (-GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA-AV-$shared_lock@VMutex@Engine@Spectre@@@.c)
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
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 *     ?GetMaterialInstances@ShaderFamily@Engine@Spectre@@QEBA?AV?$set@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800609DC (-GetMaterialInstances@ShaderFamily@Engine@Spectre@@QEBA-AV-$set@V-$weak_ptr@VMaterial@Engine@Spe.c)
 *     _Spectre::Engine::Lockable::GetSharedLockIfNecessary_::_1_::dtor$0 @ 0x1800E4F0D (_Spectre--Engine--Lockable--GetSharedLockIfNecessary_--_1_--dtor$0.c)
 *     _Spectre::SendPerformanceSummary::Engine::SendPerformanceSummary_::_1_::dtor$1 @ 0x1800E5B09 (_Spectre--SendPerformanceSummary--Engine--SendPerformanceSummary_--_1_--dtor$1.c)
 *     _Spectre::Engine::ShaderFamily::GetMaterialInstances_::_1_::dtor$0 @ 0x1800E5BCF (_Spectre--Engine--ShaderFamily--GetMaterialInstances_--_1_--dtor$0.c)
 *     _Spectre::GetDeviceIndex::Engine::GetDeviceIndex_::_1_::dtor$0 @ 0x1800E5BE1 (_Spectre--GetDeviceIndex--Engine--GetDeviceIndex_--_1_--dtor$0.c)
 *     _Spectre::GetHardwareVersion::Engine::GetHardwareVersion_::_1_::dtor$1 @ 0x1800E5C29 (_Spectre--GetHardwareVersion--Engine--GetHardwareVersion_--_1_--dtor$1.c)
 *     _Spectre::PrintDevices::Engine::PrintDevices_::_1_::dtor$0 @ 0x1800E5DD3 (_Spectre--PrintDevices--Engine--PrintDevices_--_1_--dtor$0.c)
 *     _Spectre::SendDevicePerformanceTelemetry::Engine::SendDevicePerformanceTelemetry_::_1_::dtor$1 @ 0x1800E5EBD (_Spectre--SendDevicePerformanceTelemetry--Engine--SendDevicePerformanceTelemetry_--_1_--dtor$1.c)
 *     _Spectre::SendPerformanceSummary::Engine::SendPerformanceSummary_::_1_::dtor$0 @ 0x1800E5F39 (_Spectre--SendPerformanceSummary--Engine--SendPerformanceSummary_--_1_--dtor$0.c)
 *     _Spectre::Engine::Display::RenderInternal_::_1_::dtor$1 @ 0x1800E7809 (_Spectre--Engine--Display--RenderInternal_--_1_--dtor$1.c)
 * Callees:
 *     ?unlock_shared@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5B8 (-unlock_shared@Mutex@Engine@Spectre@@QEAAXXZ.c)
 */

void __fastcall std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    Spectre::Engine::Mutex::unlock_shared(*(Spectre::Engine::Mutex **)a1);
}
