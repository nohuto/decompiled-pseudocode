/*
 * XREFs of ?GetCustomDeviceFormatsSupportedOnEndpoint@CEndpointCharacteristics@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18014872C
 * Callers:
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@CPolicyConfig@@UEAAJPEBGPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x1800E9830 (-GetCustomDeviceFormatsSupportedOnEndpoint@CPolicyConfig@@UEAAJPEBGPEAIPEAPEAPEAUtWAVEFORMATEX@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     MIDL_user_allocate @ 0x18001AC90 (MIDL_user_allocate.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800480F4 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180056D74 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$com_query_to_nothrow@UIAudioSystemEffectsCustomFormats@@AEAV?$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode_policy@wil@@@wil@@@wil@@YAJAEAV?$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode_policy@wil@@@0@PEAPEAUIAudioSystemEffectsCustomFormats@@@Z @ 0x180143F80 (--$com_query_to_nothrow@UIAudioSystemEffectsCustomFormats@@AEAV-$com_ptr_t@UIAudioProcessingObje.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180148D80 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180148F40 (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1801490E0 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CEndpointCharacteristics::GetCustomDeviceFormatsSupportedOnEndpoint(
        CEndpointCharacteristics *this,
        unsigned int *a2,
        struct tWAVEFORMATEX ***a3,
        unsigned __int16 ***a4)
{
  unsigned int v5; // esi
  int Gfx; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  void *v12; // rax
  char v13; // r12
  void *v14; // rax
  char v15; // r15
  unsigned int v16; // r14d
  __int64 v17; // rax
  size_t v18; // rbx
  char *v19; // rcx
  int v20; // eax
  __int64 v21; // rbx
  int (__fastcall *v22)(__int64, _QWORD, __int64 *); // rdi
  unsigned __int16 *v23; // rbx
  void *v24; // rcx
  unsigned int i; // edi
  __int64 v27; // r9
  __int64 v28; // rdx
  struct IAudioProcessingObject **v29; // [rsp+28h] [rbp-69h]
  unsigned int v30; // [rsp+48h] [rbp-49h] BYREF
  struct IAudioProcessingObject *v31; // [rsp+50h] [rbp-41h] BYREF
  void *v32; // [rsp+58h] [rbp-39h] BYREF
  void *v33; // [rsp+60h] [rbp-31h] BYREF
  __int64 v34; // [rsp+68h] [rbp-29h] BYREF
  __int64 v35; // [rsp+70h] [rbp-21h] BYREF
  struct _GUID v36; // [rsp+78h] [rbp-19h] BYREF
  struct _GUID v37; // [rsp+88h] [rbp-9h]
  char v38; // [rsp+98h] [rbp+7h]
  struct _GUID v39; // [rsp+A0h] [rbp+Fh]
  char v40; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v5 = 0;
  v31 = 0LL;
  *a4 = 0LL;
  *a3 = 0LL;
  *a2 = 0;
  if ( !(unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, eHostProcessConnector) )
  {
    v31 = 0LL;
    Gfx = CEndpointCharacteristics::GetGfx(this, eHostProcessConnector, 0LL, &v31, (struct IAudioSystemEffects2 **)v29);
    v7 = Gfx;
    if ( Gfx < 0 )
    {
      v8 = 8638LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)Gfx);
      goto LABEL_43;
    }
LABEL_11:
    if ( !v31 )
      goto LABEL_12;
    goto LABEL_13;
  }
  v31 = 0LL;
  Gfx = CEndpointCharacteristics::GetEndpointEffect(this, 0, eHostProcessConnector, 0LL, &v31, 0LL);
  v7 = Gfx;
  if ( Gfx < 0 )
  {
    v8 = 8644LL;
    goto LABEL_10;
  }
  if ( !v31 )
  {
    if ( !(unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, eHostProcessConnector) )
    {
LABEL_12:
      v7 = 0;
      goto LABEL_43;
    }
    v31 = 0LL;
    v36 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    Gfx = CEndpointCharacteristics::GetModeEffect(this, &v36, 0, eHostProcessConnector, 0LL, &v31, 0LL);
    v7 = Gfx;
    if ( Gfx < 0 )
    {
      v8 = 8650LL;
      goto LABEL_10;
    }
    goto LABEL_11;
  }
LABEL_13:
  v30 = 0;
  v35 = 0LL;
  wil::com_query_to_nothrow<IAudioSystemEffectsCustomFormats,wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy> &>(
    &v31,
    (__int64)&v35);
  if ( !v35 )
  {
    v7 = 0;
    goto LABEL_42;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v35 + 24LL))(v35, &v30);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = (unsigned int)v9;
    v11 = 8671LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v10);
    goto LABEL_42;
  }
  v12 = MIDL_user_allocate(8LL * v30);
  v33 = v12;
  if ( !v12 )
  {
    v7 = -2147024882;
    v10 = 2147942414LL;
    v11 = 8674LL;
    goto LABEL_19;
  }
  memset_0(v12, 0, 8LL * v30);
  *(_QWORD *)&v36.Data1 = &v30;
  *(_QWORD *)v36.Data4 = &v33;
  v37 = v36;
  v13 = 1;
  v38 = 1;
  v14 = MIDL_user_allocate(8LL * v30);
  v32 = v14;
  if ( !v14 )
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21ED,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_38;
  }
  memset_0(v14, 0, 8LL * v30);
  *(_QWORD *)&v36.Data1 = &v30;
  *(_QWORD *)v36.Data4 = &v32;
  v39 = v36;
  v15 = 1;
  v40 = 1;
  v16 = 0;
  if ( !v30 )
  {
LABEL_33:
    v13 = 0;
    v15 = 0;
    *a2 = v30;
    *a3 = (struct tWAVEFORMATEX **)v33;
    *a4 = (unsigned __int16 **)v32;
    v7 = 0;
    goto LABEL_34;
  }
  while ( 1 )
  {
    *(_QWORD *)&v36.Data1 = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, struct _GUID *))(*(_QWORD *)v35 + 40LL))(v35, v16, &v36) < 0 )
      goto LABEL_32;
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(*(_QWORD *)&v36.Data1 + 2 * v17) );
    v18 = 2 * v17 + 2;
    *((_QWORD *)v32 + v16) = MIDL_user_allocate(v18);
    v19 = (char *)*((_QWORD *)v32 + v16);
    if ( !v19 )
      break;
    v20 = StringCbCopyW(v19, v18, *(char **)&v36.Data1);
    v7 = v20;
    if ( v20 < 0 )
    {
      v27 = (unsigned int)v20;
      v28 = 8706LL;
      goto LABEL_47;
    }
    v34 = 0LL;
    v21 = v35;
    v22 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v35 + 32LL);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v34);
    if ( v22(v21, v16, &v34) >= 0 )
    {
      v23 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 40LL))(v34);
      *((_QWORD *)v33 + v16) = MIDL_user_allocate(v23[8] + 18LL);
      v24 = (void *)*((_QWORD *)v33 + v16);
      if ( !v24 )
      {
        v7 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x220D,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x8007000ELL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
        goto LABEL_34;
      }
      memcpy_0(v24, v23, v23[8] + 18LL);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
LABEL_32:
    if ( ++v16 >= v30 )
      goto LABEL_33;
  }
  v7 = -2147024882;
  v27 = 2147942414LL;
  v28 = 8704LL;
LABEL_47:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v28,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v27);
LABEL_34:
  if ( v15 )
  {
    for ( i = 0; i < v30; ++i )
      operator delete(*((void **)v32 + i));
    operator delete(v32);
  }
LABEL_38:
  if ( v13 )
  {
    if ( v30 )
    {
      do
        operator delete(*((void **)v33 + v5++));
      while ( v5 < v30 );
    }
    operator delete(v33);
  }
LABEL_42:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v35);
LABEL_43:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
  return v7;
}
