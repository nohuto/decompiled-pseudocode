/*
 * XREFs of _ATL::CAtlMap_IUnknown___GraphStreamingResourceManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown____ATL::CElementTraits_GraphStreamingResourceManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x1400366C1
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400550A8 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManage.c)
 */

void __fastcall __noreturn ATL::CAtlMap_IUnknown___GraphStreamingResourceManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown____ATL::CElementTraits_GraphStreamingResourceManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
    *(_QWORD *)(a2 + 80),
    *(_QWORD *)(a2 + 104));
  throw;
}
