/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioPositionCalc@@@Z @ 0x1800388B0
 * Callers:
 *     Create_SpatialAudioPositionCalc @ 0x180038824 (Create_SpatialAudioPositionCalc.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioPositionCalc,ISpatialAudioPositionCalc,>(
        _QWORD *a1)
{
  char *v2; // rdi
  __int64 *v3; // rsi
  LPUNKNOWN v4; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbp
  __int64 v6; // rcx
  LPUNKNOWN v7; // rcx
  unsigned int v8; // ebx
  LPUNKNOWN ppunkMarshal; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    *((_QWORD *)v2 + 1) = &Microsoft::WRL::FtmBase::`vftable';
    v3 = (__int64 *)(v2 + 32);
    *((_QWORD *)v2 + 4) = 0LL;
    ppunkMarshal = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v4 = ppunkMarshal;
      QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
      v6 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, char *))QueryInterface)(
        v4,
        &GUID_00000003_0000_0000_c000_000000000046,
        v2 + 32);
    }
    v7 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v7->lpVtbl->Release)(v7);
    }
    *((_DWORD *)v2 + 11) = 1;
    *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioPositionCalc'};
    *((_QWORD *)v2 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v2 = &SpatialAudioPositionCalc::`vftable'{for `ISpatialAudioPositionCalc'};
    *((_QWORD *)v2 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v2 + 48), 0, 0);
    v8 = (**(__int64 (__fastcall ***)(void *, GUID *, _QWORD *))v2)(v2, &GUID_ea0e3fe9_ee0e_40e5_9eb2_28a576108545, a1);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v8;
}
