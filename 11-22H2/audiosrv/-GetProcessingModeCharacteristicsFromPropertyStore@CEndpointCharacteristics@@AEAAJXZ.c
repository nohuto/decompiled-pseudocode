/*
 * XREFs of ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x18001E620
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18001E154 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ??4?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180009B24 (--4-$vector@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete@VCConnecto.c)
 *     ?_Tidy@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180009B78 (-_Tidy@-$vector@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete@VCConn.c)
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18001E748 (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18002C970 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18002D110 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(
        CEndpointCharacteristics *this)
{
  char *v2; // r12
  int v3; // ebx
  unsigned int v5; // r14d
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h]

  v19 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( *((_DWORD *)this + 58) )
  {
    v3 = CEndpointCharacteristics::ReadProcessingModeCharacteristics(this, 3LL, &v19);
    if ( v3 < 0 )
      goto LABEL_4;
    v11 = 0;
    v2 = (char *)this + 192;
    v12 = *((_QWORD *)&v19 + 1);
    while ( (signed int)v11 < *(_DWORD *)(gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                            (char *)this + 192,
                                            3LL)
                                        + 8) )
    {
      if ( (_QWORD)v19 == v12 )
        goto LABEL_15;
      v13 = v19;
      do
      {
        v14 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((char *)this + 192, 3LL);
        v15 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v14, v11);
        v16 = **(_QWORD **)v13 - *v15;
        if ( !v16 )
          v16 = *(_QWORD *)(*(_QWORD *)v13 + 8LL) - v15[1];
        if ( !v16 )
          break;
        v13 += 8LL;
      }
      while ( v13 != v12 );
      if ( v13 == v12 )
      {
LABEL_15:
        v3 = -2147023728;
        goto LABEL_4;
      }
      ++v11;
    }
  }
  else
  {
    v2 = (char *)this + 192;
  }
  v3 = CEndpointCharacteristics::ReadProcessingModeCharacteristics(this, 0LL, &v17);
  if ( v3 >= 0 )
  {
    v5 = 0;
    v6 = *((_QWORD *)&v17 + 1);
    while ( (signed int)v5 < *(_DWORD *)(gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v2, 0LL) + 8) )
    {
      if ( (_QWORD)v17 == v6 )
        goto LABEL_15;
      v7 = v17;
      do
      {
        v8 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v2, 0LL);
        v9 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v8, v5);
        v10 = **(_QWORD **)v7 - *v9;
        if ( !v10 )
          v10 = *(_QWORD *)(*(_QWORD *)v7 + 8LL) - v9[1];
        if ( !v10 )
          break;
        v7 += 8LL;
      }
      while ( v7 != v6 );
      if ( v7 == v6 )
        goto LABEL_15;
      ++v5;
    }
    std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::operator=((_QWORD *)this + 33, &v19);
    std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::operator=((_QWORD *)this + 30, &v17);
  }
LABEL_4:
  std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy((__int64 **)&v17);
  std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy((__int64 **)&v19);
  return (unsigned int)v3;
}
