/*
 * XREFs of ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18004C16C
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18002C610 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x180006144 (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18000B254 (--$_Emplace_reallocate@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x1800336A0 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x1800347A0 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?reset@?$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@U23@@wil@@QEAAXXZ @ 0x18004ACA4 (-reset@-$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@.c)
 *     ?GetConnectorProcessingModeDataFormatsFromDriver@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@U23@@wil@@@Z @ 0x18004C228 (-GetConnectorProcessingModeDataFormatsFromDriver@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@QEAA@XZ @ 0x18014A76C (--1-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete@VCConnectorProcessin.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver(
        __int64 a1,
        struct _GUID *a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 *a7)
{
  int ConnectorProcessingModeDataFormatsFromDriver; // eax
  unsigned int v10; // ebx
  CConnectorProcessingModeCharacteristics *v12; // rax
  CConnectorProcessingModeCharacteristics *v13; // rdi
  CConnectorProcessingModeCharacteristics *v14; // rbx
  int v15; // edx
  __int64 v16; // r14
  const struct tWAVEFORMATEX **v17; // rsi
  __int64 v18; // r15
  __int64 v19; // r15
  int v20; // ebx
  const struct tWAVEFORMATEX *v21; // rax
  __int64 *v22; // rcx
  CConnectorProcessingModeCharacteristics **v23; // rdx
  __int64 v24; // [rsp+30h] [rbp-81h]
  unsigned int v25; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v26; // [rsp+74h] [rbp-3Dh] BYREF
  unsigned int v27; // [rsp+78h] [rbp-39h] BYREF
  int v28; // [rsp+7Ch] [rbp-35h]
  struct _GUID v29; // [rsp+80h] [rbp-31h] BYREF
  int v30[2]; // [rsp+90h] [rbp-21h] BYREF
  __int64 v31; // [rsp+98h] [rbp-19h]
  struct _GUID v32; // [rsp+A0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+47h]
  CConnectorProcessingModeCharacteristics *v34; // [rsp+100h] [rbp+4Fh] BYREF
  unsigned int v35; // [rsp+108h] [rbp+57h] BYREF
  int v36; // [rsp+110h] [rbp+5Fh]
  __int64 v37; // [rsp+118h] [rbp+67h]

  v37 = a4;
  v36 = a3;
  *(_QWORD *)v30 = 0LL;
  v31 = 0LL;
  v29 = *a2;
  ConnectorProcessingModeDataFormatsFromDriver = GetConnectorProcessingModeDataFormatsFromDriver(
                                                   (_DWORD)g_DeviceEnumerator,
                                                   *(_QWORD *)(a1 + 72),
                                                   (unsigned int)&v29,
                                                   a3,
                                                   (__int64)v30);
  v10 = ConnectorProcessingModeDataFormatsFromDriver;
  if ( ConnectorProcessingModeDataFormatsFromDriver < 0 )
  {
    if ( ConnectorProcessingModeDataFormatsFromDriver != -2147023728
      && ConnectorProcessingModeDataFormatsFromDriver != -2147467262
      && ConnectorProcessingModeDataFormatsFromDriver != -2147024846 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x101F,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)ConnectorProcessingModeDataFormatsFromDriver);
    }
    goto LABEL_3;
  }
  v12 = (CConnectorProcessingModeCharacteristics *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  v34 = v12;
  if ( v12 )
  {
    *(struct _GUID *)v12 = *a2;
    *((_QWORD *)v12 + 2) = 0LL;
    *((_QWORD *)v12 + 3) = 0LL;
    *((_QWORD *)v12 + 4) = 0LL;
    *((_QWORD *)v12 + 5) = 0LL;
    *((_QWORD *)v12 + 6) = 0LL;
    *((_QWORD *)v12 + 7) = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  v14 = v13;
  *(_QWORD *)&v29.Data1 = v13;
  if ( !v13 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1022,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL);
    std::unique_ptr<CConnectorProcessingModeCharacteristics>::~unique_ptr<CConnectorProcessingModeCharacteristics>(&v29);
LABEL_3:
    wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset((__int64)v30);
    return v10;
  }
  v15 = a5 + 2;
  v28 = v15;
  v16 = 0LL;
  v17 = *(const struct tWAVEFORMATEX ***)v30;
  v18 = v31;
  if ( *(_QWORD *)v30 != *(_QWORD *)v30 + 8 * v31 )
  {
    v19 = *(_QWORD *)v30 + 8 * v31;
    v20 = v36;
    do
    {
      v21 = *v17;
      v32 = *a2;
      LODWORD(v24) = v15;
      if ( (int)DiscoverPeriodicityCharacteristicsForFormat(
                  *(_QWORD **)(a1 + 40),
                  *(_DWORD *)(a1 + 212),
                  v20,
                  &v32,
                  v21,
                  v37,
                  v24,
                  a6,
                  &v27,
                  &v26,
                  &v25,
                  &v35,
                  &v34) >= 0 )
      {
        CConnectorProcessingModeCharacteristics::AddConnectorFormat(v13, *v17, v27, v26, v25, v35, (unsigned int)v34);
        ++v16;
      }
      ++v17;
      v15 = v28;
    }
    while ( v17 != (const struct tWAVEFORMATEX **)v19 );
    v14 = v13;
    v18 = v31;
    if ( v16 )
    {
      v22 = a7;
      v23 = (CConnectorProcessingModeCharacteristics **)a7[1];
      if ( v23 == (CConnectorProcessingModeCharacteristics **)a7[2] )
      {
        std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Emplace_reallocate<std::unique_ptr<CConnectorProcessingModeCharacteristics>>(
          a7,
          (__int64)v23,
          (__int64 *)&v29);
        v14 = *(CConnectorProcessingModeCharacteristics **)&v29.Data1;
      }
      else
      {
        v14 = 0LL;
        *v23 = v13;
        v22[1] += 8LL;
      }
    }
  }
  if ( v16 != v18 )
    *(_DWORD *)(a1 + 236) = 1;
  if ( v14 )
    CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v14);
  wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset((__int64)v30);
  return 0LL;
}
