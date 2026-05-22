/*
 * XREFs of ??4?$ComPtr@UIAsyncDeferral@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAsyncDeferral@Internal@Windows@@@Z @ 0x180115738
 * Callers:
 *     _lambda_525e999c26fbeca1a1e2a68ab2096671_::operator() @ 0x180115804 (_lambda_525e999c26fbeca1a1e2a68ab2096671_--operator().c)
 *     _lambda_4328ccf16b233a81f6b03adc706b18ed_::operator() @ 0x1801193D0 (_lambda_4328ccf16b233a81f6b03adc706b18ed_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Internal::IAsyncDeferral>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v5);
  }
  return a1;
}
