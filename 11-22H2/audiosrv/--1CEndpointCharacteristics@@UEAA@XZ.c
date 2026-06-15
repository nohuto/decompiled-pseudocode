/*
 * XREFs of ??1CEndpointCharacteristics@@UEAA@XZ @ 0x18000557C
 * Callers:
 *     ??_GCEndpointCharacteristics@@UEAAPEAXI@Z @ 0x180005540 (--_GCEndpointCharacteristics@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSpatialProperties@@QEAA@XZ @ 0x1800056E0 (--1CSpatialProperties@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180009B78 (-_Tidy@-$vector@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete@VCConn.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x18004AA0C (--$_Destroy_range@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180066B50 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CEndpointCharacteristics::~CEndpointCharacteristics(CEndpointCharacteristics *this)
{
  void *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 0x2000));
  CSpatialProperties::~CSpatialProperties((CEndpointCharacteristics *)((char *)this + 416));
  v2 = (void *)*((_QWORD *)this + 48);
  if ( v2 )
    CoTaskMemFree(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 47);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 45);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = *((_QWORD *)this + 41);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(v5, *((_QWORD *)this + 42));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 41),
      (*((_QWORD *)this + 43) - *((_QWORD *)this + 41)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 41) = 0LL;
    *((_QWORD *)this + 42) = 0LL;
    *((_QWORD *)this + 43) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
  std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy((char *)this + 264);
  std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy((char *)this + 240);
  `eh vector destructor iterator'(
    (char *)this + 128,
    0x10uLL,
    4uLL,
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((char *)this + 88);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((char *)this + 80);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((char *)this + 72);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((char *)this + 56);
  v6 = (void *)*((_QWORD *)this + 6);
  if ( v6 )
    CoTaskMemFree(v6);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((char *)this + 40);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IEndpointCharacteristics>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IEndpointCharacteristics>(this);
}
