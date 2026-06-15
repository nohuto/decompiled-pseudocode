/*
 * XREFs of ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x1800E9E00
 * Callers:
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x1800E9124 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     CreateAudioMediaType @ 0x180061614 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800E803C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x1800E884C (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1801490E0 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall IsOffloadConnectorFormatSupportedForMixFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4,
        const struct tWAVEFORMATEX *Src)
{
  HRESULT ModeEffect; // r14d
  struct IAudioProcessingObject *v8; // rsi
  WAVEFORMATEX *v9; // rcx
  WAVEFORMATEX *v10; // rcx
  WAVEFORMATEX *v11; // rbx
  WAVEFORMATEX *v12; // rcx
  WAVEFORMATEX *v13; // rdi
  bool v14; // zf
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  HRESULT v16; // eax
  IAudioMediaType *ppIAudioMediaType; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+48h] [rbp-38h] BYREF
  WAVEFORMATEX *v20; // [rsp+50h] [rbp-30h] BYREF
  WAVEFORMATEX *pAudioFormat[2]; // [rsp+60h] [rbp-20h] BYREF
  struct IAudioProcessingObject *v22[2]; // [rsp+70h] [rbp-10h] BYREF
  IAudioMediaType *v23; // [rsp+A8h] [rbp+28h] BYREF

  v22[0] = 0LL;
  *(struct _GUID *)pAudioFormat = *a2;
  ModeEffect = CEndpointCharacteristics::GetModeEffect(
                 a1,
                 (struct _GUID *)pAudioFormat,
                 0,
                 eOffloadConnector,
                 0LL,
                 v22,
                 0LL);
  if ( ModeEffect >= 0 )
  {
    v8 = v22[0];
    if ( !v22[0] )
    {
      ModeEffect = 0;
      goto LABEL_22;
    }
    v20 = 0LL;
    pAudioFormat[0] = 0LL;
    ModeEffect = CloneWaveFormat(Src, &v20);
    if ( ModeEffect >= 0 )
    {
      ModeEffect = CloneWaveFormat(a4, pAudioFormat);
      if ( ModeEffect >= 0 )
      {
        v11 = v20;
        if ( (v20->wBitsPerSample & 0xFFF8u) <= 0x100 )
        {
          ConvertPCMWfxToIEEEFloat(v20);
          v13 = pAudioFormat[0];
          ConvertPCMWfxToIEEEFloat(pAudioFormat[0]);
          ppIAudioMediaType = 0LL;
          v23 = 0LL;
          v19 = 0LL;
          ModeEffect = CreateAudioMediaType(v13, v13->cbSize + 18, &ppIAudioMediaType);
          if ( ModeEffect >= 0 )
          {
            ModeEffect = CreateAudioMediaType(v11, v11->cbSize + 18, &v23);
            if ( ModeEffect >= 0 )
            {
              v14 = (*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a1 + 56LL))(a1) == 0;
              lpVtbl = v8->lpVtbl;
              if ( v14 )
                v16 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, __int64 *))lpVtbl->IsInputFormatSupported)(
                        v8,
                        ppIAudioMediaType,
                        v23,
                        &v19);
              else
                v16 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, __int64 *))lpVtbl->IsOutputFormatSupported)(
                        v8,
                        ppIAudioMediaType,
                        v23,
                        &v19);
              ModeEffect = v16;
              if ( v16 && v16 != -2005073917 )
                ModeEffect = -2004287480;
            }
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
          v12 = v13;
        }
        else
        {
          ModeEffect = -2004287480;
          v12 = pAudioFormat[0];
        }
        CoTaskMemFree(v12);
        v10 = v11;
        goto LABEL_21;
      }
      v9 = pAudioFormat[0];
    }
    else
    {
      v9 = 0LL;
    }
    CoTaskMemFree(v9);
    v10 = v20;
LABEL_21:
    CoTaskMemFree(v10);
  }
LABEL_22:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v22);
  return (unsigned int)ModeEffect;
}
