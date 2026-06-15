/*
 * XREFs of ?GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18014C49C
 * Callers:
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@CPolicyConfig@@UEAAJPEBGPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x180115B00 (-GetCustomDeviceFormatsSupportedOnEndpoint@CPolicyConfig@@UEAAJPEBGPEAIPEAPEAPEAUtWAVEFORMATEX@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000A6E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180015DAC (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     MIDL_user_allocate @ 0x18003EE80 (MIDL_user_allocate.c)
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180048168 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180055B50 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     memcpy_0 @ 0x18006A809 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_2f753bdbd1d6db63f3379684fbbc2729___::_lambda_call__lambda_2f753bdbd1d6db63f3379684fbbc2729___ @ 0x18014A5B0 (wil--details--lambda_call__lambda_2f753bdbd1d6db63f3379684fbbc2729___--_lambda_call__lambda_2f75.c)
 *     ?GetGfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18014CAF4 (-GetGfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall EffectPack::GetCustomDeviceFormatsSupportedOnEndpoint(
        EffectPack *this,
        unsigned int *a2,
        struct tWAVEFORMATEX ***a3,
        unsigned __int16 ***a4)
{
  int Gfx; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int EndpointEffect; // eax
  unsigned int v12; // edi
  struct IAudioProcessingObject *v13; // rcx
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // rdx
  struct tWAVEFORMATEX **v17; // rax
  unsigned __int16 **v18; // rax
  unsigned int v19; // ebx
  unsigned int v20; // eax
  __int64 v21; // rax
  size_t v22; // rdi
  char *v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  unsigned __int16 *v26; // rdi
  struct tWAVEFORMATEX *v27; // rcx
  struct IAudioProcessingObject **v29; // [rsp+20h] [rbp-59h]
  __int64 v30[2]; // [rsp+40h] [rbp-39h] BYREF
  struct _GUID v31; // [rsp+50h] [rbp-29h] BYREF
  struct tWAVEFORMATEX **v32; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int16 **v33; // [rsp+68h] [rbp-11h] BYREF
  struct _GUID v34; // [rsp+70h] [rbp-9h] BYREF
  char v35; // [rsp+80h] [rbp+7h]
  struct _GUID v36; // [rsp+88h] [rbp+Fh] BYREF
  char v37; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  unsigned int v39; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 *v40; // [rsp+F0h] [rbp+77h] BYREF
  struct IAudioProcessingObject *v41; // [rsp+F8h] [rbp+7Fh] BYREF

  v41 = 0LL;
  *a4 = 0LL;
  *a3 = 0LL;
  *a2 = 0;
  if ( !(unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(this, eHostProcessConnector) )
  {
    v41 = 0LL;
    Gfx = EffectPack::GetGfx(this, eHostProcessConnector, 0LL, &v41, (struct IAudioSystemEffects2 **)v29);
    v9 = Gfx;
    if ( Gfx < 0 )
    {
      v10 = 9118LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)Gfx);
      goto LABEL_37;
    }
    goto LABEL_12;
  }
  v41 = 0LL;
  EndpointEffect = EffectPack::GetEndpointEffect(this, 0, eHostProcessConnector, 0LL, &v41, 0LL);
  v12 = EndpointEffect;
  if ( EndpointEffect < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23A4,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)EndpointEffect);
LABEL_6:
    v9 = v12;
    goto LABEL_37;
  }
  v13 = v41;
  if ( !v41 )
  {
    if ( !(unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(this, eHostProcessConnector) )
      goto LABEL_36;
    v41 = 0LL;
    v31 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    Gfx = EffectPack::GetModeEffect(this, &v31, 0, eHostProcessConnector, 0LL, &v41, 0LL);
    v9 = Gfx;
    if ( Gfx < 0 )
    {
      v10 = 9130LL;
      goto LABEL_11;
    }
LABEL_12:
    v13 = v41;
    if ( v41 )
      goto LABEL_13;
LABEL_36:
    v9 = 0;
    goto LABEL_37;
  }
LABEL_13:
  v39 = 0;
  v40 = 0LL;
  ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 **))v13->lpVtbl->QueryInterface)(
    v13,
    &GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097,
    &v40);
  if ( !v40 )
  {
LABEL_35:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v40);
    goto LABEL_36;
  }
  v14 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v40 + 24))(v40, &v39);
  v9 = v14;
  if ( v14 < 0 )
  {
    v15 = (unsigned int)v14;
    v16 = 9151LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v15);
    goto LABEL_17;
  }
  v17 = (struct tWAVEFORMATEX **)MIDL_user_allocate(8LL * v39);
  v32 = v17;
  if ( !v17 )
  {
    v9 = -2147024882;
    v15 = 2147942414LL;
    v16 = 9154LL;
    goto LABEL_16;
  }
  memset_0(v17, 0, 8LL * v39);
  *(_QWORD *)&v31.Data1 = &v39;
  *(_QWORD *)v31.Data4 = &v32;
  v34 = v31;
  v35 = 1;
  v18 = (unsigned __int16 **)MIDL_user_allocate(8LL * v39);
  v33 = v18;
  if ( !v18 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23CD,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_22;
  }
  memset_0(v18, 0, 8LL * v39);
  *(_QWORD *)&v31.Data1 = &v39;
  *(_QWORD *)v31.Data4 = &v33;
  v36 = v31;
  v37 = 1;
  v19 = 0;
  v20 = v39;
  if ( !v39 )
  {
LABEL_34:
    *a2 = v20;
    *a3 = v32;
    *a4 = v33;
    goto LABEL_35;
  }
  while ( 1 )
  {
    *(_QWORD *)&v31.Data1 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, struct _GUID *))(*v40 + 40))(v40, v19, &v31) < 0 )
      goto LABEL_33;
    v21 = -1LL;
    do
      ++v21;
    while ( *(_WORD *)(*(_QWORD *)&v31.Data1 + 2 * v21) );
    v22 = 2 * v21 + 2;
    v33[v19] = (unsigned __int16 *)MIDL_user_allocate(v22);
    v23 = (char *)v33[v19];
    if ( !v23 )
      break;
    v24 = StringCbCopyW(v23, v22, *(char **)&v31.Data1);
    v12 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23E2,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v24);
      wil::details::lambda_call__lambda_2f753bdbd1d6db63f3379684fbbc2729___::_lambda_call__lambda_2f753bdbd1d6db63f3379684fbbc2729___((__int64)&v36);
      wil::details::lambda_call__lambda_2f753bdbd1d6db63f3379684fbbc2729___::_lambda_call__lambda_2f753bdbd1d6db63f3379684fbbc2729___((__int64)&v34);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v40);
      goto LABEL_6;
    }
    v30[0] = 0LL;
    v25 = *v40;
    v30[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 *))(v25 + 32))(v40, v19, v30) >= 0 )
    {
      v26 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30[0] + 40LL))(v30[0]);
      v32[v19] = (struct tWAVEFORMATEX *)MIDL_user_allocate(v26[8] + 18LL);
      v27 = v32[v19];
      if ( !v27 )
      {
        v9 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x23ED,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x8007000ELL);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v30);
        goto LABEL_41;
      }
      memcpy_0(v27, v26, v26[8] + 18LL);
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v30);
LABEL_33:
    ++v19;
    v20 = v39;
    if ( v19 >= v39 )
      goto LABEL_34;
  }
  v9 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x23E0,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x8007000ELL);
LABEL_41:
  wil::details::lambda_call__lambda_2f753bdbd1d6db63f3379684fbbc2729___::_lambda_call__lambda_2f753bdbd1d6db63f3379684fbbc2729___((__int64)&v36);
LABEL_22:
  wil::details::lambda_call__lambda_2f753bdbd1d6db63f3379684fbbc2729___::_lambda_call__lambda_2f753bdbd1d6db63f3379684fbbc2729___((__int64)&v34);
LABEL_17:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v40);
LABEL_37:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v41);
  return v9;
}
