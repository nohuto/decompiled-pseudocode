/*
 * XREFs of ?GetDeferral@CResultBase@Internal@Windows@@QEAAPEAUIAsyncDeferral@23@XZ @ 0x180116CB0
 * Callers:
 *     _lambda_525e999c26fbeca1a1e2a68ab2096671_::operator() @ 0x180115804 (_lambda_525e999c26fbeca1a1e2a68ab2096671_--operator().c)
 *     _lambda_4328ccf16b233a81f6b03adc706b18ed_::operator() @ 0x1801193D0 (_lambda_4328ccf16b233a81f6b03adc706b18ed_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

struct Windows::Internal::IAsyncDeferral *__fastcall Windows::Internal::CResultBase::GetDeferral(
        Windows::Internal::CResultBase *this)
{
  void (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))this;
  v6 = 0LL;
  v3 = **v1;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v6);
  v3(v1, &GUID_5fb52445_1407_4f25_9aa4_ac25bb3a9606, &v6);
  v4 = v6;
  *((_BYTE *)this + 9) = 1;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v6);
  return (struct Windows::Internal::IAsyncDeferral *)v4;
}
