/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@PEBU_GUID@@IPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540C0
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800531B0 (-IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVE.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxHdmi@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180053FB0 (-IsTechnologySupported@CSpatialAudioDtsxHdmi@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMA.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800021E0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180002514 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800492E4 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x180054260 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsFormatSupportedOnHostConnector@CEndpointCharacteristics@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18014AE68 (-IsFormatSupportedOnHostConnector@CEndpointCharacteristics@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 */

bool __fastcall CSpatialAudioTechCompressed::IsTechnologySupported(
        CSpatialAudioTechCompressed *this,
        struct CEndpointCharacteristics *a2,
        const struct WAVEFORMATEXTENSIBLE *a3,
        const struct _GUID *a4,
        unsigned int a5,
        unsigned int *a6,
        bool *a7,
        struct WAVEFORMATEXTENSIBLE *a8)
{
  unsigned int v8; // esi
  bool IsFormatSupportedOnHostConnector; // di
  unsigned int i; // ebx
  __int128 v14; // xmm0
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int128 v19; // xmm6
  __int128 v20; // xmm7
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 SupportedConnectorModesInternal; // rax
  __int64 *v26; // r11
  GUID v27; // xmm0
  __int64 v28; // r11
  __int64 v29; // xmm0_8
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-79h] BYREF
  __int64 v31; // [rsp+68h] [rbp-69h]
  unsigned int *v32; // [rsp+70h] [rbp-61h]
  bool *v33; // [rsp+78h] [rbp-59h]
  GUID v34; // [rsp+88h] [rbp-49h] BYREF
  _BYTE v35[40]; // [rsp+98h] [rbp-39h] BYREF

  v8 = 0;
  v33 = a7;
  *a6 = 0;
  *a7 = 0;
  v32 = a6;
  IsFormatSupportedOnHostConnector = 0;
  memset(v35, 0, sizeof(v35));
  if ( a3
    && a3->Format.wFormatTag == 0xFFFE
    && a3->Format.cbSize == 22
    && a3->Format.nSamplesPerSec == 192000
    && a3->Format.nChannels == 8
    && a3->Format.wBitsPerSample == 16
    && a3->Samples.wValidBitsPerSample == 16
    && (a3->dwChannelMask == 1599 || a3->dwChannelMask == 255)
    && a5 )
  {
    do
    {
      v17 = v8;
      v18 = *(_QWORD *)&a3->SubFormat.Data1 - *(_QWORD *)&a4[v17].Data1;
      if ( !v18 )
        v18 = *(_QWORD *)a3->SubFormat.Data4 - *(_QWORD *)a4[v17].Data4;
      if ( !v18 )
      {
        IsFormatSupportedOnHostConnector = CEndpointCharacteristics::IsFormatSupportedOnHostConnector(a2, a3);
        if ( IsFormatSupportedOnHostConnector )
        {
          v19 = *(_OWORD *)&a3->Format.wFormatTag;
          v20 = *(_OWORD *)&a3->Format.cbSize;
          *(_QWORD *)&v35[32] = *(_QWORD *)a3->SubFormat.Data4;
          goto LABEL_45;
        }
      }
      ++v8;
    }
    while ( v8 < a5 );
  }
  for ( i = 0; i < a5; ++a4 )
  {
    v14 = (__int128)*a4;
    *(_DWORD *)v35 = 589822;
    *(_DWORD *)&v35[14] = 1441808;
    *(_OWORD *)&v35[24] = v14;
    *(_DWORD *)&v35[4] = 192000;
    *(_WORD *)&v35[18] = 16;
    *(_DWORD *)&v35[20] = 1599;
    *(_WORD *)&v35[12] = 16;
    *(_DWORD *)&v35[8] = 3072000;
    if ( IsCompressedSpatialFormat((const struct tWAVEFORMATEX *)v35) )
    {
      v15 = *((_QWORD *)a2 + 5);
      v31 = 0LL;
      *(_OWORD *)pvar = 0LL;
      IsFormatSupportedOnHostConnector = 0;
      if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
             v15,
             &PKEY_Endpoint_EncodedFormatSupport,
             pvar) >= 0
        && LOWORD(pvar[0]) == 65
        && LODWORD(pvar[1]) >= 0xC )
      {
        v21 = *(_DWORD *)(v31 + 8);
        if ( LODWORD(pvar[1]) == 16LL * v21 + 12 )
        {
          v22 = 0;
          if ( v21 )
          {
            while ( 1 )
            {
              v23 = 16LL * v22;
              v24 = *(_QWORD *)&v35[24] - *(_QWORD *)(v23 + v31 + 12);
              if ( *(_QWORD *)&v35[24] == *(_QWORD *)(v23 + v31 + 12) )
                v24 = *(_QWORD *)&v35[32] - *(_QWORD *)(v23 + v31 + 20);
              if ( !v24 )
                break;
              if ( ++v22 >= v21 )
                goto LABEL_9;
            }
            IsFormatSupportedOnHostConnector = 1;
          }
        }
      }
LABEL_9:
      PropVariantClear(pvar);
      if ( IsFormatSupportedOnHostConnector )
        goto LABEL_44;
    }
    else
    {
      SupportedConnectorModesInternal = CEndpointCharacteristics::GetSupportedConnectorModesInternal(a2, 0, 0);
      if ( *(_DWORD *)(SupportedConnectorModesInternal + 8) )
      {
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             (__int64 *)SupportedConnectorModesInternal,
                             &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
        {
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                               v26,
                               &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
            v27 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v28, 0);
          else
            v27 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        }
        else
        {
          v27 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        }
      }
      else
      {
        v27 = GUID_00000000_0000_0000_0000_000000000000;
      }
      v34 = v27;
      if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                  (__int64)a2,
                  0,
                  (const struct tWAVEFORMATEX *)v35,
                  (__int128 *)&v34,
                  0,
                  0LL,
                  0LL,
                  0LL,
                  0LL) >= 0 )
      {
        IsFormatSupportedOnHostConnector = 1;
LABEL_44:
        v19 = *(_OWORD *)v35;
        v20 = *(_OWORD *)&v35[16];
LABEL_45:
        v29 = *(_QWORD *)&v35[32];
        *v32 = 1;
        *v33 = 0;
        *(_OWORD *)&a8->Format.wFormatTag = v19;
        *(_OWORD *)&a8->Format.cbSize = v20;
        *(_QWORD *)a8->SubFormat.Data4 = v29;
        return IsFormatSupportedOnHostConnector;
      }
      IsFormatSupportedOnHostConnector = 0;
    }
    ++i;
  }
  return IsFormatSupportedOnHostConnector;
}
