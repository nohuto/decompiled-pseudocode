/*
 * XREFs of ?GrowBuffer@?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18011B7F0
 * Callers:
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180119B3C (-Add@-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@.c)
 *     ?SetCount@?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x180159810 (-SetCount@-$CAtlArray@PEAV-$CAtlArray@PEAVExclusiveEndpointInfo@@V-$CElementTraits@PEAVExclusive.c)
 *     ?ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@5@PEAV?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@5@@Z @ 0x180159F8C (-ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-.c)
 *     ?ParseExclusiveEndpoints@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@Z @ 0x18015A3EC (-ParseExclusiveEndpoints@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlArray@PEAVExc.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18005F922 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

char __fastcall ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>>::GrowBuffer(
        __int64 a1,
        size_t a2)
{
  size_t v4; // rdx
  void *v5; // rax
  size_t v6; // rcx
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // rsi
  size_t v12; // r8

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
    return 1;
  if ( *(_QWORD *)a1 )
  {
    v6 = *(int *)(a1 + 24);
    if ( !v6 )
    {
      v6 = v4 >> 1;
      if ( a2 - v4 > v4 >> 1 )
        v6 = a2 - v4;
    }
    if ( a2 < v4 + v6 )
      a2 = v4 + v6;
    v7 = calloc(a2, 8uLL);
    v10 = v7;
    if ( v7 )
    {
      v12 = 8LL * *(_QWORD *)(a1 + 8);
      if ( v12 )
      {
        if ( !*(_QWORD *)a1 )
        {
          *(_DWORD *)_o__errno(v9, v8) = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memcpy_0(v7, *(const void **)a1, v12);
      }
      free(*(void **)a1);
      *(_QWORD *)a1 = v10;
      goto LABEL_19;
    }
    return 0;
  }
  if ( *(int *)(a1 + 24) > a2 )
    a2 = *(int *)(a1 + 24);
  v5 = calloc(a2, 8uLL);
  *(_QWORD *)a1 = v5;
  if ( !v5 )
    return 0;
LABEL_19:
  *(_QWORD *)(a1 + 16) = a2;
  return 1;
}
