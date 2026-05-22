/*
 * XREFs of ?RuntimeClassInitialize@Compositor@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@4@PEAUICoreWindow@Core@34@PEAUIUnknown@@PEAVCompositorController@8234@W4CreationFlags@CompositorCommon@234@W4DeviceVersion@DirectComposition@@@Z @ 0x18001CFA4
 * Callers:
 *     ??$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@PEAUIDispatcherQueue@System@4@PEAUICoreWindow@Core@34@$$T$$TW4CreationFlags@CompositorCommon@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositor@Composition@UI@Windows@@$$QEAPEAUIDispatcherQueue@System@6@$$QEAPEAUICoreWindow@Core@56@$$QEA$$T3$$QEAW4CreationFlags@CompositorCommon@456@@Z @ 0x18003C6E8 (--$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@PEAUIDispatcherQueue@System@4@PE.c)
 *     ??$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@AEAPEAUIDispatcherQueue@System@4@AEAPEAUICoreWindow@Core@34@$$TPEAVCompositorController@8234@W4CreationFlags@CompositorCommon@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositor@Composition@UI@Windows@@AEAPEAUIDispatcherQueue@System@6@AEAPEAUICoreWindow@Core@56@$$QEA$$T$$QEAPEAVCompositorController@Core@456@$$QEAW4CreationFlags@CompositorCommon@456@@Z @ 0x18003CAC0 (--$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@AEAPEAUIDispatcherQueue@System@4.c)
 *     ?RuntimeClassInitialize@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@W4DeviceVersion@DirectComposition@@@Z @ 0x18003DA04 (-RuntimeClassInitialize@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIIntero.c)
 *     ??$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@$$T$$T$$T$$TW4CreationFlags@CompositorCommon@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositor@Composition@UI@Windows@@$$QEA$$T111$$QEAW4CreationFlags@CompositorCommon@456@@Z @ 0x18003E174 (--$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@$$T$$T$$T$$TW4CreationFlags@Comp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@System@4@PEAUIUnknown@@PEAVCompositorController@Core@234@W4CreationFlags@1234@W4DeviceVersion@DirectComposition@@@Z @ 0x18001D170 (-RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@Syste.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E78 (-InternalRelease@-$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCoreWindowCI@Compositor@Composition@UI@Windows@@QEAAPEAUICoreWindow_CompositionIslands@Core@34@XZ @ 0x18008B604 (-GetCoreWindowCI@Compositor@Composition@UI@Windows@@QEAAPEAUICoreWindow_CompositionIslands@Core@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::RuntimeClassInitialize(
        _QWORD *a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, struct IUnknown **),
        __int64 a4,
        __int64 a5,
        int a6)
{
  int v8; // eax
  unsigned int v9; // ebx
  _QWORD *v10; // rsi
  int v12; // eax
  struct IUnknown *v13; // rbx
  ULONG (__stdcall *AddRef)(IUnknown *); // rdi
  __int64 v15; // r15
  __int64 (__fastcall *v16)(__int64, _QWORD *); // rdi
  int v17; // eax
  struct Windows::UI::Core::ICoreWindow_CompositionIslands *CoreWindowCI; // rdi
  __int64 (__fastcall *v19)(struct Windows::UI::Core::ICoreWindow_CompositionIslands *, struct IUnknown **); // rbx
  int v20; // eax
  int v21; // eax
  int v22; // edi
  struct IUnknown *v23; // [rsp+30h] [rbp-10h] BYREF
  struct Microsoft::WRL2::NestableRuntimeClass *v24; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v8 = Windows::UI::Composition::CompositorCommon::RuntimeClassInitialize(a1, a2, a4, a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)(unsigned int)v8);
  }
  else
  {
    if ( a3 )
    {
      v23 = 0LL;
      v12 = (**a3)(a3, &GUID_a7ff5b48_94e0_40e6_8a80_228482b688ba, &v23);
      if ( v12 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7A,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
          (const char *)(unsigned int)v12,
          a6);
      v13 = v23;
      v10 = a1 + 59;
      AddRef = v23->lpVtbl[3].AddRef;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a1 + 59);
      ((void (__fastcall *)(struct IUnknown *, _QWORD *))AddRef)(v13, a1 + 59);
      v15 = a1[59];
      if ( v15 )
      {
        v16 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v15 + 72LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a1 + 61);
        v17 = v16(v15, a1 + 61);
        v9 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7F,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
            (const char *)(unsigned int)v17);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v23);
          return v9;
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v23);
    }
    else
    {
      v10 = a1 + 59;
    }
    if ( (a6 & 0x2000) != 0 || !*v10 )
      return 0LL;
    v23 = 0LL;
    CoreWindowCI = Windows::UI::Composition::Compositor::GetCoreWindowCI((Windows::UI::Composition::Compositor *)a1);
    v19 = *(__int64 (__fastcall **)(struct Windows::UI::Core::ICoreWindow_CompositionIslands *, struct IUnknown **))(*(_QWORD *)CoreWindowCI + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v23);
    v20 = v19(CoreWindowCI, &v23);
    v9 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA0,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
        (const char *)(unsigned int)v20);
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::InternalRelease(a1 + 149);
      v21 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
              v23,
              (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionIslandEnvironment::s_InterfaceType,
              &v24);
      v22 = v21;
      a1[149] = v24;
      if ( v21 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v23);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA4,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
        (const char *)(unsigned int)v21);
      v9 = v22;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v23);
  }
  return v9;
}
