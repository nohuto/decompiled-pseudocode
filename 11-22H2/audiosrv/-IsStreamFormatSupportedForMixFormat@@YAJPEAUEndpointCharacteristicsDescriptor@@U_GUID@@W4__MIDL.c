/*
 * XREFs of ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18008364E
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180114898 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x180115360 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWA.c)
 *     AudioServerGetMixFormat @ 0x180122210 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x180123880 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180015DAC (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002FF68 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180032880 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180055DB8 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x18005E438 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006706C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CreateAudioMediaType @ 0x180069874 (CreateAudioMediaType.c)
 *     memcpy_0 @ 0x18006A809 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18014CC5C (-GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18015016C (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall IsStreamFormatSupportedForMixFormat(
        EffectPack **a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4,
        const struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  bool v8; // r15
  struct tWAVEFORMATEX **v9; // r12
  WAVEFORMATEX *v10; // rbx
  HRESULT AudioMediaType; // r14d
  struct tWAVEFORMATEX *v12; // rdi
  int v14; // eax
  EffectPack *v15; // rcx
  int StreamEffect; // eax
  struct IAudioProcessingObject *v17; // rsi
  CEndpointCharacteristics **v18; // r15
  bool v19; // zf
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v21; // eax
  void *v22; // rcx
  __int64 cbSize; // rsi
  struct tWAVEFORMATEX *v24; // rax
  struct tWAVEFORMATEX **v25; // rcx
  struct IAudioSystemEffects2 **v26; // [rsp+28h] [rbp-59h]
  IAudioMediaType *ppIAudioMediaType[2]; // [rsp+48h] [rbp-39h] BYREF
  struct _GUID v28; // [rsp+58h] [rbp-29h] BYREF
  WAVEFORMATEX *pAudioFormat; // [rsp+68h] [rbp-19h] BYREF
  struct IAudioProcessingObject *v30; // [rsp+70h] [rbp-11h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-9h] BYREF
  void **v32; // [rsp+80h] [rbp-1h]
  struct tWAVEFORMATEX *v33; // [rsp+88h] [rbp+7h] BYREF
  char v34; // [rsp+90h] [rbp+Fh]

  LODWORD(ppIAudioMediaType[0]) = 0;
  v30 = 0LL;
  v8 = 1;
  v9 = a6;
  if ( a6 )
    *a6 = 0LL;
  pv = 0LL;
  v10 = 0LL;
  pAudioFormat = 0LL;
  AudioMediaType = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)&pv);
  v12 = (struct tWAVEFORMATEX *)pv;
  if ( AudioMediaType >= 0 )
  {
    AudioMediaType = CloneWaveFormat(a4, &pAudioFormat);
    if ( AudioMediaType < 0 )
    {
LABEL_7:
      v10 = pAudioFormat;
      goto LABEL_8;
    }
    if ( (v12->wBitsPerSample & 0xFFF8u) > 0x100 )
    {
      AudioMediaType = -2004287480;
      goto LABEL_7;
    }
    if ( v12->wFormatTag == 0xFFFE )
      v8 = (v12[1].wFormatTag & 7) == 0;
    ConvertPCMWfxToIEEEFloat(v12);
    v10 = pAudioFormat;
    ConvertPCMWfxToIEEEFloat(pAudioFormat);
    v14 = EffectPack::EndpointConnectorSupportsProcessingModes(a1[1], a3);
    v15 = a1[1];
    if ( v14 )
    {
      v28 = *a2;
      StreamEffect = EffectPack::GetStreamEffect(v15, &v28, 0, a3, 0LL, &v30, 0LL);
    }
    else
    {
      StreamEffect = EffectPack::GetLfx(v15, a3, 0LL, &v30, v26);
    }
    AudioMediaType = StreamEffect;
    if ( StreamEffect >= 0 )
    {
      v17 = v30;
      if ( v30 )
      {
        ppIAudioMediaType[0] = 0LL;
        a6 = 0LL;
        *(_QWORD *)&v28.Data1 = 0LL;
        AudioMediaType = CreateAudioMediaType(v10, v10->cbSize + 18, ppIAudioMediaType);
        if ( AudioMediaType < 0
          || (AudioMediaType = CreateAudioMediaType(v12, v12->cbSize + 18, (IAudioMediaType **)&a6), AudioMediaType < 0)
          || ((v18 = a1,
               v19 = (*(unsigned int (__fastcall **)(EffectPack *))(*(_QWORD *)*a1 + 56LL))(*a1) == 0,
               lpVtbl = v17->lpVtbl,
               !v19)
            ? (v21 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, IAudioMediaType *, struct tWAVEFORMATEX **, struct _GUID *))lpVtbl->IsOutputFormatSupported)(
                       v17,
                       ppIAudioMediaType[0],
                       a6,
                       &v28))
            : (v21 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, IAudioMediaType *, struct tWAVEFORMATEX **, struct _GUID *))lpVtbl->IsInputFormatSupported)(
                       v17,
                       ppIAudioMediaType[0],
                       a6,
                       &v28)),
              AudioMediaType = v21,
              LOBYTE(v17) = 0,
              v21 < 0) )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v28);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&a6);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppIAudioMediaType);
          goto LABEL_8;
        }
        if ( v21 == 1 || (unsigned int)ValidateWaveFormatEx(Src) )
          AudioMediaType = 1;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v28);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&a6);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppIAudioMediaType);
      }
      else
      {
        if ( (unsigned int)ValidateUncompressedWaveFormatEx(v12) )
        {
          AudioMediaType = -2004287480;
          goto LABEL_8;
        }
        if ( v12->nSamplesPerSec == v10->nSamplesPerSec
          && v12->nChannels == v10->nChannels
          && v8
          && !(unsigned int)ValidateWaveFormatEx(Src) )
        {
          AudioMediaType = 0;
          goto LABEL_8;
        }
        AudioMediaType = 1;
        v18 = a1;
      }
      if ( v9 && AudioMediaType )
      {
        a6 = 0LL;
        v32 = (void **)&a6;
        v33 = 0LL;
        AudioMediaType = 1;
        v34 = 1;
        LODWORD(ppIAudioMediaType[0]) = 1;
        v28 = *a2;
        if ( CEndpointCharacteristics::TryGetOverridingMixFormat(*v18, a3, &v28, &v33) >= 0 && a6 )
          LOBYTE(v17) = 1;
        if ( v34 )
        {
          v22 = *v32;
          *v32 = v33;
          if ( v22 )
            CoTaskMemFree(v22);
        }
        if ( (_BYTE)v17 )
          a4 = (const struct tWAVEFORMATEX *)a6;
        cbSize = a4->cbSize;
        v24 = (struct tWAVEFORMATEX *)operator new[](cbSize + 18, (const struct std::nothrow_t *)&std::nothrow);
        *v9 = v24;
        if ( v24 )
          memcpy_0(v24, a4, cbSize + 18);
        else
          AudioMediaType = -2147024882;
        v25 = a6;
        a6 = 0LL;
        if ( v25 )
          CoTaskMemFree(v25);
      }
    }
  }
LABEL_8:
  CoTaskMemFree(v10);
  CoTaskMemFree(v12);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
  return (unsigned int)AudioMediaType;
}
