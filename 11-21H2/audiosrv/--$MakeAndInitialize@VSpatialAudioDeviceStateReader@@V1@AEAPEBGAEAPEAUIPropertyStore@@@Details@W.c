/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180038AFC
 * Callers:
 *     Create_SpatialAudioDeviceStateReader @ 0x180038A40 (Create_SpatialAudioDeviceStateReader.c)
 * Callees:
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180038D1C (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateReader,SpatialAudioDeviceStateReader,unsigned short const * &,IPropertyStore * &>(
        IUnknown **a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  IUnknown *v6; // rax
  IUnknown *v7; // rbx
  IUnknown *v8; // rdi
  IUnknown *v9; // rsi
  IUnknown *v10; // r14
  LPUNKNOWN v11; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbp
  struct IUnknownVtbl *lpVtbl; // rcx
  LPUNKNOWN v14; // rcx
  int v15; // ebp
  LPUNKNOWN ppunkMarshal; // [rsp+60h] [rbp+8h] BYREF
  IUnknown *v18; // [rsp+78h] [rbp+20h]

  *a1 = 0LL;
  v6 = (IUnknown *)operator new(0x268uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v18 = v6;
  v8 = v6;
  if ( v6 )
  {
    memset_0(&v6[1], 0, 0x208uLL);
    v7[66].lpVtbl = 0LL;
    v7[67].lpVtbl = 0LL;
    v7->lpVtbl = (struct IUnknownVtbl *)&SpatialAudioStateIO::`vftable';
    *(_OWORD *)&v7[68].lpVtbl = 0LL;
    v7[70].lpVtbl = 0LL;
    v9 = v7 + 71;
    v7[72].lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::FtmBase::`vftable';
    v10 = v7 + 75;
    v7[75].lpVtbl = 0LL;
    ppunkMarshal = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v11 = ppunkMarshal;
      QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
      lpVtbl = v10->lpVtbl;
      if ( v10->lpVtbl )
      {
        v10->lpVtbl = 0LL;
        (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, IUnknown *))QueryInterface)(
        v11,
        &GUID_00000003_0000_0000_c000_000000000046,
        v10);
    }
    v14 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v14->lpVtbl->Release)(v14);
    }
    HIDWORD(v9[5].lpVtbl) = 1;
    v9->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioDeviceStateReader'};
    v9[1].lpVtbl = (struct IUnknownVtbl *)&SpatialAudioDeviceStateReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v8->lpVtbl = (struct IUnknownVtbl *)&SpatialAudioDeviceStateReader::`vftable';
    v9->lpVtbl = (struct IUnknownVtbl *)&SpatialAudioDeviceStateReader::`vftable'{for `ISpatialAudioDeviceStateReader'};
    v8[72].lpVtbl = (struct IUnknownVtbl *)&SpatialAudioDeviceStateReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    ppunkMarshal = v8;
    v18 = 0LL;
    v15 = SpatialAudioIO::Initialize((SpatialAudioIO *)v8, *a2, *a3);
    if ( v15 >= 0 )
    {
      v15 = ((__int64 (__fastcall *)(IUnknown *))v8->lpVtbl->AddRef)(v8);
      if ( v15 >= 0 )
      {
        ((void (__fastcall *)(IUnknown *))v9->lpVtbl->AddRef)(v9);
        *a1 = v8;
        v15 = 0;
      }
    }
    ((void (__fastcall *)(IUnknown *))v9->lpVtbl->Release)(v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v15;
}
