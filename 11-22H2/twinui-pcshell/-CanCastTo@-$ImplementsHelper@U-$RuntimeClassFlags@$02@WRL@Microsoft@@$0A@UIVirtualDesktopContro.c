/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UIWeakReferenceSource@@UIVirtualDesktopController2@5678@UIVirtualDesktopController3@5678@UIVirtualDesktopControllerInternal@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18013EF54
 * Callers:
 *     ?VirtualDesktopController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18013EE74 (-VirtualDesktopController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B79A0 (-QueryInterface@VirtualDesktopController@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopController2@5678@UIVirtualDesktopController3@5678@UIVirtualDesktopControllerInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805430F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1805430F0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVirtualDesktopController3@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopControllerInternal@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18013EFC8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVirtualDesktopControl.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,IWeakReferenceSource,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController2,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController3,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v5; // rcx
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r11
  __int64 v9; // r10

  if ( InlineIsEqualGUID(a2, &_uuidof__AUIVirtualDesktopController_Multitasking_ComposableShell_Internal_Windows__) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &_uuidof__AUIWeakReferenceSource_Details_Platform__)
      || InlineIsEqualGUID(v5, &GUID_45736833_b342_4e3e_805c_96b9f5f79247) )
    {
      *v6 = v8;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController3,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::CanCastTo(
                             v8 + 8,
                             v9);
    }
    return v7;
  }
}
