/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800DE138
 * Callers:
 *     _MPCRawInputProvider::AttachDevice_::_1_::dtor$1 @ 0x1800DE300 (_MPCRawInputProvider--AttachDevice_--_1_--dtor$1.c)
 *     _MPCRawInputProvider::QueueInput_::_1_::dtor$0 @ 0x1800DEBD2 (_MPCRawInputProvider--QueueInput_--_1_--dtor$0.c)
 *     _MPCRawInputProvider::RemoveDevice_::_1_::dtor$0 @ 0x1800DEC9D (_MPCRawInputProvider--RemoveDevice_--_1_--dtor$0.c)
 *     _MPCRawInputProvider::RemoveDeviceImpl_::_1_::dtor$0 @ 0x1800DEE60 (_MPCRawInputProvider--RemoveDeviceImpl_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::AddHeadEventOccurred_::_1_::dtor$0 @ 0x1800E12BC (_MPCHeadUpdateListener--AddHeadEventOccurred_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::OnHeadEventOccurred_::_1_::dtor$0 @ 0x1800E16A3 (_MPCHeadUpdateListener--OnHeadEventOccurred_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread_::_1_::dtor$3 @ 0x1800E18D6 (_MPCHeadUpdateListener--OnHeadEventOccurredWorkerThread_--_1_--dtor$3.c)
 *     ?AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ @ 0x1800E7020 (-AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ.c)
 *     _SpatialRimDeviceCollection::DisableHeadEventHandler_::_1_::dtor$0 @ 0x1800E7546 (_SpatialRimDeviceCollection--DisableHeadEventHandler_--_1_--dtor$0.c)
 *     ?EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800E7804 (-EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ.c)
 *     _SpatialRimDeviceCollection::EnableHeadEventHandler_::_1_::dtor$0 @ 0x1800E7928 (_SpatialRimDeviceCollection--EnableHeadEventHandler_--_1_--dtor$0.c)
 *     ?EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800E793C (-EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ.c)
 *     _SpatialRimDeviceCollection::EnsureSpatialInteractionInitialized_::_1_::dtor$0 @ 0x1800E7AE9 (_SpatialRimDeviceCollection--EnsureSpatialInteractionInitialized_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollectionHeadEventHandler::OnHeadEventOccurred_::_1_::dtor$0 @ 0x1800E9777 (_SpatialRimDeviceCollectionHeadEventHandler--OnHeadEventOccurred_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollectionHeadEventHandler::OnHeadUpdateEvent_::_1_::dtor$3 @ 0x1800E99A0 (_SpatialRimDeviceCollectionHeadEventHandler--OnHeadUpdateEvent_--_1_--dtor$3.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x1800EA830 (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 *     _SpatialRimDeviceCollectionHeadEventHandler::SetOwner_::_1_::dtor$0 @ 0x1800EA914 (_SpatialRimDeviceCollectionHeadEventHandler--SetOwner_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
