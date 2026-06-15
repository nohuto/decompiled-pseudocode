/*
 * XREFs of ?GetConnectorProcessingModeDataFormatsFromDriver@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@U23@@wil@@@Z @ 0x18004C228
 * Callers:
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18004C16C (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002D3D4 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@U23@@wil@@QEAAXXZ @ 0x18004ACA4 (-reset@-$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall GetConnectorProcessingModeDataFormatsFromDriver(
        __int64 *a1,
        __int64 a2,
        __int128 *a3,
        int a4,
        __int64 a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rax
  int v25; // ebx
  void *v26; // rcx
  void *v27; // rcx
  void *v29; // rcx
  void *v30; // rcx
  unsigned __int64 v31; // rax
  void *v32; // rcx
  SIZE_T v33; // rax
  unsigned __int64 v34; // kr00_8
  _DWORD *v35; // rax
  __int64 v36; // rcx
  char *v37; // r14
  char *v38; // r12
  __int64 v39; // rbx
  unsigned int i; // esi
  char *v41; // rcx
  struct tWAVEFORMATEX **v42; // rdx
  int v43; // eax
  unsigned int v44; // r15d
  void *v45; // rcx
  void *v46; // rcx
  __int64 v47; // rax
  void *v48; // rcx
  void *v49; // rcx
  LPVOID pv; // [rsp+30h] [rbp-F8h] BYREF
  int v51[2]; // [rsp+38h] [rbp-F0h] BYREF
  __int64 *v52; // [rsp+40h] [rbp-E8h] BYREF
  __int64 *v53; // [rsp+48h] [rbp-E0h] BYREF
  __int64 *v54; // [rsp+50h] [rbp-D8h] BYREF
  PROPVARIANT v55[2]; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v56; // [rsp+68h] [rbp-C0h]
  void *p_pv; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v58; // [rsp+78h] [rbp-B0h] BYREF
  char v59; // [rsp+80h] [rbp-A8h]
  PROPVARIANT pvar[2]; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+98h] [rbp-90h]
  __int128 v62; // [rsp+A0h] [rbp-88h] BYREF
  _DWORD v63[6]; // [rsp+B0h] [rbp-78h] BYREF
  struct _tagpropertykey v64; // [rsp+C8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v63[0] = 590439624;
  v63[1] = 1283267372;
  v63[2] = 1907779772;
  v63[3] = 1730509416;
  v63[4] = 1;
  if ( a4 == 3 )
  {
    v64 = PKEY_Endpoint_KeywordDetector_ConnectorId;
  }
  else
  {
    *(_QWORD *)&v64.fmtid.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v64.fmtid.Data4 = 0xFC181731B718BA83uLL;
    v64.pid = 1;
  }
  *(_OWORD *)v55 = 0LL;
  v56 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(a2, v63, v55);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x391,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v8);
    PropVariantClear(v55);
    return v9;
  }
  if ( LOWORD(v55[0]) != 31 )
  {
    PropVariantClear(v55);
    return 2290679812LL;
  }
  *(_OWORD *)pvar = 0LL;
  v61 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(
          a2,
          &v64,
          pvar);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x395,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v10);
    PropVariantClear(pvar);
    PropVariantClear(v55);
    return v11;
  }
  v12 = *a1;
  v52 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, PROPVARIANT, __int64 **))(v12 + 40))(a1, v55[1], &v52);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x398,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v13);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v52);
    PropVariantClear(pvar);
    PropVariantClear(v55);
    return v14;
  }
  *(_QWORD *)v51 = 0LL;
  v15 = *v52;
  *(_QWORD *)v51 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64, _QWORD, int *))(v15 + 24))(
          v52,
          &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
          1LL,
          0LL,
          v51);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39B,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v16);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v51);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v52);
    PropVariantClear(pvar);
    PropVariantClear(v55);
    return v17;
  }
  v53 = 0LL;
  v18 = **(_QWORD **)v51;
  v53 = 0LL;
  v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(v18 + 56))(*(_QWORD *)v51, LODWORD(pvar[1]), &v53);
  v20 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39E,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v19);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v53);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v51);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v52);
    PropVariantClear(pvar);
    PropVariantClear(v55);
    return v20;
  }
  v54 = 0LL;
  v21 = *v53;
  v54 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 **))(v21 + 104))(
          v53,
          23LL,
          &GUID_915aed0f_c782_41d6_b0dc_1ed22d1ee5cb,
          &v54);
  v23 = v22;
  if ( v22 < 0 )
  {
    if ( v22 == -2147467262 )
    {
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v54);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v53);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v51);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v52);
      PropVariantClear(pvar);
      PropVariantClear(v55);
      return 2147500034LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A1,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v22);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v54);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v53);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v51);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v52);
      PropVariantClear(pvar);
      PropVariantClear(v55);
      return v23;
    }
  }
  pv = 0LL;
  v24 = *v54;
  p_pv = &pv;
  v58 = 0LL;
  v59 = 1;
  v62 = *a3;
  v25 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64 *))(v24 + 32))(v54, &v62, &v58);
  if ( v59 )
  {
    v26 = *(void **)p_pv;
    *(_QWORD *)p_pv = v58;
    if ( v26 )
      CoTaskMemFree(v26);
  }
  if ( v25 < 0 )
  {
    if ( v25 == -2147023728 || v25 == -2147024846 )
    {
      v27 = pv;
      pv = 0LL;
      if ( v27 )
        CoTaskMemFree(v27);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A4,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v25);
      v29 = pv;
      pv = 0LL;
      if ( v29 )
        CoTaskMemFree(v29);
    }
LABEL_55:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v54);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v53);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v51);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v52);
    PropVariantClear(pvar);
    PropVariantClear(v55);
    return (unsigned int)v25;
  }
  v30 = pv;
  v31 = *((unsigned int *)pv + 1);
  if ( !(_DWORD)v31 )
  {
    pv = 0LL;
    if ( v30 )
      CoTaskMemFree(v30);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v54);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v53);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v51);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v52);
    PropVariantClear(pvar);
    PropVariantClear(v55);
    return 2147943568LL;
  }
  v32 = (void *)*((unsigned int *)pv + 1);
  p_pv = 0LL;
  v34 = v31;
  v33 = 8 * v31;
  if ( !is_mul_ok(v34, 8uLL) )
  {
    v25 = -2147024362;
LABEL_53:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A9,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v25);
    v49 = pv;
    pv = 0LL;
    if ( v49 )
      CoTaskMemFree(v49);
    goto LABEL_55;
  }
  v25 = CTCoAllocPolicy::Alloc(v32, 1, v33, &p_pv);
  if ( v25 < 0 )
    goto LABEL_53;
  v35 = pv;
  v36 = *((unsigned int *)pv + 1);
  v37 = (char *)p_pv;
  *(_QWORD *)&v62 = p_pv;
  *((_QWORD *)&v62 + 1) = v36;
  v38 = (char *)pv + 8;
  v39 = 0LL;
  for ( i = 0; i < v35[1]; ++i )
  {
    v41 = &v38[*(unsigned int *)&v38[4 * i]];
    if ( *(_DWORD *)v41 >= 0x52u )
    {
      v42 = (struct tWAVEFORMATEX **)&v37[8 * v39++];
      v43 = CloneWaveFormat((const struct tWAVEFORMATEX *)(v41 + 64), v42);
      v44 = v43;
      if ( v43 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3B7,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v43);
        wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset((__int64)&v62);
        v45 = pv;
        pv = 0LL;
        if ( v45 )
          CoTaskMemFree(v45);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v54);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v53);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v51);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v52);
        PropVariantClear(pvar);
        PropVariantClear(v55);
        return v44;
      }
      v35 = pv;
    }
  }
  v62 = 0uLL;
  p_pv = v37;
  v58 = v39;
  if ( (void **)a5 != &p_pv )
  {
    wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(a5);
    v46 = *(void **)a5;
    v47 = *(_QWORD *)(a5 + 8);
    *(_QWORD *)a5 = v37;
    *(_QWORD *)(a5 + 8) = v39;
    p_pv = v46;
    v58 = v47;
  }
  wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset((__int64)&p_pv);
  wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset((__int64)&v62);
  v48 = pv;
  pv = 0LL;
  if ( v48 )
    CoTaskMemFree(v48);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v54);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v53);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v51);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v52);
  PropVariantClear(pvar);
  PropVariantClear(v55);
  return 0LL;
}
