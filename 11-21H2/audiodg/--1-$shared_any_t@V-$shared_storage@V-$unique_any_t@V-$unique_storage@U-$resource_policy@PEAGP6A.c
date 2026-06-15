/*
 * XREFs of ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140060D98
 * Callers:
 *     _PublishApoTelemetry_::_1_::dtor$29 @ 0x140036C60 (_PublishApoTelemetry_--_1_--dtor$29.c)
 *     _PublishApoTelemetry_::_1_::dtor$31 @ 0x140036C84 (_PublishApoTelemetry_--_1_--dtor$31.c)
 *     _QueueInitialEnhancementsEnabledNotification_::_1_::dtor$0 @ 0x1400661E0 (_QueueInitialEnhancementsEnabledNotification_--_1_--dtor$0.c)
 *     _QueueInitialVolumeNotification_::_1_::dtor$0 @ 0x14006633F (_QueueInitialVolumeNotification_--_1_--dtor$0.c)
 *     _CAPOEndpointNotificationsHandler::OnPropertyValueChanged_::_1_::dtor$0 @ 0x140069D8A (_CAPOEndpointNotificationsHandler--OnPropertyValueChanged_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$2 @ 0x14008CE58 (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$2.c)
 *     _util::MakeAtomicObj_ClockingSection_util::ReaderLockPolicy_util::AtomicObjBase_ClockingSection_util::AtomicObj_ClockingSection_util::ReaderLockPolicy__util::AtomicObjState_util::ReaderLockPolicy_::Storage__::_1_::dtor$0 @ 0x1400909E5 (_util--MakeAtomicObj_ClockingSection_util--ReaderLockPolicy_util--AtomicObjBase_ClockingSection_.c)
 *     _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor$2 @ 0x140092976 (_CSpatialCrossProcessBaseEndpoint--InitializeCPMemory_--_1_--dtor$2.c)
 *     _CSpatialCrossProcessBaseEndpoint::MapCPMemory_::_1_::dtor$0 @ 0x140092C98 (_CSpatialCrossProcessBaseEndpoint--MapCPMemory_--_1_--dtor$0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14002DA28 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
