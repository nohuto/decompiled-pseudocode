/*
 * XREFs of ?DeriveStreamFormatFromMixFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180146F24
 * Callers:
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800F1900 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800480F4 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??0?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioMediaType@@@Z @ 0x180143FD8 (--0-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioMediaType@@@Z.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x180144528 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180149014 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180149B64 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x18014DAE8 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::DeriveStreamFormatFromMixFormat(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5)
{
  int Lfx; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  struct IAudioProcessingObject *v12; // rbx
  bool v13; // zf
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  HRESULT (__stdcall *IsInputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  __int64 v16; // r9
  __int64 v17; // rdx
  HRESULT (__stdcall *IsOutputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  struct IAudioMediaType *v19; // rdi
  int v20; // eax
  struct IAudioSystemEffects2 **v22; // [rsp+20h] [rbp-50h]
  int v23; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h] BYREF
  struct IAudioProcessingObject *v25; // [rsp+50h] [rbp-20h] BYREF
  struct IAudioMediaType *v26; // [rsp+58h] [rbp-18h] BYREF
  struct _GUID v27; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v26 = 0LL;
  v25 = 0LL;
  if ( !(unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    v25 = 0LL;
    Lfx = CEndpointCharacteristics::GetLfx(this, a3, 0LL, &v25, v22);
    v10 = Lfx;
    if ( Lfx < 0 )
    {
      v11 = 7271LL;
      goto LABEL_6;
    }
LABEL_7:
    v12 = v25;
    if ( v25 )
    {
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>(
        &v27,
        (__int64)a4);
      v24 = 0LL;
      v13 = (*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this + 56LL))(this) == 0;
      lpVtbl = v12->lpVtbl;
      if ( v13 )
      {
        IsInputFormatSupported = lpVtbl->IsInputFormatSupported;
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v24);
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))IsInputFormatSupported)(
               v12,
               a4,
               *(_QWORD *)&v27.Data1,
               &v24) < 0 )
        {
          v10 = -2004287480;
          v16 = 2290679816LL;
          v17 = 7282LL;
LABEL_23:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v17,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)v16);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
          goto LABEL_27;
        }
        v23 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 24LL))(v24, &v23) < 0 )
        {
          v10 = -2004287480;
          v16 = 2290679816LL;
          v17 = 7285LL;
          goto LABEL_23;
        }
        if ( v23 )
        {
          v10 = -2004287480;
          v16 = 2290679816LL;
          v17 = 7286LL;
          goto LABEL_23;
        }
      }
      else
      {
        IsOutputFormatSupported = lpVtbl->IsOutputFormatSupported;
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v24);
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))IsOutputFormatSupported)(
               v12,
               a4,
               *(_QWORD *)&v27.Data1,
               &v24) < 0 )
        {
          v10 = -2004287480;
          v16 = 2290679816LL;
          v17 = 7291LL;
          goto LABEL_23;
        }
        v23 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 24LL))(v24, &v23) < 0 )
        {
          v10 = -2004287480;
          v16 = 2290679816LL;
          v17 = 7295LL;
          goto LABEL_23;
        }
        if ( v23 )
        {
          v10 = -2004287480;
          v16 = 2290679816LL;
          v17 = 7296LL;
          goto LABEL_23;
        }
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v26, v24);
      v19 = v26;
      v20 = ValidateAPOInputFormat(v26);
      v10 = v20;
      if ( v20 < 0 )
      {
        v16 = (unsigned int)v20;
        v17 = 7301LL;
        goto LABEL_23;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
    }
    else
    {
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v26, (__int64)a4);
      v19 = v26;
    }
    v26 = 0LL;
    *a5 = v19;
    v10 = 0;
    goto LABEL_27;
  }
  v25 = 0LL;
  v27 = *a2;
  Lfx = CEndpointCharacteristics::GetStreamEffect(this, &v27, 0, a3, 0LL, &v25, 0LL);
  v10 = Lfx;
  if ( Lfx >= 0 )
    goto LABEL_7;
  v11 = 7267LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)Lfx);
LABEL_27:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
  return v10;
}
