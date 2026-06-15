/*
 * XREFs of ??0CSharedStreamGroupProxy@@QEAA@XZ @ 0x1800123A0
 * Callers:
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAKPEAUICompositeSystemEffect@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK$$QEAPEAUICompositeSystemEffect@@@Z @ 0x1800103EC (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristic.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x180011B70 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@.c)
 */

CSharedStreamGroupProxy *__fastcall CSharedStreamGroupProxy::CSharedStreamGroupProxy(CSharedStreamGroupProxy *this)
{
  CSharedStreamGroupProxy *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>(this);
  *(_QWORD *)this = &CSharedStreamGroupProxy::`vftable';
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 1) = &CSharedStreamGroupProxy::`vftable'{for `IStreamGroupProxy'};
  *((_BYTE *)this + 360) = 0;
  *((_QWORD *)this + 2) = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioGraphCallback>'};
  *((_DWORD *)this + 91) = 0;
  *((_QWORD *)this + 40) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 41) = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 368), 0, 0);
  *((_BYTE *)this + 408) = 0;
  *((_OWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 108) = 0;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 134) = 0LL;
  *((_DWORD *)this + 344) = 0;
  *((_QWORD *)this + 173) = 0LL;
  *((_QWORD *)this + 211) = 0LL;
  *((_QWORD *)this + 212) = 0LL;
  *((_QWORD *)this + 213) = 0LL;
  *((GUID *)this + 107) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 216) = 0LL;
  *((_QWORD *)this + 217) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 1744), 0, 0);
  *((_QWORD *)this + 223) = 0LL;
  *((_QWORD *)this + 224) = 0LL;
  *((_QWORD *)this + 225) = 0LL;
  *((_QWORD *)this + 226) = 0LL;
  *((_QWORD *)this + 227) = 0LL;
  result = this;
  *((_QWORD *)this + 228) = 0LL;
  *((_QWORD *)this + 229) = 0LL;
  return result;
}
