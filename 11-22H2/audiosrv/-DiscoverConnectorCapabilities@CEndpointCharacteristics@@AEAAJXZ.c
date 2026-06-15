/*
 * XREFs of ?DiscoverConnectorCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x18002BA6C
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18002A104 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointReso.c)
 * Callees:
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x18002B3F4 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18002B64C (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18002C970 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x1800461C4 (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080F10 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::DiscoverConnectorCapabilities(CEndpointCharacteristics *this)
{
  int v2; // esi
  int v3; // eax
  int ConnectorSignalProcessingModes; // edi
  void *v5; // rcx
  int HostConnectorSignalProcessingModes; // edi
  CAudioSignalProcessingModeArray *v7; // rax
  int v8; // eax
  void *v9; // rcx
  unsigned int *v10; // rax
  void *v11; // rcx
  CAudioSignalProcessingModeArray *v12; // rax
  void *v13; // rcx
  CAudioSignalProcessingModeArray *v15; // rax
  __int64 v16; // rdx
  CAudioSignalProcessingModeArray *v17; // rax
  CAudioSignalProcessingModeArray *v18; // rax
  unsigned __int64 v19; // r9
  int v20; // [rsp+28h] [rbp-49h]
  unsigned int v21; // [rsp+38h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-31h] BYREF
  LPVOID *p_pv; // [rsp+48h] [rbp-29h]
  struct _GUID *v24; // [rsp+50h] [rbp-21h] BYREF
  char v25; // [rsp+58h] [rbp-19h]
  PROPVARIANT pvar[3]; // [rsp+60h] [rbp-11h] BYREF
  struct _tagpropertykey v27; // [rsp+78h] [rbp+7h] BYREF
  __int128 v28; // [rsp+90h] [rbp+1Fh] BYREF
  int v29; // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  if ( *((_QWORD *)this + 14) <= 2uLL )
  {
LABEL_58:
    _o_terminate(this);
    __debugbreak();
    JUMPOUT(0x180094EE4LL);
  }
  *(_DWORD *)(*((_QWORD *)this + 15) + 8LL) = 0;
  v2 = -2147023728;
  v21 = 0;
  pv = 0LL;
  memset(pvar, 0, sizeof(pvar));
  v28 = PKEY_ConnectorSpecific_SupportedProcessingModes;
  v29 = 2;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         &v28,
         pvar);
  ConnectorSignalProcessingModes = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x804,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v3,
      v20);
    PropVariantClear(pvar);
    goto LABEL_56;
  }
  if ( LOWORD(pvar[0]) == 65 )
  {
    v21 = LODWORD(pvar[1]) >> 4;
    pv = pvar[2];
    *(_OWORD *)&pvar[1] = 0LL;
    v2 = 0;
  }
  PropVariantClear(pvar);
  if ( v2 < 0 )
  {
    p_pv = &pv;
    v24 = 0LL;
    v25 = 1;
    HostConnectorSignalProcessingModes = GetHostConnectorSignalProcessingModes(
                                           *((struct IPropertyStore **)this + 9),
                                           &v21,
                                           &v24);
    if ( v25 )
    {
      v5 = *p_pv;
      *p_pv = v24;
      if ( v5 )
        CoTaskMemFree(v5);
    }
    if ( HostConnectorSignalProcessingModes < 0 )
      goto LABEL_38;
  }
  if ( v21 )
  {
    if ( !*((_QWORD *)this + 14) )
      goto LABEL_57;
    **((_DWORD **)this + 15) = 1;
    v7 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                              (char *)this + 192,
                                              0LL);
    v8 = CAudioSignalProcessingModeArray::AddMultiple(v7, v21, (const struct _GUID *)pv);
    ConnectorSignalProcessingModes = v8;
    if ( v8 < 0 )
    {
      v16 = 2073LL;
      goto LABEL_53;
    }
  }
  else
  {
LABEL_38:
    if ( !*((_QWORD *)this + 14) )
      goto LABEL_57;
    **((_DWORD **)this + 15) = 0;
    v15 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                               (char *)this + 192,
                                               0LL);
    v8 = CAudioSignalProcessingModeArray::AddMultiple(v15, 1u, &GUID_00000000_0000_0000_0000_000000000000);
    ConnectorSignalProcessingModes = v8;
    if ( v8 < 0 )
    {
      v16 = 2078LL;
      goto LABEL_53;
    }
  }
  v9 = pv;
  pv = 0LL;
  if ( v9 )
    CoTaskMemFree(v9);
  v21 = 0;
  v27.fmtid.Data1 = 590439624;
  *(_DWORD *)&v27.fmtid.Data2 = 1283267372;
  *(_DWORD *)v27.fmtid.Data4 = 1907779772;
  *(_DWORD *)&v27.fmtid.Data4[4] = 1730509416;
  v27.pid = 1;
  p_pv = &pv;
  v24 = 0LL;
  v25 = 1;
  ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(
                                     *((struct IPropertyStore **)this + 9),
                                     &v27,
                                     &PKEY_Endpoint_KeywordDetector_ConnectorId,
                                     &v21,
                                     &v24);
  if ( v25 )
  {
    v5 = *p_pv;
    *p_pv = v24;
    if ( v5 )
      CoTaskMemFree(v5);
  }
  if ( ConnectorSignalProcessingModes >= 0 )
  {
    if ( !v21 )
      goto LABEL_56;
    v17 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                               (char *)this + 192,
                                               3LL);
    v8 = CAudioSignalProcessingModeArray::AddMultiple(v17, v21, (const struct _GUID *)pv);
    ConnectorSignalProcessingModes = v8;
    if ( v8 < 0 )
    {
      v16 = 2091LL;
      goto LABEL_53;
    }
    if ( *((_QWORD *)this + 14) <= 3uLL )
      goto LABEL_57;
    *(_DWORD *)(*((_QWORD *)this + 15) + 12LL) = 1;
  }
  else
  {
    if ( ConnectorSignalProcessingModes != -2147023728 )
    {
      v19 = (unsigned int)ConnectorSignalProcessingModes;
      v16 = 2100LL;
      goto LABEL_55;
    }
    if ( *((_QWORD *)this + 14) <= 3uLL )
      goto LABEL_57;
    *(_DWORD *)(*((_QWORD *)this + 15) + 12LL) = 0;
  }
  v5 = pv;
  pv = 0LL;
  if ( v5 )
    CoTaskMemFree(v5);
  v21 = 0;
  if ( !*((_QWORD *)this + 14)
    || (v10 = (unsigned int *)*((_QWORD *)this + 15), v5 = (void *)*v10, *((_QWORD *)this + 14) <= 1uLL)
    || (v10[1] = (unsigned int)v5, *((_QWORD *)this + 14) <= 1uLL) )
  {
LABEL_57:
    _o_terminate(v5);
    goto LABEL_58;
  }
  if ( !*(_DWORD *)(*((_QWORD *)this + 15) + 4LL) )
    goto LABEL_33;
  p_pv = &pv;
  v24 = 0LL;
  v25 = 1;
  ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(
                                     *((struct IPropertyStore **)this + 9),
                                     &v27,
                                     &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
                                     &v21,
                                     &v24);
  if ( v25 )
  {
    v11 = *p_pv;
    *p_pv = v24;
    if ( v11 )
      CoTaskMemFree(v11);
  }
  if ( ConnectorSignalProcessingModes >= 0 )
  {
    if ( v21 )
    {
      v18 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                                 (char *)this + 192,
                                                 1LL);
      v8 = CAudioSignalProcessingModeArray::AddMultiple(v18, v21, (const struct _GUID *)pv);
      ConnectorSignalProcessingModes = v8;
      if ( v8 >= 0 )
        goto LABEL_33;
      v16 = 2114LL;
LABEL_53:
      v19 = (unsigned int)v8;
      goto LABEL_55;
    }
LABEL_56:
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    return (unsigned int)ConnectorSignalProcessingModes;
  }
  if ( ConnectorSignalProcessingModes != -2147023728 )
  {
    v19 = (unsigned int)ConnectorSignalProcessingModes;
    v16 = 2118LL;
LABEL_55:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v19,
      v20);
    goto LABEL_56;
  }
LABEL_33:
  if ( !v21 )
  {
    v12 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                               (char *)this + 192,
                                               1LL);
    v8 = CAudioSignalProcessingModeArray::AddMultiple(v12, 1u, &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    ConnectorSignalProcessingModes = v8;
    if ( v8 < 0 )
    {
      v16 = 2125LL;
      goto LABEL_53;
    }
  }
  v13 = pv;
  pv = 0LL;
  if ( v13 )
    CoTaskMemFree(v13);
  return 0LL;
}
