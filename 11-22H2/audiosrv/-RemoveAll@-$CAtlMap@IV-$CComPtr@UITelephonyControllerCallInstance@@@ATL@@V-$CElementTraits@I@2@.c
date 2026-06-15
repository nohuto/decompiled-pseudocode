/*
 * XREFs of ?RemoveAll@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEAAXXZ @ 0x180044774
 * Callers:
 *     ??1PhoneTopology@@MEAA@XZ @ 0x180026958 (--1PhoneTopology@@MEAA@XZ.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x180014F90 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAA_NI_N@Z @ 0x180134E40 (-InitHashTable@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAud.c)
 *     ?PickSize@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x180135768 (-PickSize@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V.c)
 *     ?FreeNode@?$CAtlMap@IV?$CComPtr@UIKsControl@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UIKsControl@@@ATL@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1801646E4 (-FreeNode@-$CAtlMap@IV-$CComPtr@UIKsControl@@@ATL@@V-$CElementTraits@I@2@V-$CElementTraits@V-$CC.c)
 */

void __fastcall ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx
  void *v3; // rdi
  HANDLE ProcessHeap; // rax
  ATL::CAtlPlex **v5; // rcx
  __int64 i; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // eax

  ++*(_DWORD *)(a1 + 48);
  v2 = *(void **)a1;
  v3 = v2;
  if ( v2 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); v2 = v3 )
    {
      v7 = *((_QWORD *)v2 + i);
      v3 = v2;
      if ( v7 )
      {
        do
        {
          v8 = v7;
          v7 = *(_QWORD *)(v7 + 16);
          ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::FreeNode(
            a1,
            v8);
        }
        while ( v7 );
        v3 = *(void **)a1;
      }
      i = (unsigned int)(i + 1);
    }
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v3);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v9 = ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::PickSize(
           a1,
           0LL);
    ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::InitHashTable(
      a1,
      v9,
      0LL);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  v5 = *(ATL::CAtlPlex ***)(a1 + 56);
  if ( v5 )
  {
    ATL::CAtlPlex::FreeDataChain(v5);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  --*(_DWORD *)(a1 + 48);
}
