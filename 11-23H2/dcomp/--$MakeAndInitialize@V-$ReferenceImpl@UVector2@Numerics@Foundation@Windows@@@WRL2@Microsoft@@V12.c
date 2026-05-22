/*
 * XREFs of ??$MakeAndInitialize@V?$ReferenceImpl@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@V123@AEAUVector2@Numerics@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAV?$ReferenceImpl@UVector2@Numerics@Foundation@Windows@@@WRL2@2@AEAUVector2@Numerics@Foundation@Windows@@@Z @ 0x180167E14
 * Callers:
 *     ?CreateReference@?$ScalarNullable@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@QEAA?AV?$ComPtr@U?$IReference@UVector2@Numerics@Foundation@Windows@@@Foundation@Windows@@@WRL@3@XZ @ 0x180167F80 (-CreateReference@-$ScalarNullable@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@QEAA-AV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ReferenceImpl@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x180167EC8 (--0-$ReferenceImpl@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector2>,Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector2>,Windows::Foundation::Numerics::Vector2 &>(
        _QWORD *a1,
        void **a2)
{
  void *v4; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = DefaultHeap::Alloc(0x50uLL);
  v8 = v4;
  if ( v4 )
  {
    v6 = (_QWORD *)Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector2>::ReferenceImpl<Windows::Foundation::Numerics::Vector2>(v4);
    v7 = v6;
    v8 = *a2;
    v6[9] = v8;
    v9 = v6;
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
    *a1 = v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v9);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v8);
    return 2147942414LL;
  }
}
