/*
 * XREFs of ??$call@AEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@?$factory_cache_entry@UGraphicsCaptureItem@Capture@Graphics@Windows@winrt@@UIGraphicsCaptureItemInterop@@@impl@winrt@@QEAA?A_PAEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@Z @ 0x1805F7844
 * Callers:
 *     _anonymous_namespace_::CreateGraphicsCaptureItem @ 0x1805F7BB0 (_anonymous_namespace_--CreateGraphicsCaptureItem.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18048EE5C (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     ??$get_activation_factory@UIGraphicsCaptureItemInterop@@@winrt@@YA?AU?$com_ptr@UIGraphicsCaptureItemInterop@@@0@AEBUhstring@param@0@@Z @ 0x1805F795C (--$get_activation_factory@UIGraphicsCaptureItemInterop@@@winrt@@YA-AU-$com_ptr@UIGraphicsCapture.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>::call<_lambda_8e1259a6fed20bb5259b923f46cb90bd_ &>(
        __int64 a1,
        _QWORD *a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  void (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  bool v7; // zf
  _BYTE v9[40]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+20h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+30h] BYREF
  __int64 v12; // [rsp+88h] [rbp+38h] BYREF

  v11 = a3;
  v10 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v9,
    L"Windows.Graphics.Capture.GraphicsCaptureItem",
    44);
  winrt::get_activation_factory<IGraphicsCaptureItemInterop>(&v11, v9);
  v4 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v11;
  if ( v11 )
  {
    v10 = 0LL;
    (**v11)(v11, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10);
    v5 = v10;
    v12 = v10;
  }
  else
  {
    v12 = 0LL;
    v5 = 0LL;
  }
  if ( v5 )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v12);
    _InterlockedIncrement64(&qword_18098EAB8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>,
            (signed __int64)v11,
            0LL) )
    {
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098EAC0);
    }
    v6 = winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>;
    *a2 = winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    _InterlockedDecrement64(&qword_18098EAB8);
    v7 = v11 == 0LL;
  }
  else
  {
    *a2 = v4;
    if ( v4 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v4)[1])(v4);
    v7 = v4 == 0LL;
  }
  if ( !v7 )
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v11);
  return a2;
}
