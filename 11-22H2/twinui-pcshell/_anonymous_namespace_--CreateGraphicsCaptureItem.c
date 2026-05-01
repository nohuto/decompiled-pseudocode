/*
 * XREFs of _anonymous_namespace_::CreateGraphicsCaptureItem @ 0x1805F7BB0
 * Callers:
 *     ?GetGraphicsCaptureItemForAllDisplays@ScreenClippingBrokerImpl@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805F7D90 (-GetGraphicsCaptureItemForAllDisplays@ScreenClippingBrokerImpl@@EEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18048EE5C (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     ??$call@AEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@?$factory_cache_entry@UGraphicsCaptureItem@Capture@Graphics@Windows@winrt@@UIGraphicsCaptureItemInterop@@@impl@winrt@@QEAA?A_PAEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@Z @ 0x1805F7844 (--$call@AEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@-$factory_cache_entry@UGraphicsCaptureIt.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall anonymous_namespace_::CreateGraphicsCaptureItem(
        _QWORD *a1,
        __int64 a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  __int64 v4; // rbx
  signed int v5; // eax
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  _InterlockedIncrement64(&qword_18098EAB8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop> )
  {
    v7 = winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>
                                    + 8LL))(winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>);
    _InterlockedDecrement64(&qword_18098EAB8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098EAB8);
    winrt::impl::factory_cache_entry<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>::call<_lambda_8e1259a6fed20bb5259b923f46cb90bd_ &>(
      0LL,
      &v7,
      a3);
  }
  *a1 = 0LL;
  v4 = v7;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, _QWORD *))(*(_QWORD *)v7 + 32LL))(
         v7,
         0LL,
         &winrt::impl::guid_v<winrt::Windows::Graphics::Capture::IGraphicsCaptureItem>,
         a1);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  if ( v4 )
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v7);
  return a1;
}
