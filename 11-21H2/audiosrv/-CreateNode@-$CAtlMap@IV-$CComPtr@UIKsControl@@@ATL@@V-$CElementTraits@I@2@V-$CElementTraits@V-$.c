/*
 * XREFs of ?CreateNode@?$CAtlMap@IV?$CComPtr@UIKsControl@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UIKsControl@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@III@Z @ 0x18015DF3C
 * Callers:
 *     ?SetAt@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@IAEBV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x18015F840 (-SetAt@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$C.c)
 *     ?SetAt@?$CAtlMap@IV?$CComPtr@UIKsControl@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UIKsControl@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@IAEBV?$CComPtr@UIKsControl@@@2@@Z @ 0x180161BD0 (-SetAt@-$CAtlMap@IV-$CComPtr@UIKsControl@@@ATL@@V-$CElementTraits@I@2@V-$CElementTraits@V-$CComP.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAA_NI_N@Z @ 0x180127360 (-InitHashTable@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAud.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::CreateNode(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  if ( !*(_QWORD *)a1
    && !ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::InitHashTable(
          a1,
          *(_DWORD *)(a1 + 16),
          1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  return ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::NewNode(
           a1,
           a2,
           a3,
           a4);
}
