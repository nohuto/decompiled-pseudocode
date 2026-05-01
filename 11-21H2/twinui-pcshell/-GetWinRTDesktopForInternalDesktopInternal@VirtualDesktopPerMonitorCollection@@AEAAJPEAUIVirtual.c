/*
 * XREFs of ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopPerMonitorCollection@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180029B60
 * Callers:
 *     ?get_VirtualDesktops@VirtualDesktopPerMonitorCollection@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180029850 (-get_VirtualDesktops@VirtualDesktopPerMonitorCollection@@UEAAJPEAPEAU-$IVectorView@PEAUIVirtualD.c)
 *     ?get_CurrentVirtualDesktop@VirtualDesktopPerMonitorCollection@@UEAAJPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180029A70 (-get_CurrentVirtualDesktop@VirtualDesktopPerMonitorCollection@@UEAAJPEAPEAUIVirtualDesktop@Multi.c)
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x18048F020 (-CurrentVirtualDesktopChanged@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVi.c)
 *     ?GetWinRTDesktopForInternalDesktop@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18048F2B0 (-GetWinRTDesktopForInternalDesktop@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIVirtualDesktop@.c)
 *     ?VirtualDesktopCreated@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@Z @ 0x18048F4C0 (-VirtualDesktopCreated@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDe.c)
 *     ?VirtualDesktopMoved@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@Z @ 0x18048F7A0 (-VirtualDesktopMoved@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesk.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@1@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Z @ 0x180029BFC (--$find@X@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UIVirtua.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1800DA5A0 (-VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtual.c)
 *     ??$emplace@AEAPEAUIVirtualDesktop@@AEAV?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@_N@1@AEAPEAUIVirtualDesktop@@AEAV?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18048EB80 (--$emplace@AEAPEAUIVirtualDesktop@@AEAV-$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@In.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopPerMonitorCollection::GetWinRTDesktopForInternalDesktopInternal(
        struct IThumbnailDeviceSource **this,
        struct IVirtualDesktop *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **a3)
{
  char *v6; // rsi
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **v7; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  const struct _GUID *v11; // [rsp+20h] [rbp-48h]
  int v12; // [rsp+20h] [rbp-48h]
  _BYTE v13[56]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v15; // [rsp+70h] [rbp+8h] BYREF
  struct IVirtualDesktop *v16; // [rsp+78h] [rbp+10h] BYREF
  struct IVirtualDesktop *v17; // [rsp+80h] [rbp+18h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v16 = a2;
  *a3 = 0LL;
  v6 = (char *)(this + 32);
  v17 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
  std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::find<void>(
    v6,
    &v18,
    &v17);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  if ( (struct IThumbnailDeviceSource *)v18 == this[33] )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v15);
    v9 = VirtualDesktop_CreateInstance(a2, this[31], this[13], this[14], v11, &v15);
    v10 = v9;
    if ( v9 >= 0 )
    {
      std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::emplace<IVirtualDesktop * &,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop> &>(
        v6,
        v13,
        &v16,
        &v15);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
      *a3 = (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)v15;
      v10 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFD,
        (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktoppermonitorcollection.cpp",
        (const char *)(unsigned int)v9,
        v12);
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v15);
    return v10;
  }
  else
  {
    v7 = (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **)(v18 + 24);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v18 + 24);
    *a3 = *v7;
    return 0LL;
  }
}
