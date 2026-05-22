/*
 * XREFs of ?BindSwapChainSurface@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAVCompositionSwapChain@234@@Z @ 0x1801594E0
 * Callers:
 *     ?MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PEAUICompositionSurface@234@@Z @ 0x1800304E0 (-MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x1800832B0 (-InternalUnlock@-$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrush::BindSwapChainSurface(
        Windows::UI::Composition::CompositionSurfaceBrush *this,
        struct Windows::UI::Composition::CompositionSwapChain *a2)
{
  int (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // rdx
  int v7; // r9d
  __int64 v8; // rdx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v12; // [rsp+48h] [rbp+28h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v13; // [rsp+50h] [rbp+30h] BYREF

  v2 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a2 + 18);
  v12 = 0LL;
  v13 = 0LL;
  v5 = **v2;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v12);
  if ( v5(v2, &GUID_23d72676_66f2_11e0_b363_ef38dfd72085, &v12) >= 0 )
  {
    v7 = *(_DWORD *)(v12 + 12);
LABEL_5:
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0,
      v7);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock((volatile signed __int32 **)&v13, v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v12);
    return 0LL;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock((volatile signed __int32 **)&v13, v6);
  if ( (int)Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
              *((struct Microsoft::WRL2::ContextSession **)this + 3),
              *((struct IUnknown **)a2 + 18),
              (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionObject::s_InterfaceType,
              &v13) >= 0 )
  {
    v7 = *((_DWORD *)v13 + 32);
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x209,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
    (const char *)0x8000FFFFLL);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock((volatile signed __int32 **)&v13, v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v12);
  return 2147549183LL;
}
