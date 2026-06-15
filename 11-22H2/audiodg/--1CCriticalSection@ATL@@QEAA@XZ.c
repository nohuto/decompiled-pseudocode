/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x14004B588
 * Callers:
 *     _CDeviceGraphObjectCache::CDeviceGraphObjectCache_::_1_::dtor$1 @ 0x1400343D3 (_CDeviceGraphObjectCache--CDeviceGraphObjectCache_--_1_--dtor$1.c)
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$1 @ 0x14003442B (_CAudioProcessor--CAudioProcessor_--_1_--dtor$1.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$3 @ 0x1400344FF (_CAudioPump--CAudioPump_--_1_--dtor$3.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$4 @ 0x140034515 (_CAudioPump--CAudioPump_--_1_--dtor$4.c)
 *     _CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x14003480D (_CCrossProcessBaseEndpoint--CCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$2 @ 0x14006B5AA (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$2.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$4 @ 0x14006B5EA (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$4.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$6 @ 0x14006B610 (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$6.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$9 @ 0x14006B649 (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$9.c)
 *     _CRTThreadManager::CRTThreadManager_::_1_::dtor$2 @ 0x1400746A0 (_CRTThreadManager--CRTThreadManager_--_1_--dtor$2.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x1400991B8 (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$3 @ 0x1400991EB (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
