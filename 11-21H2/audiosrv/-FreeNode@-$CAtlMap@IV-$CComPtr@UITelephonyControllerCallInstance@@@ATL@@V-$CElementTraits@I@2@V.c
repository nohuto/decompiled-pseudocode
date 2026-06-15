/*
 * XREFs of ?FreeNode@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18015E750
 * Callers:
 *     ??1PhoneTopology@@MEAA@XZ @ 0x18004C660 (--1PhoneTopology@@MEAA@XZ.c)
 *     ?RemoveNode@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x18015F624 (-RemoveNode@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?FreePlexes@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEAAXXZ @ 0x18005CBB4 (-FreePlexes@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PickSize@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x180127CD8 (-PickSize@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V.c)
 *     ?Rehash@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAAXI@Z @ 0x1801591D0 (-Rehash@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL.c)
 */

void __fastcall ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::FreeNode(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // eax

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 8));
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = a2;
  v4 = *(_QWORD *)(a1 + 8) - 1LL;
  *(_QWORD *)(a1 + 8) = v4;
  if ( v4 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v5 = ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::PickSize(
           a1,
           v4);
    ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::Rehash(
      a1,
      v5);
    v4 = *(_QWORD *)(a1 + 8);
  }
  if ( !v4 )
    ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::FreePlexes(a1);
}
