/*
 * XREFs of ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x1803A2C30
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18000F0C0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000FF1C (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CApplicationManager::_HandleSelectTargetViewForNavigationRequest(
        CApplicationManager *this,
        __int64 a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *a4)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64, __int64); // rbx
  int v8; // eax
  RTL_SRWLOCK *v9; // rdi
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rsi
  int v12; // ebx
  struct Windows::Foundation::Collections::IPropertySet *v13; // rbx
  __int64 (__fastcall *v14)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rsi
  int v15; // eax
  int AddressOf; // [rsp+20h] [rbp-30h]
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 (__fastcall ***v18[3])(_QWORD, GUID *, __int64); // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v20; // [rsp+70h] [rbp+20h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v21; // [rsp+80h] [rbp+30h] BYREF

  v21 = a3;
  v18[0] = 0LL;
  v6 = *((_QWORD *)this + 75);
  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 64LL);
  AddressOf = (unsigned int)Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf((__int64 *)v18);
  v8 = v7(v6, 1LL, a2);
  if ( v8 < 0 )
  {
    if ( v8 == -2147319765 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, _QWORD))(*(_QWORD *)a4 + 56LL))(
        a4,
        0LL);
  }
  else
  {
    v20 = 0LL;
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(v18, (__int64)&v17);
    v9 = CApplicationManagerUtility::g_pIAMGlobals;
    v18[1] = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v21 = 0LL;
    v10 = v17;
    v11 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v17 + 352LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
    v12 = v11(v10, 2LL, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v21);
    if ( v12 >= 0 )
    {
      v13 = v21;
      v14 = *(__int64 (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))(*(_QWORD *)v21 + 40LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
      v12 = v14(v13, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v20);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
    if ( v9 )
      ReleaseSRWLockShared(v9);
    if ( v12 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v20 + 48LL))(
              v20,
              &v21);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1780,
          (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v15,
          AddressOf);
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, _QWORD))(*(_QWORD *)a4 + 56LL))(
        a4,
        (unsigned int)v21);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v18);
}
