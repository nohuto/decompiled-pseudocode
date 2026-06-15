/*
 * XREFs of ?CheckForPreferredStreamFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1801456D8
 * Callers:
 *     ?DeriveOverridingMixFormatInternal@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x180146E70 (-DeriveOverridingMixFormatInternal@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800480F4 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180149014 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180149B64 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::CheckForPreferredStreamFormat(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5)
{
  struct IAudioMediaType **v9; // rsi
  int Lfx; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, struct IAudioMediaType *, struct IAudioMediaType ***); // rdi
  int v15; // eax
  struct IAudioMediaType **v16; // rax
  struct IAudioSystemEffects2 **v18; // [rsp+20h] [rbp-40h]
  struct IAudioProcessingObject *v19[2]; // [rsp+40h] [rbp-20h] BYREF
  struct _GUID v20; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v9 = a5;
  *a5 = 0LL;
  v19[0] = 0LL;
  if ( !(unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    v19[0] = 0LL;
    Lfx = CEndpointCharacteristics::GetLfx(this, a3, 0LL, v19, v18);
    v11 = Lfx;
    if ( Lfx < 0 )
    {
      v12 = 7326LL;
      goto LABEL_6;
    }
LABEL_7:
    if ( v19[0] )
    {
      *(_QWORD *)&v20.Data1 = 0LL;
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct _GUID *))v19[0]->lpVtbl->QueryInterface)(
             v19[0],
             &GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7,
             &v20) >= 0 )
      {
        a5 = 0LL;
        v13 = *(_QWORD *)&v20.Data1;
        v14 = *(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType ***))(**(_QWORD **)&v20.Data1 + 24LL);
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&a5);
        v15 = v14(v13, a4, &a5);
        v11 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1CA7,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v15);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&a5);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
          goto LABEL_14;
        }
        v16 = a5;
        a5 = 0LL;
        *v9 = (struct IAudioMediaType *)v16;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&a5);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
    }
    v11 = 0;
    goto LABEL_14;
  }
  v19[0] = 0LL;
  v20 = *a2;
  Lfx = CEndpointCharacteristics::GetStreamEffect(this, &v20, 0, a3, 0LL, v19, 0LL);
  v11 = Lfx;
  if ( Lfx >= 0 )
    goto LABEL_7;
  v12 = 7322LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)Lfx);
LABEL_14:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v19);
  return v11;
}
