/*
 * XREFs of ?DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x18005690C
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000D804 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180056200 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180114898 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1801210C0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x180014008 (-IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180015DAC (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180055B50 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x180056B38 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x180056C24 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ??0?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioMediaType@@@Z @ 0x180065184 (--0-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioMediaType@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall EffectPack::DeriveMixFormatFromDevicePipeFormat(
        EffectPack *this,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5,
        struct IAudioMediaType **a6)
{
  struct IAudioMediaType *v10; // r14
  int ModeEffect; // eax
  unsigned int v12; // ebx
  struct IAudioProcessingObject *v13; // rbx
  HRESULT (__stdcall *IsInputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rsi
  __int64 *v15; // rcx
  struct IAudioMediaType *v16; // rbx
  int v17; // eax
  unsigned int v18; // edi
  __int64 v20; // rdx
  __int64 *v21; // rcx
  HRESULT (__stdcall *IsOutputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rsi
  __int64 v23; // rcx
  int v24; // eax
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  HRESULT (__stdcall *v30)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  __int64 v31; // [rsp+48h] [rbp-19h] BYREF
  __int64 v32; // [rsp+50h] [rbp-11h] BYREF
  struct IAudioMediaType *v33[2]; // [rsp+58h] [rbp-9h] BYREF
  struct _GUID v34; // [rsp+68h] [rbp+7h] BYREF
  int v35; // [rsp+78h] [rbp+17h] BYREF
  int v36; // [rsp+7Ch] [rbp+1Bh] BYREF
  struct IAudioProcessingObject *v37; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v38[2]; // [rsp+88h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+4Fh]

  v33[0] = 0LL;
  v10 = 0LL;
  v38[0] = 0LL;
  if ( !(unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(v33, a4);
    v16 = v33[0];
    goto LABEL_12;
  }
  v37 = 0LL;
  v34 = *a2;
  ModeEffect = EffectPack::GetModeEffect(this, &v34, 0, a3, 0LL, &v37, 0LL);
  v12 = ModeEffect;
  if ( ModeEffect < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DC3,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)ModeEffect);
    goto LABEL_19;
  }
  v13 = v37;
  if ( v37 )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 161) + 56LL))(*((_QWORD *)this + 161)) )
    {
      v31 = 0LL;
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>(
        &v34,
        a4);
      IsInputFormatSupported = v13->lpVtbl->IsInputFormatSupported;
      v31 = 0LL;
      if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))IsInputFormatSupported)(
             v13,
             a4,
             *(_QWORD *)&v34.Data1,
             &v31) < 0 )
      {
        v20 = 7628LL;
      }
      else
      {
        v35 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 24LL))(v31, &v35) < 0 )
        {
          v20 = 7631LL;
        }
        else
        {
          if ( !v35 )
          {
            wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(v33, v31);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v34);
            v15 = &v31;
LABEL_9:
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v15);
            goto LABEL_10;
          }
          v20 = 7632LL;
        }
      }
      v12 = -2004287480;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x88890008LL);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v34);
      v21 = &v31;
      goto LABEL_18;
    }
    v32 = 0LL;
    wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>(
      &v31,
      a4);
    IsOutputFormatSupported = v13->lpVtbl->IsOutputFormatSupported;
    v23 = v32;
    v32 = 0LL;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    v24 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, __int64, __int64 *))IsOutputFormatSupported)(
            v13,
            a4,
            v31,
            &v32);
    if ( v24 == -2005073917 )
    {
      if ( IsFixedFormatApo(v13) )
      {
        *(_QWORD *)&v34.Data1 = 0LL;
        lpVtbl = v13->lpVtbl;
        *(_QWORD *)&v34.Data1 = 0LL;
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IAudioMediaType *, struct _GUID *))lpVtbl->IsInputFormatSupported)(
               v13,
               0LL,
               a4,
               &v34) < 0 )
        {
          v26 = 7654LL;
LABEL_31:
          v12 = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v26,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x88890008LL);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v34);
LABEL_34:
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v31);
          v21 = &v32;
LABEL_18:
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v21);
LABEL_19:
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v37);
          goto LABEL_15;
        }
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v31, *(_QWORD *)&v34.Data1);
        v28 = v32;
        v29 = 0LL;
        v32 = 0LL;
        if ( v28 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
          v29 = v32;
        }
        v30 = v13->lpVtbl->IsOutputFormatSupported;
        v32 = 0LL;
        if ( v29 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, __int64, __int64 *))v30)(
               v13,
               *(_QWORD *)&v34.Data1,
               v31,
               &v32) < 0 )
        {
          v26 = 7659LL;
          goto LABEL_31;
        }
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(v38, *(_QWORD *)&v34.Data1);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v34);
        v10 = (struct IAudioMediaType *)v38[0];
        goto LABEL_42;
      }
    }
    else if ( v24 >= 0 )
    {
LABEL_42:
      v36 = 0;
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v32 + 24LL))(v32, &v36) >= 0 )
      {
        if ( !v36 )
        {
          wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(v33, v32);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v31);
          v15 = &v32;
          goto LABEL_9;
        }
        v27 = 7669LL;
      }
      else
      {
        v27 = 7668LL;
      }
      goto LABEL_33;
    }
    v27 = 7664LL;
LABEL_33:
    v12 = -2004287480;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x88890008LL);
    goto LABEL_34;
  }
  wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(v33, a4);
LABEL_10:
  v16 = v33[0];
  v17 = ValidateAPOInputFormat(v33[0]);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DFF,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v17);
    v12 = v18;
    goto LABEL_19;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v37);
LABEL_12:
  v33[0] = 0LL;
  *a5 = v16;
  if ( a6 )
  {
    v38[0] = 0LL;
    *a6 = v10;
  }
  v12 = 0;
LABEL_15:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v38);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v33);
  return v12;
}
