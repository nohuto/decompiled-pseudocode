/*
 * XREFs of ?get_WindowContext@UIContext@UI@Windows@@UEAAJPEAPEAUIWindowContextPartner@23@@Z @ 0x1800182F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ??$As@UIUIContentRoot@UI@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIUIContentRoot@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180018514 (--$As@UIUIContentRoot@UI@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIUIConten.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800185D0 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::UI::UIContext::get_WindowContext(Windows::UI::UIContext *this, struct IInspectable **a2)
{
  struct IInspectable *v4; // rbx
  struct IInspectable *v5; // rcx
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rdi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IInspectable *v13; // [rsp+40h] [rbp+20h] BYREF
  struct IInspectable *v14; // [rsp+48h] [rbp+28h] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<Windows::UI::IUIContentRoot>(
              (Windows::UI::UIContext *)((char *)this + 64),
              &v14) >= 0
    && (v4 = v14) != 0LL )
  {
    v13 = 0LL;
    QueryInterface = v14->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
    v8 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, struct IInspectable **))QueryInterface)(
           v4,
           &GUID_603381cb_2327_5454_919d_a61c5dc4a7d9,
           &v13);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x31,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtuicontext.cpp",
        (const char *)(unsigned int)v8,
        savedregs);
    v9 = ((__int64 (__fastcall *)(struct IInspectable *, struct IInspectable **))v13->lpVtbl[1].Release)(v13, a2);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtuicontext.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
      Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v14);
      return v10;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
    if ( (int)Microsoft::WRL::WeakRef::InternalResolve(
                (Windows::UI::UIContext *)((char *)this + 72),
                &GUID_ab9babfd_b632_4214_b698_d0e5eb9ee566,
                &v13) >= 0
      && v13 )
    {
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v13);
      *a2 = v13;
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
  }
  v5 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    ((void (__fastcall *)(struct IInspectable *))v5->lpVtbl->Release)(v5);
  }
  return 0LL;
}
