/*
 * XREFs of ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x180057C1C
 * Callers:
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x180057BD0 (--0CSpatialAudioTech@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180057E7C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ??$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAtmosCheck@@@12@XZ @ 0x180059380 (--$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VAtmosCheck@@@12@XZ.c)
 */

// Hidden C++ exception states: #wind=1
struct AtmosCheck *CSpatialAudioTech::GetAtmosCheck(void)
{
  unsigned int v0; // eax
  __int64 v1; // rbx
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+18h]

  EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
  v7 = &CSpatialAudioTech::s_atmosLock;
  v0 = CSpatialAudioTech::s_uAtmosRefCount + 1;
  CSpatialAudioTech::s_uAtmosRefCount = v0;
  if ( v0 == 1 )
  {
    v3 = (__int64 *)Microsoft::WRL::Details::Make<AtmosCheck,>(&v6);
    v4 = 0LL;
    if ( &v5 != v3 )
    {
      v4 = *v3;
      *v3 = 0LL;
    }
    v5 = CSpatialAudioTech::s_spAtmosCheck;
    CSpatialAudioTech::s_spAtmosCheck = v4;
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v5);
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v6);
    v1 = CSpatialAudioTech::s_spAtmosCheck;
    if ( CSpatialAudioTech::s_spAtmosCheck )
    {
      if ( (int)AtmosCheck::Initialize(CSpatialAudioTech::s_spAtmosCheck) < 0 )
      {
        Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&CSpatialAudioTech::s_spAtmosCheck);
        CSpatialAudioTech::s_uAtmosRefCount = 0;
      }
      v1 = CSpatialAudioTech::s_spAtmosCheck;
    }
  }
  else
  {
    v1 = CSpatialAudioTech::s_spAtmosCheck;
    CSpatialAudioTech::s_uAtmosRefCount = CSpatialAudioTech::s_spAtmosCheck != 0 ? v0 : 0;
  }
  LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
  return (struct AtmosCheck *)v1;
}
