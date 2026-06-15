/*
 * XREFs of ?RemoveDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x180003350
 * Callers:
 *     <none>
 * Callees:
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIEndpointDevice@@PEAU3@@Z @ 0x18000340C (-Find@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3.c)
 *     ?FreeNode@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18000348C (-FreeNode@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a6.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointCollection::RemoveDevice(EndpointCollection *this, struct IEndpointDevice *a2)
{
  unsigned int v4; // ebx
  _QWORD **v5; // rax

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v4 = 0;
  if ( a2
    && (v5 = (_QWORD **)ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>>::Find(
                          (char *)this + 24,
                          a2)) != 0LL )
  {
    if ( v5 == *((_QWORD ***)this + 3) )
      *((_QWORD *)this + 3) = *v5;
    else
      *v5[1] = *v5;
    if ( v5 == *((_QWORD ***)this + 4) )
      *((_QWORD *)this + 4) = v5[1];
    else
      (*v5)[1] = v5[1];
    ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>>::FreeNode(
      (char *)this + 24,
      v5);
  }
  else
  {
    v4 = -2147024809;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  return v4;
}
