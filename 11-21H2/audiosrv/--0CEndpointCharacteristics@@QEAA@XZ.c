/*
 * XREFs of ??0CEndpointCharacteristics@@QEAA@XZ @ 0x180055B34
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAPEBU_tlgProvider_t@@@Z @ 0x180043A30 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAPEBU_tlgProvider_t@@@Details@WRL@Mi.c)
 * Callees:
 *     ??0SystemEffectDescriptor@@QEAA@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180055ECC (--0SystemEffectDescriptor@@QEAA@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     ??0CSpatialProperties@@QEAA@XZ @ 0x180055F1C (--0CSpatialProperties@@QEAA@XZ.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18005F038 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
CEndpointCharacteristics *__fastcall CEndpointCharacteristics::CEndpointCharacteristics(CEndpointCharacteristics *this)
{
  Microsoft::WRL::Details *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEndpointCharacteristics>::`vftable';
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CEndpointCharacteristics::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 8) = 4LL;
  *((_QWORD *)this + 9) = (char *)this + 48;
  if ( this == (CEndpointCharacteristics *)-48LL )
  {
    _o_terminate(v2);
    goto LABEL_14;
  }
  *((_QWORD *)this + 10) = 0LL;
  `eh vector constructor iterator'(
    (char *)this + 88,
    0x10uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  *((_QWORD *)this + 19) = 4LL;
  *((_QWORD *)this + 20) = (char *)this + 88;
  if ( this == (CEndpointCharacteristics *)-88LL )
  {
LABEL_14:
    _o_terminate(v3);
    goto LABEL_15;
  }
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 74) = 0;
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 304),
    eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 400), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 496), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 592),
    eKeywordDetectorConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 688),
    eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 784), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 880), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 976),
    eKeywordDetectorConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 1072),
    eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 1168), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 1264), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 1360),
    eKeywordDetectorConnector);
  `eh vector constructor iterator'(
    (char *)this + 1472,
    0x18uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeMap::CAudioSignalProcessingModeMap,
    (void (*)(void *))CAudioSignalProcessingModeMap::~CAudioSignalProcessingModeMap);
  `eh vector constructor iterator'(
    (char *)this + 1568,
    0x10uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  `eh vector constructor iterator'(
    (char *)this + 1632,
    0x10uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 1696),
    eHostProcessConnector);
  v4 = 4LL;
  *((_QWORD *)this + 224) = 4LL;
  *((_QWORD *)this + 225) = (char *)this + 304;
  if ( this == (CEndpointCharacteristics *)-304LL )
    goto LABEL_15;
  *((_QWORD *)this + 226) = 4LL;
  *((_QWORD *)this + 227) = (char *)this + 688;
  if ( this == (CEndpointCharacteristics *)-688LL )
    goto LABEL_15;
  *((_QWORD *)this + 228) = 4LL;
  *((_QWORD *)this + 229) = (char *)this + 1072;
  if ( this == (CEndpointCharacteristics *)-1072LL )
    goto LABEL_15;
  *((_QWORD *)this + 230) = 4LL;
  *((_QWORD *)this + 231) = (char *)this + 1456;
  if ( this == (CEndpointCharacteristics *)-1456LL
    || (*((_QWORD *)this + 232) = 4LL,
        *((_QWORD *)this + 233) = (char *)this + 1472,
        this == (CEndpointCharacteristics *)-1472LL)
    || (*((_QWORD *)this + 234) = 4LL,
        *((_QWORD *)this + 235) = (char *)this + 1568,
        this == (CEndpointCharacteristics *)-1568LL)
    || (*((_QWORD *)this + 236) = 4LL,
        *((_QWORD *)this + 237) = (char *)this + 1632,
        this == (CEndpointCharacteristics *)-1632LL) )
  {
LABEL_15:
    _o_terminate(v4);
    __debugbreak();
    JUMPOUT(0x180097765LL);
  }
  CSpatialProperties::CSpatialProperties((CEndpointCharacteristics *)((char *)this + 1904));
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 242, 0, 0);
  *((_QWORD *)this + 1215) = 100LL;
  *((_BYTE *)this + 9728) = 1;
  *((_QWORD *)this + 1217) = 0LL;
  *((_DWORD *)this + 2436) = 0;
  *(GUID *)((char *)this + 9748) = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)((char *)this + 9764) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 1223) = 0LL;
  return this;
}
