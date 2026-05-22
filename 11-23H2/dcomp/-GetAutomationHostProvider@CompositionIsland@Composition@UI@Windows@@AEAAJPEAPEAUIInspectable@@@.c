/*
 * XREFs of ?GetAutomationHostProvider@CompositionIsland@Composition@UI@Windows@@AEAAJPEAPEAUIInspectable@@@Z @ 0x1800B6042
 * Callers:
 *     ?get_AutomationHostProvider@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1800B61E0 (-get_AutomationHostProvider@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAPEAUIInspectab.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIInspectable@@@?$ComPtr@UIRawElementProviderSimple@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180110EC8 (--$As@UIInspectable@@@-$ComPtr@UIRawElementProviderSimple@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::GetAutomationHostProvider(
        Windows::UI::Composition::CompositionIsland *this,
        struct IInspectable **a2)
{
  struct IInspectable **v2; // rbx
  HRESULT v5; // eax
  unsigned int v6; // ebx
  unsigned __int64 v7; // rax
  LPVOID v8; // rbx
  __int64 (__fastcall *v9)(LPVOID, __int128 *, __int64 *); // rdi
  int v10; // eax
  int v12; // eax
  struct IInspectable *v13; // rcx
  int ppv; // [rsp+20h] [rbp-20h]
  __int128 v15; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v17; // [rsp+60h] [rbp+20h] BYREF
  LPVOID v18; // [rsp+70h] [rbp+30h] BYREF
  struct IInspectable *v19; // [rsp+78h] [rbp+38h] BYREF

  v2 = (struct IInspectable **)((char *)this + 464);
  if ( *((_QWORD *)this + 58) )
  {
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this + 58);
    *a2 = *v2;
  }
  else
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v18);
    v5 = CoCreateInstance(
           &GUID_fe58c767_bfc9_4b9b_9e9b_462ddbe9b4d9,
           0LL,
           1u,
           &GUID_ae68066a_489a_415c_b27e_ccbc419da8e1,
           &v18);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61C,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
        (const char *)(unsigned int)v5);
LABEL_6:
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v18);
      return v6;
    }
    v7 = *((_QWORD *)this + 22);
    v8 = v18;
    v17 = 0LL;
    v15 = v7;
    v9 = *(__int64 (__fastcall **)(LPVOID, __int128 *, __int64 *))(*(_QWORD *)v18 + 40LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v17);
    v10 = v9(v8, &v15, &v17);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x627,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v17);
      goto LABEL_6;
    }
    v19 = 0LL;
    v12 = Microsoft::WRL::ComPtr<IRawElementProviderSimple>::As<IInspectable>(&v17, &v19);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x62A,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
        (const char *)(unsigned int)v12,
        ppv);
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v19);
    v13 = v19;
    *a2 = v19;
    if ( v13 )
    {
      v19 = 0LL;
      ((void (__fastcall *)(struct IInspectable *))v13->lpVtbl->Release)(v13);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v18);
  }
  return 0LL;
}
