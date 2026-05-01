/*
 * XREFs of ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x180096470
 * Callers:
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1800782C0 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180094910 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x180096470 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x18009A480 (-OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z.c)
 *     ?RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180122A28 (-RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x1803E28E0 (-EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x180096470 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180099F18 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800EEF40 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18018FE0C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall WindowEventDispatcher::RaiseViewEventWithPropertySet(
        __int64 a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        int a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 v8; // r12
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  LPUNKNOWN v12; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // r12
  __int64 v14; // rcx
  volatile int *v15; // rdx
  __int64 v16; // rax
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  signed __int64 v19; // rax
  unsigned int v20; // ecx
  signed __int64 v21; // rtt
  __int64 v22; // rcx
  __int64 v23; // rcx
  signed __int64 v24; // rax
  unsigned int v25; // ecx
  signed __int64 v26; // rtt
  __int64 v27; // rcx
  ConnectedStandbyHelper *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // [rsp+30h] [rbp-58h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+38h] [rbp-50h] BYREF
  _QWORD *v32; // [rsp+40h] [rbp-48h]
  __int64 v33; // [rsp+48h] [rbp-40h] BYREF
  _QWORD *v34; // [rsp+50h] [rbp-38h] BYREF
  __int64 v35; // [rsp+58h] [rbp-30h] BYREF

  v8 = a1;
  if ( a3 == 4 )
  {
    v29 = *a5;
    v33 = v29;
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
    WindowEventDispatcher::RaiseViewEventWithPropertySet(v8, a2, 3LL, 0LL, &v33);
  }
  v9 = 0LL;
  v32 = 0LL;
  v10 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  v34 = v10;
  if ( v10 )
  {
    v10[1] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v10[4] = 0LL;
    ppunkMarshal = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v12 = ppunkMarshal;
      QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
      v14 = v11[4];
      if ( v14 )
      {
        v11[4] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
        v12,
        &GUID_00000003_0000_0000_c000_000000000046,
        v11 + 4);
      v8 = a1;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
    v11[7] = 0LL;
    v11[10] = 1LL;
    *v11 = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
    v11[1] = &ViewEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v11[8] = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v11 = &ViewEventArgs::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
    v11[1] = &ViewEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v11[8] = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase>::`vftable';
    *((_DWORD *)v11 + 12) = a3;
    v16 = v11[7];
    if ( v16 != a4 )
    {
      if ( a4 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
        v16 = v11[7];
      }
      v35 = v16;
      v11[7] = a4;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
    }
    v17 = v11[10];
    while ( v17 >= 0 )
    {
      if ( (_DWORD)v17 != 0x7FFFFFFF )
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange64(v11 + 10, v17 + 1, v17);
        if ( v18 != v17 )
          continue;
      }
      goto LABEL_14;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v17 + 16), v15);
LABEL_14:
    v32 = v11;
    v19 = v11[10];
    while ( v19 >= 0 )
    {
      if ( (_DWORD)v19 == 0x7FFFFFFF )
        goto LABEL_19;
      v20 = v19 - 1;
      v21 = v19;
      v19 = _InterlockedCompareExchange64(v11 + 10, v19 - 1, v19);
      if ( v21 == v19 )
        goto LABEL_18;
    }
    v20 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v19 + 16), v15);
LABEL_18:
    if ( !v20 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v11 + 64LL))(v11, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
LABEL_19:
    v22 = *a5;
    v30 = 0LL;
    if ( v22 )
    {
      if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v22 + 24LL))(
             v22,
             &GUID_c1659867_0cf6_5f3b_99df_4f036280926c,
             &v30) >= 0
        && (*(int (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, _QWORD *))(*(_QWORD *)v30 + 24LL))(
             v30,
             a2,
             v11) >= 0
        && !a3 )
      {
        v28 = *(ConnectedStandbyHelper **)(v8 + 352);
        if ( v28 )
          ConnectedStandbyHelper::HandleViewCreated(v28, a2);
      }
    }
    v23 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v9 = v32;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v34);
  }
  if ( v9 )
  {
    v24 = v9[10];
    while ( v24 >= 0 )
    {
      if ( (_DWORD)v24 == 0x7FFFFFFF )
        goto LABEL_34;
      v25 = v24 - 1;
      v26 = v24;
      v24 = _InterlockedCompareExchange64(v9 + 10, v24 - 1, v24);
      if ( v26 == v24 )
        goto LABEL_31;
    }
    v25 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v24 + 16), v15);
LABEL_31:
    if ( !v25 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v32 + 64LL))(v32, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
LABEL_34:
  v27 = *a5;
  if ( *a5 )
  {
    *a5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
}
