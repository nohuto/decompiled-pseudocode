/*
 * XREFs of ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18004089C
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAPEBU_tlgProvider_t@@AEAPEAUIEndpointResourceManagerProvider@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAPEBU_tlgProvider_t@@AEAPEAUIEndpointResourceManagerProvider@@@Z @ 0x1800407BC (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAPEBU_tlgProvider_t@@AEAPEAUIEndpoin.c)
 * Callees:
 *     ??0CSpatialProperties@@QEAA@XZ @ 0x180040AB8 (--0CSpatialProperties@@QEAA@XZ.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800670AC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
CEndpointCharacteristics *__fastcall CEndpointCharacteristics::CEndpointCharacteristics(CEndpointCharacteristics *this)
{
  Microsoft::WRL::Details *v2; // rcx

  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IEndpointCharacteristics>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IEndpointCharacteristics>::`vftable'{for `IEndpointCharacteristics'};
  *((_QWORD *)this + 2) = &CEndpointCharacteristics::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CEndpointCharacteristics::`vftable';
  *((_QWORD *)this + 1) = &CEndpointCharacteristics::`vftable'{for `IEndpointCharacteristics'};
  *((_QWORD *)this + 2) = &CEndpointCharacteristics::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 14) = 4LL;
  *((_QWORD *)this + 15) = (char *)this + 96;
  if ( this == (CEndpointCharacteristics *)-96LL
    || (`eh vector constructor iterator'(
          (char *)this + 128,
          0x10uLL,
          4uLL,
          (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
          (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>),
        *((_QWORD *)this + 24) = 4LL,
        *((_QWORD *)this + 25) = (char *)this + 128,
        this == (CEndpointCharacteristics *)-128LL) )
  {
    _o_terminate(v2);
    JUMPOUT(0x1800B19D9LL);
  }
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 288), 0, 0);
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *(GUID *)((char *)this + 392) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 51) = 1LL;
  CSpatialProperties::CSpatialProperties((CEndpointCharacteristics *)((char *)this + 416));
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 0x2000), 0, 0);
  *((_DWORD *)this + 2058) = 0;
  *((_BYTE *)this + 8236) = 1;
  *((_QWORD *)this + 1030) = 0LL;
  *((_DWORD *)this + 2062) = 0;
  *(GUID *)((char *)this + 8252) = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)((char *)this + 8268) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 1036) = 0LL;
  *((_BYTE *)this + 8296) = 0;
  return this;
}
