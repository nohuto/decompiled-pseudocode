/*
 * XREFs of ?RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@@Z @ 0x1804A7FB0
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItemCollection@@V1@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemCollection@@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAW4SwitchItemFilterBehavior@@@Z @ 0x1804A6CEC (--$MakeAndInitialize@VSwitchItemCollection@@V1@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationVie.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z @ 0x18006B8F4 (--$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UITabViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabViewManager@@@Z @ 0x1800A255C (--4-$ComPtr@UITabViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabViewManager@@@Z.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x1800FE5EC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x180116738 (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____lambda_87e491ca89c161f11cdbafeae50fa0db___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____lambda_87e491ca89c161f11cdbafeae50fa0db___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs___ @ 0x1804A6E34 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1804A6E34.c)
 *     ?_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z @ 0x1804A84A4 (-_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SwitchItemCollection::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64); // rbx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 *v16; // rax
  int v17; // edi
  void *v18; // rax
  __int64 v19; // rbx
  int v20; // eax
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, struct IObjectArray **); // rbx
  int v24; // eax
  __int64 v25; // rdx
  __int64 *v26; // [rsp+20h] [rbp-10h] BYREF
  __int64 v27; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IObjectArray *v29; // [rsp+60h] [rbp+30h] BYREF
  __int64 v30; // [rsp+68h] [rbp+38h] BYREF

  v10 = a1 + 192;
  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((__int64 *)(a1 + 192), a3);
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((__int64 *)(a1 + 200), a4);
  v11 = *(_QWORD *)(a1 + 208);
  if ( v11 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v11 = *(_QWORD *)(a1 + 208);
    }
    v30 = v11;
    *(_QWORD *)(a1 + 208) = a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
  }
  *(_DWORD *)(a1 + 248) = a7;
  if ( !a6 )
    goto LABEL_24;
  v12 = a5;
  if ( !a5 )
    goto LABEL_24;
  Microsoft::WRL::ComPtr<ITabViewManager>::operator=((__int64 *)(a1 + 216), a6);
  v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 112LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 224));
  v14 = v13(v12, a1 + 224);
  if ( v14 >= 0 )
  {
    a6 = 0LL;
    v30 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v30);
    v26 = &a6;
    v16 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v26);
    v17 = Microsoft::WRL::AsWeak<IInspectable>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1, v16);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x88,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)(unsigned int)v17);
LABEL_20:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&a6);
      return (unsigned int)v17;
    }
    v26 = (__int64 *)a1;
    v27 = a6;
    if ( a6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 8LL))(a6);
    v18 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v18 )
      v19 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs_____::___Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____lambda_87e491ca89c161f11cdbafeae50fa0db___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____lambda_87e491ca89c161f11cdbafeae50fa0db___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs___(
              (__int64)v18,
              &v26);
    else
      v19 = 0LL;
    v30 = v19;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v27);
    v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 224) + 152LL))(
            *(_QWORD *)(a1 + 224),
            v19,
            a1 + 240);
    v17 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9B,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)(unsigned int)v20);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      goto LABEL_20;
    }
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&a6);
LABEL_24:
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 200) + 24LL))(
            *(_QWORD *)(a1 + 200),
            a1 + 160,
            a1 + 232);
    if ( v14 < 0 )
    {
      v15 = 158LL;
      goto LABEL_9;
    }
    v29 = 0LL;
    v22 = *(_QWORD *)v10;
    v23 = *(__int64 (__fastcall **)(__int64, struct IObjectArray **))(**(_QWORD **)v10 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
    v24 = v23(v22, &v29);
    v14 = v24;
    if ( v24 >= 0 )
    {
      v24 = SwitchItemCollection::_AddViews((SwitchItemCollection *)a1, v29);
      v14 = v24;
      if ( v24 >= 0 )
      {
LABEL_31:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
        return (unsigned int)v14;
      }
      v25 = 163LL;
    }
    else
    {
      v25 = 161LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_31;
  }
  v15 = 133LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
    (const char *)(unsigned int)v14);
  return (unsigned int)v14;
}
