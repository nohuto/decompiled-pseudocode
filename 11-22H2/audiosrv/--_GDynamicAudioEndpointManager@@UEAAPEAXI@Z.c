/*
 * XREFs of ??_GDynamicAudioEndpointManager@@UEAAPEAXI@Z @ 0x1800E9E90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1DynamicAudioEndpointManager@@UEAA@XZ @ 0x1800E9E00 (--1DynamicAudioEndpointManager@@UEAA@XZ.c)
 */

DynamicAudioEndpointManager *__fastcall DynamicAudioEndpointManager::`scalar deleting destructor'(
        DynamicAudioEndpointManager *this,
        char a2)
{
  DynamicAudioEndpointManager::~DynamicAudioEndpointManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
