/*
 * XREFs of ??$MakeAndInitialize@V?$ReferenceImpl@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@V123@AEAUVector3@Numerics@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAV?$ReferenceImpl@UVector3@Numerics@Foundation@Windows@@@WRL2@2@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x180134D14
 * Callers:
 *     ?CreateReference@?$ScalarNullable@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@QEAA?AV?$ComPtr@U?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@Windows@@@WRL@3@XZ @ 0x1801388AC (-CreateReference@-$ScalarNullable@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@QEAA-AV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ReferenceImpl@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x180135C4C (--0-$ReferenceImpl@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector3>,Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector3>,Windows::Foundation::Numerics::Vector3 &>(
        __int64 *a1,
        __int64 *a2)
{
  LPVOID v4; // rax
  __int64 v6; // rax
  __int64 v7; // xmm0_8
  __int64 v8; // rbx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = DefaultHeap::Alloc(0x58uLL);
  v9 = (__int64)v4;
  if ( v4 )
  {
    v6 = Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector3>::ReferenceImpl<Windows::Foundation::Numerics::Vector3>(v4);
    v7 = *a2;
    v8 = v6;
    v9 = v6;
    *(_QWORD *)(v6 + 72) = v7;
    *(_DWORD *)(v6 + 80) = *((_DWORD *)a2 + 2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    *a1 = v8;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v9);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>((void **)&v9);
    return 2147942414LL;
  }
}
