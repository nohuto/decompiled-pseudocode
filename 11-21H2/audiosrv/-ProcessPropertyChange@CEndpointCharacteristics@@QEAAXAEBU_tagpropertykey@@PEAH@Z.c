/*
 * XREFs of ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18004DF00
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18005A308 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x18005C314 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CA8C (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x180051B74 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlob.c)
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x1800535CC (-OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     GetSpatialSettingsMonitoringPKey @ 0x180055FD0 (GetSpatialSettingsMonitoringPKey.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x18005D250 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18005F1D0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18005F238 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C5F24 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x18014CE3C (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CEndpointCharacteristics::ProcessPropertyChange(
        CEndpointCharacteristics *this,
        const struct _tagpropertykey *a2,
        int *a3)
{
  const struct _tagpropertykey *v4; // r12
  CEndpointCharacteristics *v5; // r15
  unsigned int v6; // ecx
  DWORD pid; // edx
  __int128 *v8; // rax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int128 *v14; // rbx
  unsigned int i; // edi
  __int64 v16; // rax
  int *v17; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // rsi
  signed int v20; // edx
  __int64 v21; // r8
  int v22; // r9d
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rdx
  int v26; // r14d
  __int64 v27; // r8
  unsigned __int64 v28; // rcx
  void *v29; // rcx
  int v30; // eax
  void *v31; // rcx
  __int64 v32; // r8
  int updated; // eax
  unsigned int v34; // r12d
  int v35; // r15d
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // [rsp+20h] [rbp-E0h]
  int v39; // [rsp+20h] [rbp-E0h]
  _BYTE v40[8]; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  int v42; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v43; // [rsp+48h] [rbp-B8h]
  _DWORD v44[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v45; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID *p_pv; // [rsp+60h] [rbp-A0h]
  struct tWAVEFORMATEX *v47; // [rsp+68h] [rbp-98h] BYREF
  char v48; // [rsp+70h] [rbp-90h]
  CEndpointCharacteristics *v49; // [rsp+78h] [rbp-88h]
  const struct _tagpropertykey *v50; // [rsp+80h] [rbp-80h]
  __int128 v51; // [rsp+90h] [rbp-70h] BYREF
  int v52; // [rsp+A0h] [rbp-60h]
  __int128 v53; // [rsp+A4h] [rbp-5Ch]
  int v54; // [rsp+B4h] [rbp-4Ch]
  __int128 v55; // [rsp+B8h] [rbp-48h]
  int v56; // [rsp+C8h] [rbp-38h]
  __int128 v57; // [rsp+CCh] [rbp-34h]
  int v58; // [rsp+DCh] [rbp-24h]
  __int128 v59; // [rsp+E0h] [rbp-20h]
  int v60; // [rsp+F0h] [rbp-10h]
  __int128 v61; // [rsp+F4h] [rbp-Ch]
  int v62; // [rsp+104h] [rbp+4h]
  PROPERTYKEY v63; // [rsp+108h] [rbp+8h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v4 = a2;
  v50 = a2;
  v5 = this;
  v49 = this;
  *a3 = 0;
  v51 = xmmword_1801C1674;
  v52 = dword_1801C1684;
  v53 = xmmword_1801C1688;
  v54 = dword_1801C1698;
  v55 = xmmword_1801C169C;
  v56 = dword_1801C16AC;
  v57 = xmmword_1801C16C4;
  v58 = dword_1801C16D4;
  v59 = xmmword_1801C16D8;
  v60 = dword_1801C16E8;
  v61 = xmmword_1801C16EC;
  v62 = dword_1801C16FC;
  v63 = PKEY_AudioEndpoint_Disable_SysFx;
  v6 = 0;
  pid = a2->pid;
  v8 = &v51;
  while ( 1 )
  {
    if ( pid == *((_DWORD *)v8 + 4) )
    {
      v32 = *(_QWORD *)&v4->fmtid.Data1 - *(_QWORD *)v8;
      if ( *(_QWORD *)&v4->fmtid.Data1 == *(_QWORD *)v8 )
        v32 = *(_QWORD *)v4->fmtid.Data4 - *((_QWORD *)v8 + 1);
      if ( !v32 )
        break;
    }
    ++v6;
    v8 = (__int128 *)((char *)v8 + 20);
    if ( v6 >= 7 )
      goto LABEL_4;
  }
  updated = CEndpointCharacteristics::UpdateAPOEnableStatus(v5);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1AD5,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)updated,
      v38);
LABEL_4:
  if ( !*((_DWORD *)v5 + 47) )
  {
    v9 = SpatialPolicy::OnPropertyChange(
           *((const struct _tlgProvider_t **)v5 + 1223),
           *((struct IMMDevice **)v5 + 2),
           v4);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1ADC,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v9,
        v38);
    if ( !*((_DWORD *)v5 + 47) )
    {
      v10 = *(_QWORD *)&v4->fmtid.Data1 - *((_QWORD *)v5 + 251);
      if ( *(_QWORD *)&v4->fmtid.Data1 == *((_QWORD *)v5 + 251) )
        v10 = *(_QWORD *)v4->fmtid.Data4 - *((_QWORD *)v5 + 252);
      if ( !v10 && v4->pid == *((_DWORD *)v5 + 506) )
        goto LABEL_59;
      v11 = *(_QWORD *)&v4->fmtid.Data1 - *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1;
      if ( *(_QWORD *)&v4->fmtid.Data1 == *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1 )
        v11 = *(_QWORD *)v4->fmtid.Data4 - *(_QWORD *)PKEY_AudioEngine_DeviceFormat.fmtid.Data4;
      if ( !v11 && !v4->pid )
      {
LABEL_59:
        pv = 0LL;
        p_pv = &pv;
        v47 = 0LL;
        v48 = 1;
        CEndpointCharacteristics::GetDeviceFormat(v5, 0LL, 0LL, 0, &v47);
        if ( v48 )
        {
          v29 = *p_pv;
          *p_pv = v47;
          if ( v29 )
            CoTaskMemFree(v29);
        }
        v40[0] = 0;
        v30 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)g_policyConfigInternal + 48LL))(
                g_policyConfigInternal,
                v40);
        if ( v30 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1AE6,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v30,
            v39);
        CSpatialProperties::ProcessPropertyChange(
          (CEndpointCharacteristics *)((char *)v5 + 1904),
          v4,
          (struct SpatialAudioRelatedGlobalSettings *)v40,
          (const struct tWAVEFORMATEX *)pv,
          a3);
        v31 = pv;
        pv = 0LL;
        if ( v31 )
          CoTaskMemFree(v31);
      }
    }
  }
  v12 = (_QWORD *)*(unsigned int *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                  + 4LL);
  if ( dword_1801C2FE8 > (int)v12 )
  {
    Init_thread_header(&dword_1801C2FE8);
    if ( dword_1801C2FE8 == -1 )
    {
      xmmword_1801C26F0 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      dword_1801C2700 = 0;
      dword_1801C2704 = 8;
      xmmword_1801C2708 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      dword_1801C2718 = 0;
      dword_1801C271C = 4;
      *(PROPERTYKEY *)byte_1801C2720 = PKEY_AudioEngine_DeviceFormat;
      dword_1801C2734 = 2;
      *(struct _tagpropertykey *)byte_1801C2738 = PKEY_Endpoint_AllowOffloading;
      dword_1801C274C = 16;
      Init_thread_footer(&dword_1801C2FE8);
    }
  }
  v13 = xmmword_1801C26F0 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( (_QWORD)xmmword_1801C26F0 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v13 = *((_QWORD *)&xmmword_1801C26F0 + 1) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v14 = &xmmword_1801C26F0;
  if ( !v13 )
  {
    GetSpatialSettingsMonitoringPKey(&xmmword_1801C26F0);
    GetSpatialSettingsMonitoringPKey(&xmmword_1801C2708);
  }
  for ( i = 0; i < 4; ++i )
  {
    if ( v4->pid == *((_DWORD *)v14 + 4) )
    {
      v16 = *(_QWORD *)&v4->fmtid.Data1 - *(_QWORD *)v14;
      if ( *(_QWORD *)&v4->fmtid.Data1 == *(_QWORD *)v14 )
        v16 = *(_QWORD *)v4->fmtid.Data4 - *((_QWORD *)v14 + 1);
      if ( !v16 )
      {
        v42 = *((_DWORD *)v14 + 5);
        v44[0] = 0;
        v44[1] = 1;
        v17 = v44;
        v45 = v44;
        do
        {
          v18 = *v17;
          v43 = v18;
          if ( v18 >= *((_QWORD *)v5 + 224) )
            goto LABEL_80;
          v19 = *((_QWORD *)v5 + 225) + 96 * v18;
          if ( *(_BYTE *)(v19 + 52) )
          {
            EnterCriticalSection((LPCRITICAL_SECTION)(v19 + 56));
            v20 = 0;
            if ( *(int *)(v19 + 40) > 0 )
            {
              v21 = 0LL;
              v22 = v42;
              do
              {
                if ( v21 < 0 || v20 >= *(_DWORD *)(v19 + 40) )
                {
                  ATL::_AtlRaiseException(0xC000008C, v20);
                  __debugbreak();
                }
                v12 = *(_QWORD **)(v21 + *(_QWORD *)(v19 + 32));
                if ( (v22 & (_DWORD)v12[2]) != 0 )
                  *((_BYTE *)v12 + 20) = 1;
                ++v20;
                v21 += 16LL;
              }
              while ( v20 < *(_DWORD *)(v19 + 40) );
            }
            if ( v19 != -56 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v19 + 56));
          }
          if ( v18 >= *((_QWORD *)v5 + 226) )
            goto LABEL_80;
          v23 = *((_QWORD *)v5 + 227) + 96 * v18;
          if ( *(_BYTE *)(v23 + 52) )
          {
            EnterCriticalSection((LPCRITICAL_SECTION)(v23 + 56));
            LODWORD(pv) = 0;
            if ( *(int *)(v23 + 40) > 0 )
            {
              v34 = (unsigned int)pv;
              v35 = v42;
              do
              {
                v36 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                        v23 + 32,
                        v34);
                v12 = *(_QWORD **)v36;
                if ( (v35 & *(_DWORD *)(*(_QWORD *)v36 + 16LL)) != 0 )
                  *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                          v23 + 32,
                                          v34)
                           + 20LL) = 1;
                ++v34;
              }
              while ( (signed int)v34 < *(_DWORD *)(v23 + 40) );
              v18 = v43;
              v5 = v49;
              v4 = v50;
            }
            if ( v23 != -56 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v23 + 56));
          }
          if ( v18 >= *((_QWORD *)v5 + 228) )
          {
LABEL_80:
            _o_terminate(v12);
            __debugbreak();
            JUMPOUT(0x18008B2B8LL);
          }
          v24 = *((_QWORD *)v5 + 229) + 96 * v18;
          if ( *(_BYTE *)(v24 + 52) )
          {
            EnterCriticalSection((LPCRITICAL_SECTION)(v24 + 56));
            v26 = 0;
            if ( *(int *)(v24 + 40) > 0 )
            {
              v27 = v24 + 32;
              v28 = 0LL;
              v43 = 0LL;
              do
              {
                if ( v26 < 0 || v26 >= *(_DWORD *)(v27 + 8) )
                {
                  ATL::_AtlRaiseException(0xC000008C, v25);
                  __debugbreak();
                }
                if ( (v42 & *(_DWORD *)(*(_QWORD *)(v28 + *(_QWORD *)v27) + 16LL)) != 0 )
                {
                  v37 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                          v27,
                          (unsigned int)v26);
                  v25 = *(_QWORD *)v37;
                  *(_BYTE *)(*(_QWORD *)v37 + 20LL) = 1;
                  v27 = v24 + 32;
                }
                ++v26;
                v28 = v43 + 16;
                v43 += 16LL;
              }
              while ( v26 < *(_DWORD *)(v24 + 40) );
            }
            if ( v24 != -56 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v24 + 56));
          }
          v17 = v45 + 1;
          v45 = v17;
          v12 = &v45;
        }
        while ( v17 != (int *)&v45 );
      }
    }
    v14 = (__int128 *)((char *)v14 + 24);
  }
}
