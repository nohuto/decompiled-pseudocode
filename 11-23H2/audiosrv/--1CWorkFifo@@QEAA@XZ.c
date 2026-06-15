/*
 * XREFs of ??1CWorkFifo@@QEAA@XZ @ 0x180133820
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$7 @ 0x18007DAC8 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$7.c)
 *     ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x180133734 (--1CSpatialAudioResourceManager@Sarm@@UEAA@XZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800486BC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x180136CC0 (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 */

void __fastcall CWorkFifo::~CWorkFifo(void **this)
{
  void *v2; // rdx
  wil::details *v3; // rcx

  CWorkFifo::Shutdown((CWorkFifo *)this);
  v3 = (wil::details *)this[28];
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
  _Mtx_destroy_in_situ((_Mtx_t)(this + 18));
  std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::~deque<std::shared_ptr<CWorkFifo::WorkItem>>(this + 12);
}
