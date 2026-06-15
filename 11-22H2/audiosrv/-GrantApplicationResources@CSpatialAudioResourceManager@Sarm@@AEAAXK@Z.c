/*
 * XREFs of ?GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180134AB8
 * Callers:
 *     ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180134B18 (-HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x180134604 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x180134780 (-GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z @ 0x180138B20 (-CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z.c)
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x180139780 (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::GrantApplicationResources(
        Sarm::CSpatialAudioResourceManager *this,
        int a2)
{
  struct Sarm::CStreamResource *i; // rax
  unsigned int v5; // edx
  unsigned int v6; // eax
  Sarm::CStreamResource *v7; // rbx

  for ( i = Sarm::CSpatialAudioResourceManager::GetFirstStream(this, a2);
        ;
        i = Sarm::CSpatialAudioResourceManager::GetNextStream(this, a2) )
  {
    v7 = i;
    if ( !i )
      break;
    v5 = *((_DWORD *)i + 19);
    if ( v5 )
    {
      v6 = Sarm::CStreamResource::CalculateDynamicObjectGrantCount(i, v5);
      Sarm::CStreamResource::SetDynamicObjects(v7, v6, 0LL);
    }
  }
}
