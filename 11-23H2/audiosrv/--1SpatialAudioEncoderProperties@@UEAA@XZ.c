/*
 * XREFs of ??1SpatialAudioEncoderProperties@@UEAA@XZ @ 0x1800848F0
 * Callers:
 *     ??_GSpatialAudioEncoderProperties@@UEAAPEAXI@Z @ 0x180084970 (--_GSpatialAudioEncoderProperties@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SpatialAudioEncoderProperties::~SpatialAudioEncoderProperties(SpatialAudioEncoderProperties *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &SpatialAudioEncoderProperties::`vftable'{for `ISpatialAudioEncoderProperties'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioEncoderProperties,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    _aligned_free(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 67);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 4);
}
