/*
 * XREFs of ?StartDismissAnimation@TouchEdgeGripperWindow@@AEAAXXZ @ 0x18065C390
 * Callers:
 *     ?Dismiss@TouchEdgeGripperWindow@@QEAAX_N@Z @ 0x18065B170 (-Dismiss@TouchEdgeGripperWindow@@QEAAX_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Completed@?$consume_Windows_UI_Composition_ICompositionScopedBatch@UICompositionScopedBatch@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UCompositionBatchCompletedEventArgs@Composition@UI@34@@Foundation@Windows@3@@Z @ 0x18055584C (-Completed@-$consume_Windows_UI_Composition_ICompositionScopedBatch@UICompositionScopedBatch@Com.c)
 *     ?CreateScopedBatch@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4CompositionBatchTypes@Composition@UI@Windows@3@@Z @ 0x18055715C (-CreateScopedBatch@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Wind.c)
 *     ?End@?$consume_Windows_UI_Composition_ICompositionScopedBatch@UICompositionScopedBatch@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180558B44 (-End@-$consume_Windows_UI_Composition_ICompositionScopedBatch@UICompositionScopedBatch@Compositi.c)
 *     ??$call@AEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@?$factory_cache_entry@UElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@UIElementCompositionPreviewStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@Z @ 0x180657B5C (--$call@AEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@-$factory_cache_entry@UElementCompositio.c)
 *     ?Compositor@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180659298 (-Compositor@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@w.c)
 *     ?GetElementVisual@?$consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics@UIElementCompositionPreviewStatics@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUUIElement@Xaml@UI@Windows@3@@Z @ 0x18065B320 (-GetElementVisual@-$consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics@UIElementC.c)
 *     ?StartAnimation@?$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUICompositionAnimationBase@Composition@UI@Windows@3@@Z @ 0x18065C2EC (-StartAnimation@-$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@wi.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall TouchEdgeGripperWindow::StartDismissAnimation(TouchEdgeGripperWindow *this)
{
  __int64 *v2; // rsi
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rcx
  winrt::Windows::Foundation::IUnknown *v4; // rax
  _QWORD *v5; // rdi
  volatile __int64 *v6; // rax
  signed __int64 v7; // rdx
  bool v8; // zf
  signed __int64 v9; // rax
  __int64 *v10; // rax
  volatile __int64 *v11; // rcx
  void (__fastcall ***v12)(_QWORD, void *, __int64 **); // rcx
  __int64 *v13; // rbx
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  __int64 *v16; // [rsp+30h] [rbp-49h] BYREF
  volatile __int64 *v17; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-39h] BYREF
  __int64 *v19; // [rsp+48h] [rbp-31h] BYREF
  __int64 v20; // [rsp+50h] [rbp-29h] BYREF
  TouchEdgeGripperWindow *v21; // [rsp+58h] [rbp-21h]
  __int64 v22; // [rsp+60h] [rbp-19h] BYREF
  __int64 v23; // [rsp+68h] [rbp-11h] BYREF
  __int64 *v24; // [rsp+70h] [rbp-9h] BYREF
  __int64 *v25; // [rsp+78h] [rbp-1h]
  __int64 **v26; // [rsp+80h] [rbp+7h] BYREF
  __int64 v27; // [rsp+88h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+90h] [rbp+17h] BYREF

  v2 = (__int64 *)((char *)this + 120);
  v3 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*((_QWORD *)this + 15);
  if ( v3 )
  {
    v16 = 0LL;
    (**v3)(v3, (__int64 *)&winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement>, (__int64 *)&v16);
    v19 = v16;
  }
  else
  {
    v19 = 0LL;
  }
  v26 = &v19;
  v25 = &qword_180991708;
  _InterlockedIncrement64(&qword_180991708);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics> )
  {
    winrt::impl::consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>::GetElementVisual(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>,
      &v20,
      &v19);
    _InterlockedDecrement64(&qword_180991708);
  }
  else
  {
    _InterlockedDecrement64(&qword_180991708);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>::call<_lambda_03a02509df9e18a447667afbdd5db963_ &>(
      v3,
      (__int64)&v20,
      &v26);
  }
  winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::Compositor(
    &v20,
    &v22);
  if ( v20 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
  if ( v19 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  v18 = 1;
  v4 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScopedBatch(
                                                 &v22,
                                                 &v23,
                                                 &v18);
  v5 = (_QWORD *)((char *)this + 152);
  winrt::Windows::Foundation::IUnknown::operator=((TouchEdgeGripperWindow *)((char *)this + 152), v4);
  if ( v23 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
  v6 = 0LL;
  if ( this )
  {
    v21 = this;
    v7 = *((_QWORD *)this + 1);
    while ( v7 >= 0 )
    {
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 1, v7 + 1, v7);
      v8 = v7 == v9;
      v7 = v9;
      if ( v8 )
        goto LABEL_19;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v7 + 24), 1u);
LABEL_19:
    v6 = (volatile __int64 *)v21;
  }
  v21 = 0LL;
  v17 = v6;
  v25 = (__int64 *)&v17;
  v10 = (__int64 *)operator new(0x18uLL);
  v25 = v10;
  v11 = v17;
  v17 = 0LL;
  v10[1] = (__int64)v11;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v10 + 4) = 1;
  *v10 = (__int64)off_1807C8648;
  v16 = v10;
  if ( v17 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v17);
  winrt::impl::consume_Windows_UI_Composition_ICompositionScopedBatch<winrt::Windows::UI::Composition::ICompositionScopedBatch>::Completed(
    (_QWORD *)this + 19,
    &v27,
    &v16);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  v12 = (void (__fastcall ***)(_QWORD, void *, __int64 **))*((_QWORD *)this + 18);
  if ( v12 )
  {
    v24 = 0LL;
    (**v12)(v12, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>, &v24);
    v13 = v24;
    v16 = v24;
  }
  else
  {
    v16 = 0LL;
    v13 = 0LL;
  }
  winrt::impl::consume_Windows_UI_Xaml_IUIElement9<winrt::Windows::UI::Xaml::UIElement>::StartAnimation(v2, &v16);
  if ( v13 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  v15 = (_DWORD *)wil::details::static_lazy<TouchGestureLogging>::get(
                    v14,
                    (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)[1];
  if ( *v15 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v15, (unsigned __int8 *)dword_1808717F0, 0LL, 0LL, 2u, &v28);
  winrt::impl::consume_Windows_UI_Composition_ICompositionScopedBatch<winrt::Windows::UI::Composition::ICompositionScopedBatch>::End(v5);
  if ( v22 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
}
