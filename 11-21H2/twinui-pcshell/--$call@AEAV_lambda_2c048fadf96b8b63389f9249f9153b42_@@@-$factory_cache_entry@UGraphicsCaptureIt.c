/*
 * XREFs of ??$call@AEAV_lambda_2c048fadf96b8b63389f9249f9153b42_@@@?$factory_cache_entry@UGraphicsCaptureItem@Capture@Graphics@Windows@winrt@@UIGraphicsCaptureItemInterop@@@impl@winrt@@QEAA?AU?$com_ptr@UIGraphicsCaptureItemInterop@@@2@AEAV_lambda_2c048fadf96b8b63389f9249f9153b42_@@@Z @ 0x18053CAB4
 * Callers:
 *     _anonymous_namespace_::CreateGraphicsCaptureItem @ 0x18053D0D0 (_anonymous_namespace_--CreateGraphicsCaptureItem.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x180079874 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIGraphicsCaptureItemInterop@@@winrt@@YA?AU?$com_ptr@UIGraphicsCaptureItemInterop@@@0@AEBUhstring@param@0@@Z @ 0x18053CBE0 (--$get_activation_factory@UIGraphicsCaptureItemInterop@@@winrt@@YA-AU-$com_ptr@UIGraphicsCapture.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>::call<_lambda_2c048fadf96b8b63389f9249f9153b42_ &>(
        __int64 a1,
        _QWORD *a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  void (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v5; // rax
  bool v6; // si
  bool v7; // zf
  __int64 v8; // rcx
  _BYTE v10[32]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v12 = a3;
  v11 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v10,
    L"Windows.Graphics.Capture.GraphicsCaptureItem",
    44LL);
  winrt::get_activation_factory<IGraphicsCaptureItemInterop>(&v12, v10);
  v4 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  if ( v12 )
  {
    v11 = 0LL;
    (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11);
    v5 = v11;
  }
  else
  {
    v5 = 0LL;
  }
  v13 = v5;
  v6 = v5 != 0;
  if ( v5 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v13);
  if ( v6 )
  {
    _InterlockedIncrement64(&qword_1807B4598);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B45A0);
    }
    v8 = winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>;
    *a2 = winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    _InterlockedDecrement64(&qword_1807B4598);
    v7 = v12 == 0LL;
  }
  else
  {
    *a2 = v4;
    if ( v4 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v4)[1])(v4);
    v7 = v4 == 0LL;
  }
  if ( !v7 )
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v12);
  return a2;
}
