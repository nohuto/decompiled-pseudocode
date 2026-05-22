/*
 * XREFs of ??$MakeAndInitialize@V?$ReferenceImpl@M@WRL2@Microsoft@@V123@AEAM@Details@WRL@Microsoft@@YAJPEAPEAV?$ReferenceImpl@M@WRL2@2@AEAM@Z @ 0x180134C78
 * Callers:
 *     ?CreateReference@?$ScalarNullable@M@WRL2@Microsoft@@QEAA?AV?$ComPtr@U?$IReference@M@Foundation@Windows@@@WRL@3@XZ @ 0x180138834 (-CreateReference@-$ScalarNullable@M@WRL2@Microsoft@@QEAA-AV-$ComPtr@U-$IReference@M@Foundation@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ReferenceImpl@M@WRL2@Microsoft@@QEAA@XZ @ 0x180135B94 (--0-$ReferenceImpl@M@WRL2@Microsoft@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@V?$ReferenceImpl@M@WRL2@Microsoft@@@WRL@Microsoft@@QEAAXPEAV?$ReferenceImpl@M@WRL2@3@@Z @ 0x180137090 (-Attach@-$ComPtr@V-$ReferenceImpl@M@WRL2@Microsoft@@@WRL@Microsoft@@QEAAXPEAV-$ReferenceImpl@M@W.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL2::ReferenceImpl<float>,Microsoft::WRL2::ReferenceImpl<float>,float &>(
        _QWORD *a1,
        int *a2)
{
  _DWORD *v4; // rax
  __int64 v6; // rax
  int v7; // eax
  _DWORD *v8; // rbx
  _DWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = DefaultHeap::Alloc(0x50uLL);
  v9 = v4;
  if ( v4 )
  {
    v6 = Microsoft::WRL2::ReferenceImpl<float>::ReferenceImpl<float>(v4);
    v9 = 0LL;
    Microsoft::WRL::ComPtr<Microsoft::WRL2::ReferenceImpl<float>>::Attach(&v9, v6);
    v7 = *a2;
    v8 = v9;
    v9[18] = v7;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
    *a1 = v8;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v9);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>((void **)&v9);
    return 2147942414LL;
  }
}
