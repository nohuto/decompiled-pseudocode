/*
 * XREFs of ??1EndpointCollection@@MEAA@XZ @ 0x1801637FC
 * Callers:
 *     ??_EEndpointCollection@@MEAAPEAXI@Z @ 0x18016384C (--_EEndpointCollection@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@2@@ATL@@QEAAXXZ @ 0x1800034D4 (-RemoveAll@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a.c)
 */

void __fastcall EndpointCollection::~EndpointCollection(EndpointCollection *this)
{
  *(_QWORD *)this = &EndpointCollection::`vftable'{for `IEndpointCollection'};
  *((_QWORD *)this + 1) = &EndpointCollection::`vftable'{for `CUnknown'};
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>>::RemoveAll((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
