/*
 * XREFs of _ATL::CAtlMap_IUnknown___GraphStreamingResourceManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown____ATL::CElementTraits_GraphStreamingResourceManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x140039410
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400086B0 (-RemoveAtPos@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElemen.c)
 *     _CxxThrowException_0 @ 0x1400309C0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_IUnknown___GraphStreamingResourceManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown____ATL::CElementTraits_GraphStreamingResourceManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
    *(__int64 **)(a2 + 80),
    *(_QWORD *)(a2 + 104));
  throw;
}
