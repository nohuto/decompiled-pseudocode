/*
 * XREFs of ??_ECEndpointVolumeStateManager@@UEAAPEAXI@Z @ 0x180040F20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ??1CEndpointVolumeStateManager@@UEAA@XZ @ 0x180040E60 (--1CEndpointVolumeStateManager@@UEAA@XZ.c)
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
