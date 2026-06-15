/*
 * XREFs of ?GetNode@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@AEBAPEAVCNode@12@AEBQEAVResourceConsumer@@AEAI1AEAPEAV312@@Z @ 0x18000CBC0
 * Callers:
 *     ?Lookup@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEBA_NAEBQEAVResourceConsumer@@AEAPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@2@@Z @ 0x18000CB88 (-Lookup@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL.c)
 *     ?SetAt@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAAPEAU__POSITION@@AEBQEAVResourceConsumer@@AEBQEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@2@@Z @ 0x180160AD0 (-SetAt@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@.c)
 * Callees:
 *     ??8StreamResourceConsumer@@QEAA_NAEBV0@@Z @ 0x18015F644 (--8StreamResourceConsumer@@QEAA_NAEBV0@@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::GetNode(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned int v7; // eax
  __int64 v9; // rdi
  __int64 i; // rbx
  int v11; // r8d
  char v12; // al

  v7 = *(_DWORD *)(*(_QWORD *)a2 + 8LL);
  if ( v7 == 1 )
    v7 = (*(_DWORD *)(*(_QWORD *)a2 + 940LL) << 16) | (4 * *(_DWORD *)(*(_QWORD *)a2 + 960LL)) | 1;
  *a4 = v7;
  *a3 = v7 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    v9 = 0LL;
    *a5 = 0LL;
    for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL * *a3); ; i = *(_QWORD *)(i + 16) )
    {
      if ( !i )
        return 0LL;
      if ( *(_DWORD *)(i + 24) == *a4 )
      {
        v11 = *(_DWORD *)(*(_QWORD *)i + 8LL);
        if ( v11 == 1 )
        {
          if ( *(_DWORD *)(*(_QWORD *)a2 + 8LL) == 1 )
          {
            v12 = StreamResourceConsumer::operator==();
            goto LABEL_13;
          }
        }
        else if ( !v11 && !*(_DWORD *)(*(_QWORD *)a2 + 8LL) )
        {
          v12 = *(_DWORD *)(*(_QWORD *)i + 16LL) == *(_DWORD *)(*(_QWORD *)a2 + 16LL);
LABEL_13:
          if ( v12 )
            goto LABEL_14;
          goto LABEL_16;
        }
        if ( v11 == *(_DWORD *)(*(_QWORD *)a2 + 8LL) )
        {
LABEL_14:
          *a5 = v9;
          return i;
        }
      }
LABEL_16:
      v9 = i;
    }
  }
  return 0LL;
}
