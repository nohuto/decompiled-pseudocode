/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x140050B94
 * Callers:
 *     _CDeviceGraphObjectCache::CDeviceGraphObjectCache_::_1_::dtor$1 @ 0x140038E9C (_CDeviceGraphObjectCache--CDeviceGraphObjectCache_--_1_--dtor$1.c)
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$1 @ 0x140038EF4 (_CAudioProcessor--CAudioProcessor_--_1_--dtor$1.c)
 *     _CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x140038F9F (_CCrossProcessBaseEndpoint--CCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$2 @ 0x1400391E1 (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$2.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$4 @ 0x14003920D (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$4.c)
 *     _CRTThreadManager::CRTThreadManager_::_1_::dtor$2 @ 0x1400395F2 (_CRTThreadManager--CRTThreadManager_--_1_--dtor$2.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x14008CE38 (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$3 @ 0x14008CE6B (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
