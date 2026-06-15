/*
 * XREFs of ?CheckForPreferredStreamFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180055F4C
 * Callers:
 *     ?DeriveOverridingMixFormatInternal@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x180056168 (-DeriveOverridingMixFormatInternal@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180015DAC (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180055DB8 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18014CC5C (-GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall EffectPack::CheckForPreferredStreamFormat(
        EffectPack *this,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5)
{
  struct IAudioMediaType **v9; // rsi
  int Lfx; // eax
  unsigned int v11; // ebx
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  struct IAudioMediaType **v16; // rax
  struct IAudioSystemEffects2 **v17; // [rsp+20h] [rbp-40h]
  struct IAudioProcessingObject *v18[2]; // [rsp+40h] [rbp-20h] BYREF
  struct _GUID v19; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v9 = a5;
  *a5 = 0LL;
  v18[0] = 0LL;
  if ( !(unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    v18[0] = 0LL;
    Lfx = EffectPack::GetLfx(this, a3, 0LL, v18, v17);
    v11 = Lfx;
    if ( Lfx >= 0 )
      goto LABEL_3;
    v13 = 7764LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)Lfx);
    goto LABEL_7;
  }
  v18[0] = 0LL;
  v19 = *a2;
  Lfx = EffectPack::GetStreamEffect(this, &v19, 0, a3, 0LL, v18, 0LL);
  v11 = Lfx;
  if ( Lfx < 0 )
  {
    v13 = 7760LL;
    goto LABEL_11;
  }
LABEL_3:
  if ( v18[0] )
  {
    *(_QWORD *)&v19.Data1 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct _GUID *))v18[0]->lpVtbl->QueryInterface)(
           v18[0],
           &GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7,
           &v19) >= 0 )
    {
      a5 = 0LL;
      v14 = **(_QWORD **)&v19.Data1;
      a5 = 0LL;
      v15 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioMediaType *, struct IAudioMediaType ***))(v14 + 24))(
              *(_QWORD *)&v19.Data1,
              a4,
              &a5);
      v11 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E5D,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v15);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&a5);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
        goto LABEL_7;
      }
      v16 = a5;
      a5 = 0LL;
      *v9 = (struct IAudioMediaType *)v16;
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&a5);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
  }
  v11 = 0;
LABEL_7:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v18);
  return v11;
}
