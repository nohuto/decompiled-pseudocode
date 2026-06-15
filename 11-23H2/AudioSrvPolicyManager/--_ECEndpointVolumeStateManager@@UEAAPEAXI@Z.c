/*
 * XREFs of ??_ECEndpointVolumeStateManager@@UEAAPEAXI@Z @ 0x18003FA90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??1CEndpointVolumeStateManager@@UEAA@XZ @ 0x18003F9D0 (--1CEndpointVolumeStateManager@@UEAA@XZ.c)
 */

CEndpointVolumeStateManager *__fastcall CEndpointVolumeStateManager::`vector deleting destructor'(
        CEndpointVolumeStateManager *this,
        char a2)
{
  CEndpointVolumeStateManager::~CEndpointVolumeStateManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
