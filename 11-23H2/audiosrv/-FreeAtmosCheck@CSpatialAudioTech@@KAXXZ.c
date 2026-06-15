/*
 * XREFs of ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x18015410C
 * Callers:
 *     ??1CSpatialAudioTech@@UEAA@XZ @ 0x180153FF8 (--1CSpatialAudioTech@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015402C (--4-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18015DC08 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void CSpatialAudioTech::FreeAtmosCheck(void)
{
  AtmosCheck *v0; // rbx
  __int64 v1; // rdx
  unsigned int v2; // eax
  AtmosCheck *v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  v3 = 0LL;
  EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
  v2 = CSpatialAudioTech::s_uAtmosRefCount;
  if ( CSpatialAudioTech::s_uAtmosRefCount && CSpatialAudioTech::s_spAtmosCheck )
  {
    --CSpatialAudioTech::s_uAtmosRefCount;
    if ( v2 == 1 )
    {
      Microsoft::WRL::ComPtr<AtmosCheck>::operator=((__int64 *)&v3, v1);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&CSpatialAudioTech::s_spAtmosCheck);
      v0 = v3;
    }
  }
  else
  {
    CSpatialAudioTech::s_uAtmosRefCount = 0;
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&CSpatialAudioTech::s_spAtmosCheck);
  }
  LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
  if ( v0 )
    AtmosCheck::Uninitialize(v0);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v3);
}
