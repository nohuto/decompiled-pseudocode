/*
 * XREFs of ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x18009B474
 * Callers:
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180093558 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 *     ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180099A4C (-_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Holographic::GetWindowDisplayContext(
        unsigned int a1,
        unsigned int a2,
        __int64 a3)
{
  HRESULT v6; // eax
  int v7; // edx
  unsigned int v8; // r8d
  HSTRING v9; // rbx
  int ActivationFactory; // eax
  unsigned int v11; // ebx
  __int64 v13; // rdx
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v15; // [rsp+38h] [rbp-40h] BYREF
  HSTRING v16; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v14 = 0LL;
  v16 = 0LL;
  v6 = WindowsCreateStringReference(L"Windows.Internal.Shell.Holographic.ContextIdentifier", 0x34u, &v15, &v16);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6, v7, v8);
    __debugbreak();
  }
  v9 = v16;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  ActivationFactory = RoGetActivationFactory(v9, &GUID_b80ca0d2_a583_4e8b_84c6_fac647a1d771, &v14);
  v11 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v13 = 43LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\internal\\shell\\inc\\HolographicSession.h",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_4;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v14 + 48LL))(
                        v14,
                        a1,
                        a2,
                        a3);
  v11 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v13 = 48LL;
    goto LABEL_8;
  }
LABEL_4:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  return v11;
}
