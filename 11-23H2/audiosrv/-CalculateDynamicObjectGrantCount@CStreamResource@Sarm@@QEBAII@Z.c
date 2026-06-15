/*
 * XREFs of ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z @ 0x180138AD0
 * Callers:
 *     ?GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180134A68 (-GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ @ 0x180138EAC (-GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ.c)
 *     ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x180139490 (-ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z.c)
 * Callees:
 *     ?GetAvailableDynamicObjectCount@CStreamResource@Sarm@@QEBAIXZ @ 0x180138D34 (-GetAvailableDynamicObjectCount@CStreamResource@Sarm@@QEBAIXZ.c)
 */

unsigned int __fastcall Sarm::CStreamResource::CalculateDynamicObjectGrantCount(
        Sarm::CStreamResource *this,
        unsigned int a2)
{
  unsigned int AvailableDynamicObjectCount; // eax

  AvailableDynamicObjectCount = Sarm::CStreamResource::GetAvailableDynamicObjectCount(this);
  return Sarm::CStreamResource::CalculateDynamicObjectGrantCount(this, a2, AvailableDynamicObjectCount);
}
