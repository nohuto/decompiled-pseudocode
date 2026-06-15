/*
 * XREFs of ??1CWorkFifo@@QEAA@XZ @ 0x180125C94
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$7 @ 0x18007254C (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$7.c)
 *     ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x180125BA8 (--1CSpatialAudioResourceManager@Sarm@@UEAA@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180012B50 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x180129254 (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 */

void __fastcall CWorkFifo::~CWorkFifo(CWorkFifo *this)
{
  void *v2; // rdx

  CWorkFifo::Shutdown(this);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    (wil::details **)this + 28,
    v2);
  _Mtx_destroy_in_situ((CWorkFifo *)((char *)this + 144));
  std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::~deque<std::shared_ptr<CWorkFifo::WorkItem>>((void **)this + 12);
}
