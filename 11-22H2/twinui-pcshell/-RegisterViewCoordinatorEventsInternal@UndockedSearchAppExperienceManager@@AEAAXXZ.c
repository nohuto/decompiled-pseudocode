/*
 * XREFs of ?RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B363C
 * Callers:
 *     _lambda_d1ff7bb2acfe3360b50ca45b6d833a46_::operator() @ 0x1801E9B54 (_lambda_d1ff7bb2acfe3360b50ca45b6d833a46_--operator().c)
 * Callees:
 *     ?HideViewRequested@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x180017BC8 (-HideViewRequested@-$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator_ea_180017BC8.c)
 *     ??$call@P6A?AUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUIViewCoordinatorStatics@2345@@Z@?$factory_cache_entry@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIViewCoordinatorStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUViewCoordinator@Shell@UI@WindowsUdk@2@AEBUIViewCoordinatorStatics@4562@@Z@Z @ 0x180017E84 (--$call@P6A-AUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUIViewCoordinatorStatics@2345@@Z@-$f.c)
 *     ?Current@?$consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics@UIViewCoordinatorStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180018018 (-Current@-$consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics@UIViewCoordinatorStatics@Shell@UI.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::ViewVisibilityChangedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::ViewVisibilityChangedEventArgs___lambda_352628a2d1ddb7fdbe9aad4ec4f36b56___ @ 0x1800B3868 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ViewCoo_ea_1800B3868.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_5e82962a6040908e6ed2656b2b7c60f3___ @ 0x1800B38EC (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ViewCoo_ea_1800B38EC.c)
 *     ??$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800B52B4 (--$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienc.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall UndockedSearchAppExperienceManager::RegisterViewCoordinatorEventsInternal(RTL_SRWLOCK *this)
{
  __int64 *v2; // rax
  int v3; // eax
  RTL_SRWLOCK *v4; // rbx
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // rcx
  _QWORD *Ptr; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  void *v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h] BYREF
  void (__fastcall *v12[3])(__int64, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 *v16; // [rsp+98h] [rbp+28h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+38h] BYREF

  v17 = 0LL;
  v16 = &v17;
  v2 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v16);
  v3 = Microsoft::WRL::AsWeak<UndockedSearchAppExperienceManager>(this, v2);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  AcquireSRWLockExclusive(this + 36);
  v12[1] = (void (__fastcall *)(__int64, __int64 *))&this[36];
  v18 = 0LL;
  v4 = this + 37;
  if ( (unsigned __int8)winrt::Windows::Foundation::operator==(&this[37], &v18) )
  {
    v12[2] = (void (__fastcall *)(__int64, __int64 *))&qword_18098E048;
    _InterlockedIncrement64(&qword_18098E048);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics> )
    {
      winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics<winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::Current(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>,
        &v16);
      _InterlockedDecrement64(&qword_18098E048);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098E048);
      v12[0] = (void (__fastcall *)(__int64, __int64 *))_lambda_80fc32ba40679525b9bdda7c054c7fb2_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::call<winrt::WindowsUdk::UI::Shell::ViewCoordinator (*)(winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics const &)>(
        v5,
        (__int64)&v16,
        v12);
    }
    winrt::Windows::Foundation::IUnknown::operator=(&this[37], &v16);
    if ( v16 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  }
  if ( !this[38].Ptr )
  {
    v14[0] = v17;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v14[1] = this;
    winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_5e82962a6040908e6ed2656b2b7c60f3___(
      &v18,
      v14);
    this[38].Ptr = *(PVOID *)winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::HideViewRequested(
                               &this[37].Ptr,
                               &v13,
                               &v18);
    if ( v18 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  }
  if ( !this[39].Ptr )
  {
    v15[0] = v17;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v15[1] = this;
    winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::ViewVisibilityChangedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::ViewVisibilityChangedEventArgs___lambda_352628a2d1ddb7fdbe9aad4ec4f36b56___(
      &v11,
      v15);
    v10 = 0LL;
    Ptr = v4->Ptr;
    v7 = *(_QWORD *)v4->Ptr;
    v8 = v11;
    v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, void **))(v7 + 80))(Ptr, v11, &v10);
    if ( v9 < 0 )
      winrt::throw_hresult((unsigned int)v9);
    this[39].Ptr = v10;
    if ( v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  }
  if ( this != (RTL_SRWLOCK *)-288LL )
    ReleaseSRWLockExclusive(this + 36);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
}
