/*
 * XREFs of ?DeriveStreamFormatFromMixFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18014BAB8
 * Callers:
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1801210C0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180015DAC (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180055DB8 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x180056B38 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x180056C24 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ??0?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioMediaType@@@Z @ 0x180065184 (--0-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioMediaType@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18014CC5C (-GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall EffectPack::DeriveStreamFormatFromMixFormat(
        EffectPack *this,
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
  __int64 v16; // rdx
  HRESULT (__stdcall *IsOutputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  struct IAudioMediaType *v18; // rbx
  int v19; // eax
  unsigned int v20; // edi
  struct IAudioSystemEffects2 **v22; // [rsp+20h] [rbp-50h]
  int v23; // [rsp+40h] [rbp-30h] BYREF
  int v24; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v25; // [rsp+48h] [rbp-28h] BYREF
  struct _GUID v26; // [rsp+50h] [rbp-20h] BYREF
  struct IAudioProcessingObject *v27; // [rsp+60h] [rbp-10h] BYREF
  struct IAudioMediaType *v28; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v28 = 0LL;
  v27 = 0LL;
  if ( !(unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    v27 = 0LL;
    Lfx = EffectPack::GetLfx(this, a3, 0LL, &v27, v22);
    v10 = Lfx;
    if ( Lfx < 0 )
    {
      v11 = 7709LL;
      goto LABEL_6;
    }
LABEL_7:
    v12 = v27;
    if ( v27 )
    {
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>(
        &v26,
        (__int64)a4);
      v25 = 0LL;
      v13 = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 161) + 56LL))(*((_QWORD *)this + 161)) == 0;
      lpVtbl = v12->lpVtbl;
      if ( v13 )
      {
        IsInputFormatSupported = lpVtbl->IsInputFormatSupported;
        v25 = 0LL;
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))IsInputFormatSupported)(
               v12,
               a4,
               *(_QWORD *)&v26.Data1,
               &v25) < 0 )
        {
          v16 = 7720LL;
LABEL_11:
          v10 = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v16,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x88890008LL);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v25);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
          goto LABEL_27;
        }
        v23 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 24LL))(v25, &v23) < 0 )
        {
          v16 = 7723LL;
          goto LABEL_11;
        }
        if ( v23 )
        {
          v16 = 7724LL;
          goto LABEL_11;
        }
      }
      else
      {
        IsOutputFormatSupported = lpVtbl->IsOutputFormatSupported;
        v25 = 0LL;
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))IsOutputFormatSupported)(
               v12,
               a4,
               *(_QWORD *)&v26.Data1,
               &v25) < 0 )
        {
          v16 = 7729LL;
          goto LABEL_11;
        }
        v24 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 24LL))(v25, &v24) < 0 )
        {
          v16 = 7733LL;
          goto LABEL_11;
        }
        if ( v24 )
        {
          v16 = 7734LL;
          goto LABEL_11;
        }
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v28, v25);
      v18 = v28;
      v19 = ValidateAPOInputFormat(v28);
      v20 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E3B,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v19);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v25);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
        v10 = v20;
        goto LABEL_27;
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v25);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
    }
    else
    {
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v28, (__int64)a4);
      v18 = v28;
    }
    v28 = 0LL;
    *a5 = v18;
    v10 = 0;
    goto LABEL_27;
  }
  v27 = 0LL;
  v26 = *a2;
  Lfx = EffectPack::GetStreamEffect(this, &v26, 0, a3, 0LL, &v27, 0LL);
  v10 = Lfx;
  if ( Lfx >= 0 )
    goto LABEL_7;
  v11 = 7705LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)Lfx);
LABEL_27:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v27);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v28);
  return v10;
}
