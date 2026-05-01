/*
 * XREFs of ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1804C7F68
 * Callers:
 *     ?RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1802D82AC (-RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804BE170 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x1804C3634 (-EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1804C7F68 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1804CBE90 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18009CC20 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009CC70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase.c)
 *     ??$MakeAndInitialize@VViewEventArgs@@V1@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgs@@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@8@@Z @ 0x18009CD04 (--$MakeAndInitialize@VViewEventArgs@@V1@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010D6A4 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1804C7F68 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 */

// Hidden C++ exception states: #wind=4
__int64 WindowEventDispatcher::RaiseViewEventWithPropertySet(
        __int64 a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        int a3,
        ...)
{
  AgileGitPtr *v6; // rsi
  __int64 v7; // rcx
  ConnectedStandbyHelper *v8; // rcx
  void *v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+38h] [rbp-8h] BYREF
  int v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF
  va_list va; // [rsp+78h] [rbp+38h]
  AgileGitPtr *v15; // [rsp+80h] [rbp+40h]
  va_list va1; // [rsp+88h] [rbp+48h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, AgileGitPtr *);
  v12 = a3;
  v6 = v15;
  if ( a3 == 4 )
  {
    v7 = *(_QWORD *)v15;
    v11 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    WindowEventDispatcher::RaiseViewEventWithPropertySet(a1, a2, 3LL, 0LL, &v11);
  }
  v11 = 0LL;
  if ( (int)Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgs,ViewEventArgs,enum Windows::Internal::Shell::ViewManagerInterop::ViewEventType &,Windows::Foundation::Collections::IPropertySet * &>(
              &v11,
              &v12,
              (__int64 *)va) >= 0 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
    if ( (int)AgileGitPtr::CopyLocal(v6, &GUID_c1659867_0cf6_5f3b_99df_4f036280926c, &v10) >= 0
      && (*(int (__fastcall **)(void *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64))(*(_QWORD *)v10 + 24LL))(
           v10,
           a2,
           v11) >= 0
      && !a3 )
    {
      v8 = *(ConnectedStandbyHelper **)(a1 + 352);
      if ( v8 )
        ConnectedStandbyHelper::HandleViewCreated(v8, a2);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  }
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase>::Release(v11);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v6);
}
