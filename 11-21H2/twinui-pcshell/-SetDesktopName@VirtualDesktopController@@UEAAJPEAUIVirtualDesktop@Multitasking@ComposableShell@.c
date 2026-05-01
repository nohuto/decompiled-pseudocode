/*
 * XREFs of ?SetDesktopName@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x18048DD60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010F8F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopController::SetDesktopName(
        VirtualDesktopController *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *),
        __int64 a3,
        __int64 a4)
{
  __int64 (__fastcall *v7)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64); // rbx
  _QWORD *v14; // rax
  __int64 v16[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v18 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  v8 = v7(
         (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a2,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         &v18);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v12 = *((_QWORD *)this + 8);
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v12 + 120LL);
    v14 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, v16);
    v9 = v13(v12, *v14, a3);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v16);
    if ( v9 >= 0 )
    {
      v9 = 0;
      goto LABEL_7;
    }
    v10 = (unsigned int)v9;
    v11 = 350LL;
  }
  else
  {
    v10 = (unsigned int)v8;
    v11 = 348LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)v10);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  return (unsigned int)v9;
}
