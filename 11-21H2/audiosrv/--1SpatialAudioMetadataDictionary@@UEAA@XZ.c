/*
 * XREFs of ??1SpatialAudioMetadataDictionary@@UEAA@XZ @ 0x18013A928
 * Callers:
 *     ??_GSpatialAudioMetadataDictionary@@UEAAPEAXI@Z @ 0x18013A9A0 (--_GSpatialAudioMetadataDictionary@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 */

void __fastcall SpatialAudioMetadataDictionary::~SpatialAudioMetadataDictionary(SpatialAudioMetadataDictionary *this)
{
  *(_QWORD *)this = &SpatialAudioMetadataDictionary::`vftable';
  *((_QWORD *)this + 1) = &SpatialAudioMetadataDictionary::`vftable'{for `ISpatialAudioMetadataDictionaryData'};
  *((_QWORD *)this + 2) = &SpatialAudioMetadataDictionary::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  operator delete(*((void **)this + 16));
  *((_QWORD *)this + 16) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  *((_DWORD *)this + 13) = -1073741823;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)this + 5);
}
