/*
 * XREFs of _anonymous_namespace_::CreateGraphicsCaptureItem @ 0x18053D0D0
 * Callers:
 *     ?GetGraphicsCaptureItemForAllDisplays@ScreenClippingBrokerImpl@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18053D2A0 (-GetGraphicsCaptureItemForAllDisplays@ScreenClippingBrokerImpl@@EEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x180079874 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@AEAV_lambda_2c048fadf96b8b63389f9249f9153b42_@@@?$factory_cache_entry@UGraphicsCaptureItem@Capture@Graphics@Windows@winrt@@UIGraphicsCaptureItemInterop@@@impl@winrt@@QEAA?AU?$com_ptr@UIGraphicsCaptureItemInterop@@@2@AEAV_lambda_2c048fadf96b8b63389f9249f9153b42_@@@Z @ 0x18053CAB4 (--$call@AEAV_lambda_2c048fadf96b8b63389f9249f9153b42_@@@-$factory_cache_entry@UGraphicsCaptureIt.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall anonymous_namespace_::CreateGraphicsCaptureItem(
        _QWORD *a1,
        __int64 a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  signed int v4; // eax
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  _InterlockedIncrement64(&qword_1807B4598);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop> )
  {
    v6 = winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>
                                    + 8LL))(winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>);
    _InterlockedDecrement64(&qword_1807B4598);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B4598);
    winrt::impl::factory_cache_entry<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>::call<_lambda_2c048fadf96b8b63389f9249f9153b42_ &>(
      0LL,
      &v6,
      a3);
  }
  *a1 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, _QWORD *))(*(_QWORD *)v6 + 32LL))(
         v6,
         0LL,
         &winrt::impl::guid_v<winrt::Windows::Graphics::Capture::IGraphicsCaptureItem>,
         a1);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v6);
  return a1;
}
