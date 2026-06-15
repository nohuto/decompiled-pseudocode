/*
 * XREFs of ??1CEndpointCharacteristics@@UEAA@XZ @ 0x18014433C
 * Callers:
 *     ??_GCEndpointCharacteristics@@UEAAPEAXI@Z @ 0x180144BC0 (--_GCEndpointCharacteristics@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Tidy@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180047A34 (-_Tidy@-$vector@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete@VCConn.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004A0DC (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18005EAE0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1CSpatialProperties@@QEAA@XZ @ 0x18013D53C (--1CSpatialProperties@@QEAA@XZ.c)
 *     ??1SystemEffectDescriptor@@QEAA@XZ @ 0x1801444A0 (--1SystemEffectDescriptor@@QEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::~CEndpointCharacteristics(CEndpointCharacteristics *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 242);
  CSpatialProperties::~CSpatialProperties((CEndpointCharacteristics *)((char *)this + 1904));
  SystemEffectDescriptor::~SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 1696));
  `eh vector destructor iterator'(
    (char *)this + 1632,
    16LL,
    4LL,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  `eh vector destructor iterator'(
    (char *)this + 1568,
    16LL,
    4LL,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  `eh vector destructor iterator'(
    (char *)this + 1472,
    24LL,
    4LL,
    (void (*)(void *))CAudioSignalProcessingModeMap::~CAudioSignalProcessingModeMap);
  `eh vector destructor iterator'(
    (char *)this + 1072,
    96LL,
    4LL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
  `eh vector destructor iterator'(
    (char *)this + 688,
    96LL,
    4LL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
  `eh vector destructor iterator'(
    (char *)this + 304,
    96LL,
    4LL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
  std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy((__int64)this + 248);
  std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy((__int64)this + 224);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)this + 168);
  `eh vector destructor iterator'(
    (char *)this + 88,
    16LL,
    4LL,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 10);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)this + 3);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
