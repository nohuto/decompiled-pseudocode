/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x14004B548
 * Callers:
 *     _CDeviceGraphObjectCache::CDeviceGraphObjectCache_::_1_::dtor$1 @ 0x140034393 (_CDeviceGraphObjectCache--CDeviceGraphObjectCache_--_1_--dtor$1.c)
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$1 @ 0x1400343EB (_CAudioProcessor--CAudioProcessor_--_1_--dtor$1.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$3 @ 0x1400344BF (_CAudioPump--CAudioPump_--_1_--dtor$3.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$4 @ 0x1400344D5 (_CAudioPump--CAudioPump_--_1_--dtor$4.c)
 *     _CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x1400347CD (_CCrossProcessBaseEndpoint--CCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$2 @ 0x14006B55A (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$2.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$4 @ 0x14006B59A (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$4.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$6 @ 0x14006B5C0 (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$6.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$9 @ 0x14006B5F9 (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$9.c)
 *     _CRTThreadManager::CRTThreadManager_::_1_::dtor$2 @ 0x140074650 (_CRTThreadManager--CRTThreadManager_--_1_--dtor$2.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x140099168 (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$3 @ 0x14009919B (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
