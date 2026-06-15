/*
 * XREFs of ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x180036A20
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x1800360E0 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x180062178 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180018580 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x18002C994 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 *     ?MarkSystemEffectsForResolution@EffectPack@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x1800301F4 (-MarkSystemEffectsForResolution@EffectPack@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18003685C (-OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     GetSpatialSettingsMonitoringPKey @ 0x180040B6C (GetSpatialSettingsMonitoringPKey.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180067240 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800672A8 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DisconnectStreamsOnEndpoint@CEndpointCharacteristics@@AEAAXXZ @ 0x18014BDF8 (-DisconnectStreamsOnEndpoint@CEndpointCharacteristics@@AEAAXXZ.c)
 *     ?UpdateAPOEnableStatus@EffectPack@@QEAAJXZ @ 0x180150418 (-UpdateAPOEnableStatus@EffectPack@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CEndpointCharacteristics::ProcessPropertyChange(
        CEndpointCharacteristics *this,
        const struct _tagpropertykey *a2,
        int *a3,
        __int64 a4)
{
  unsigned int v7; // edi
  unsigned int v8; // ecx
  DWORD pid; // edx
  __int128 *v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r8
  void *v18; // rcx
  int v19; // eax
  void *v20; // rcx
  __int64 v21; // rax
  int updated; // eax
  _BYTE v23[8]; // [rsp+30h] [rbp-99h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-91h] BYREF
  LPVOID *p_pv; // [rsp+40h] [rbp-89h]
  struct tWAVEFORMATEX *v26; // [rsp+48h] [rbp-81h] BYREF
  char v27; // [rsp+50h] [rbp-79h]
  __int128 v28; // [rsp+60h] [rbp-69h] BYREF
  int v29; // [rsp+70h] [rbp-59h]
  __int128 v30; // [rsp+74h] [rbp-55h]
  int v31; // [rsp+84h] [rbp-45h]
  __int128 v32; // [rsp+88h] [rbp-41h]
  int v33; // [rsp+98h] [rbp-31h]
  __int128 v34; // [rsp+9Ch] [rbp-2Dh]
  int v35; // [rsp+ACh] [rbp-1Dh]
  __int128 v36; // [rsp+B0h] [rbp-19h]
  int v37; // [rsp+C0h] [rbp-9h]
  __int128 v38; // [rsp+C4h] [rbp-5h]
  int v39; // [rsp+D4h] [rbp+Bh]
  PROPERTYKEY v40; // [rsp+D8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v7 = 0;
  *a3 = 0;
  v28 = xmmword_1801CEB54;
  v29 = dword_1801CEB64;
  v30 = xmmword_1801CEB68;
  v31 = dword_1801CEB78;
  v32 = xmmword_1801CEB7C;
  v33 = dword_1801CEB8C;
  v34 = xmmword_1801CEBA4;
  v35 = dword_1801CEBB4;
  v36 = xmmword_1801CEBB8;
  v37 = dword_1801CEBC8;
  v38 = xmmword_1801CEBCC;
  v39 = dword_1801CEBDC;
  v40 = PKEY_AudioEndpoint_Disable_SysFx;
  v8 = 0;
  pid = a2->pid;
  v10 = &v28;
  while ( 1 )
  {
    if ( pid == *((_DWORD *)v10 + 4) )
    {
      v17 = *(_QWORD *)&a2->fmtid.Data1 - *(_QWORD *)v10;
      if ( *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)v10 )
        v17 = *(_QWORD *)a2->fmtid.Data4 - *((_QWORD *)v10 + 1);
      if ( !v17 )
        break;
    }
    ++v8;
    v10 = (__int128 *)((char *)v10 + 20);
    if ( v8 >= 7 )
      goto LABEL_4;
  }
  updated = EffectPack::UpdateAPOEnableStatus(*((EffectPack **)this + 44));
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C85,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)updated);
LABEL_4:
  if ( a2->pid == 5 )
  {
    v21 = *(_QWORD *)&a2->fmtid.Data1 - *(_QWORD *)&PKEY_AudioEndpoint_Disable_SysFx.fmtid.Data1;
    if ( *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)&PKEY_AudioEndpoint_Disable_SysFx.fmtid.Data1 )
      v21 = *(_QWORD *)a2->fmtid.Data4 - *(_QWORD *)PKEY_AudioEndpoint_Disable_SysFx.fmtid.Data4;
    if ( !v21 )
      CEndpointCharacteristics::DisconnectStreamsOnEndpoint(this);
  }
  if ( !*((_DWORD *)this + 53) )
  {
    v11 = SpatialPolicy::OnPropertyChange(
            *((const struct _tlgProvider_t **)this + 1036),
            *((struct IMMDevice **)this + 5),
            a2,
            a4);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C92,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v11);
    if ( !*((_DWORD *)this + 53) )
    {
      v12 = *(_QWORD *)&a2->fmtid.Data1 - *((_QWORD *)this + 65);
      if ( *(_QWORD *)&a2->fmtid.Data1 == *((_QWORD *)this + 65) )
        v12 = *(_QWORD *)a2->fmtid.Data4 - *((_QWORD *)this + 66);
      if ( !v12 && a2->pid == *((_DWORD *)this + 134) )
        goto LABEL_34;
      v13 = *(_QWORD *)&a2->fmtid.Data1 - *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1;
      if ( *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1 )
        v13 = *(_QWORD *)a2->fmtid.Data4 - *(_QWORD *)PKEY_AudioEngine_DeviceFormat.fmtid.Data4;
      if ( !v13 && !a2->pid )
      {
LABEL_34:
        pv = 0LL;
        p_pv = &pv;
        v26 = 0LL;
        v27 = 1;
        EffectPack::GetDeviceFormat(*((CEndpointCharacteristics ***)this + 44), 0LL, 0LL, 0, &v26);
        if ( v27 )
        {
          v18 = *p_pv;
          *p_pv = v26;
          if ( v18 )
            CoTaskMemFree(v18);
        }
        v23[0] = 0;
        v19 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)g_policyConfigInternal + 48LL))(
                g_policyConfigInternal,
                v23);
        if ( v19 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1C9C,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v19);
        CSpatialProperties::ProcessPropertyChange(
          (CEndpointCharacteristics *)((char *)this + 416),
          *((struct EffectPack **)this + 44),
          a2,
          (struct SpatialAudioRelatedGlobalSettings *)v23,
          (struct tWAVEFORMATEX *)pv,
          a3);
        v20 = pv;
        pv = 0LL;
        if ( v20 )
          CoTaskMemFree(v20);
      }
    }
  }
  if ( dword_1801CFF50 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801CFF50);
    if ( dword_1801CFF50 == -1 )
    {
      xmmword_1801CF910 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      dword_1801CF920 = 0;
      dword_1801CF924 = 8;
      xmmword_1801CF928 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      dword_1801CF938 = 0;
      dword_1801CF93C = 4;
      *(PROPERTYKEY *)byte_1801CF940 = PKEY_AudioEngine_DeviceFormat;
      dword_1801CF954 = 2;
      *(struct _tagpropertykey *)byte_1801CF958 = PKEY_Endpoint_AllowOffloading;
      dword_1801CF96C = 16;
      Init_thread_footer(&dword_1801CFF50);
    }
  }
  v14 = xmmword_1801CF910 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( (_QWORD)xmmword_1801CF910 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v14 = *((_QWORD *)&xmmword_1801CF910 + 1) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v15 = &xmmword_1801CF910;
  if ( !v14 )
  {
    GetSpatialSettingsMonitoringPKey(&xmmword_1801CF910);
    GetSpatialSettingsMonitoringPKey(&xmmword_1801CF928);
  }
  do
  {
    if ( a2->pid == *((_DWORD *)v15 + 4) )
    {
      v16 = *(_QWORD *)&a2->fmtid.Data1 - *(_QWORD *)v15;
      if ( *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)v15 )
        v16 = *(_QWORD *)a2->fmtid.Data4 - *((_QWORD *)v15 + 1);
      if ( !v16 )
        EffectPack::MarkSystemEffectsForResolution(*((_QWORD **)this + 44), *((_DWORD *)v15 + 5));
    }
    ++v7;
    v15 = (__int128 *)((char *)v15 + 24);
  }
  while ( v7 < 4 );
}
