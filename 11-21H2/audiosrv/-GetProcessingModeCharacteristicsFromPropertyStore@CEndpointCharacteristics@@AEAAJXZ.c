/*
 * XREFs of ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x180047814
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x1800470E0 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18000EC78 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18001058C (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18004728C (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?_Tidy@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180047A34 (-_Tidy@-$vector@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete@VCConn.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800483F0 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18004848C (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800492E4 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004A0DC (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(
        CEndpointCharacteristics *this)
{
  __int64 v2; // r12
  __int64 v3; // r14
  __int64 v4; // r13
  int ProcessingModeCharacteristics; // ebx
  __int64 v6; // rax
  const struct _GUID *v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rax
  const struct _GUID *v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // ebx
  int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // [rsp+38h] [rbp-49h] BYREF
  __int64 v22; // [rsp+40h] [rbp-41h]
  __int64 v23; // [rsp+48h] [rbp-39h] BYREF
  __int64 v24; // [rsp+50h] [rbp-31h]
  __int128 v25; // [rsp+58h] [rbp-29h] BYREF
  __int64 v26; // [rsp+68h] [rbp-19h]
  __int128 v27; // [rsp+70h] [rbp-11h] BYREF
  __int64 v28; // [rsp+80h] [rbp-1h]
  struct _GUID v29; // [rsp+88h] [rbp+7h] BYREF
  struct _GUID v30; // [rsp+98h] [rbp+17h] BYREF

  v25 = 0LL;
  v2 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( !*((_DWORD *)this + 54) )
  {
    v3 = *((_QWORD *)&v25 + 1);
    v4 = v25;
    goto LABEL_3;
  }
  v21 = 0LL;
  v22 = 0LL;
  ProcessingModeCharacteristics = CEndpointCharacteristics::ReadProcessingModeCharacteristics(
                                    (__int64)this,
                                    3,
                                    (__int64)&v25);
  if ( ProcessingModeCharacteristics < 0 )
  {
LABEL_23:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v21);
    goto LABEL_18;
  }
  gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 19, 3uLL);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&v21);
  v14 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 19, 3uLL);
  if ( (_DWORD)v22 != *(_DWORD *)(v14 + 8) )
  {
    ProcessingModeCharacteristics = -2147024882;
    goto LABEL_23;
  }
  v15 = *(const struct _GUID **)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                  (unsigned __int64 *)this + 234,
                                  3uLL);
  v16 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 234, 3uLL);
  ProcessingModeCharacteristics = CAudioSignalProcessingModeArray::AddMultiple(
                                    (CAudioSignalProcessingModeArray *)&v21,
                                    *(_DWORD *)(v16 + 8),
                                    v15);
  if ( ProcessingModeCharacteristics < 0 )
    goto LABEL_23;
  v17 = 0;
  v3 = *((_QWORD *)&v25 + 1);
  v4 = v25;
  v18 = v22;
  if ( (int)v22 > 0 )
  {
    while ( 1 )
    {
      v29 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v21, v17);
      CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &v30, 3, &v29, 0);
      if ( v4 == v3 )
        break;
      v19 = v4;
      while ( 1 )
      {
        v20 = **(_QWORD **)v19 - *(_QWORD *)&v30.Data1;
        if ( !v20 )
          v20 = *(_QWORD *)(*(_QWORD *)v19 + 8LL) - *(_QWORD *)v30.Data4;
        if ( !v20 )
          break;
        v19 += 8LL;
        if ( v19 == v3 )
          goto LABEL_22;
      }
      if ( v19 == v3 )
        break;
      if ( (int)++v17 >= v18 )
        goto LABEL_35;
    }
LABEL_22:
    ProcessingModeCharacteristics = -2147023728;
    goto LABEL_23;
  }
LABEL_35:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v21);
  v2 = v26;
LABEL_3:
  ProcessingModeCharacteristics = CEndpointCharacteristics::ReadProcessingModeCharacteristics(
                                    (__int64)this,
                                    0,
                                    (__int64)&v27);
  if ( ProcessingModeCharacteristics >= 0 )
  {
    gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 19, 0LL);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&v23);
    v6 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 19, 0LL);
    if ( (_DWORD)v24 == *(_DWORD *)(v6 + 8) )
    {
      v7 = *(const struct _GUID **)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                     (unsigned __int64 *)this + 234,
                                     0LL);
      v8 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 234, 0LL);
      ProcessingModeCharacteristics = CAudioSignalProcessingModeArray::AddMultiple(
                                        (CAudioSignalProcessingModeArray *)&v23,
                                        *(_DWORD *)(v8 + 8),
                                        v7);
      if ( ProcessingModeCharacteristics >= 0 )
      {
        v9 = 0;
        v10 = *((_QWORD *)&v27 + 1);
        if ( (int)v24 <= 0 )
        {
LABEL_14:
          if ( (__int128 *)((char *)this + 248) != &v25 )
          {
            std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy((char *)this + 248);
            *((_QWORD *)this + 31) = v4;
            *((_QWORD *)this + 32) = v3;
            *((_QWORD *)this + 33) = v2;
            v25 = 0LL;
            v26 = 0LL;
          }
          if ( (__int128 *)((char *)this + 224) != &v27 )
          {
            std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy((char *)this + 224);
            *((_QWORD *)this + 28) = v27;
            *((_QWORD *)this + 29) = v10;
            *((_QWORD *)this + 30) = v28;
            v27 = 0LL;
            v28 = 0LL;
          }
        }
        else
        {
          while ( 1 )
          {
            v29 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v23, v9);
            CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &v30, 0, &v29, 0);
            if ( (_QWORD)v27 == v10 )
              break;
            v11 = v27;
            while ( 1 )
            {
              v12 = **(_QWORD **)v11 - *(_QWORD *)&v30.Data1;
              if ( !v12 )
                v12 = *(_QWORD *)(*(_QWORD *)v11 + 8LL) - *(_QWORD *)v30.Data4;
              if ( !v12 )
                break;
              v11 += 8LL;
              if ( v11 == v10 )
                goto LABEL_38;
            }
            if ( v11 == v10 )
              break;
            if ( (int)++v9 >= (int)v24 )
              goto LABEL_14;
          }
LABEL_38:
          ProcessingModeCharacteristics = -2147023728;
        }
      }
    }
    else
    {
      ProcessingModeCharacteristics = -2147024882;
    }
  }
LABEL_18:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v23);
  std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v27);
  std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v25);
  return (unsigned int)ProcessingModeCharacteristics;
}
