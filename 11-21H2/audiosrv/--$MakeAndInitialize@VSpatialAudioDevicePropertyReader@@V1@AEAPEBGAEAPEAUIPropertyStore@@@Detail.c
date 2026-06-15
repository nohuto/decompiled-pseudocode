/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180038528
 * Callers:
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x180038290 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18004EB08 (Create_SpatialAudioDevicePropertyReader.c)
 * Callees:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180038720 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyReader,SpatialAudioDevicePropertyReader,unsigned short const * &,IPropertyStore * &>(
        _QWORD *a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  __int64 *v8; // rsi
  LPUNKNOWN v9; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbp
  __int64 v11; // rcx
  LPUNKNOWN v12; // rcx
  int v13; // esi
  LPUNKNOWN ppunkMarshal; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+78h] [rbp+20h]

  *a1 = 0LL;
  v6 = operator new(0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v6;
  v7 = v6;
  if ( v6 )
  {
    v6[1] = &Microsoft::WRL::FtmBase::`vftable';
    v8 = v6 + 4;
    v6[4] = 0LL;
    ppunkMarshal = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v9 = ppunkMarshal;
      QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
      v11 = *v8;
      if ( *v8 )
      {
        *v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, __int64 *))QueryInterface)(
        v9,
        &GUID_00000003_0000_0000_c000_000000000046,
        v8);
    }
    v12 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v12->lpVtbl->Release)(v12);
    }
    *((_DWORD *)v7 + 11) = 1;
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioDevicePropertyReader'};
    v7[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v7 = &SpatialAudioDevicePropertyReader::`vftable'{for `ISpatialAudioDevicePropertyReader'};
    v7[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v7[6] = 0LL;
    v7[7] = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v7 + 8), 0, 0);
    v7[50] = 0LL;
    v7[51] = 0LL;
    v7[52] = 0LL;
    *((_DWORD *)v7 + 106) = 0;
    v7[63] = 0LL;
    *((_DWORD *)v7 + 128) = 0;
    ppunkMarshal = (LPUNKNOWN)v7;
    v16 = 0LL;
    v13 = SpatialAudioDevicePropertyReader::RuntimeClassInitialize((SpatialAudioDevicePropertyReader *)v7, *a2, *a3);
    if ( v13 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
      *a1 = v7;
      v13 = 0;
    }
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
