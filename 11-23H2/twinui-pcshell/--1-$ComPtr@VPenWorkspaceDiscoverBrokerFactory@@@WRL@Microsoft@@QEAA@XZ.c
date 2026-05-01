/*
 * XREFs of ??1?$ComPtr@VPenWorkspaceDiscoverBrokerFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x18048C448
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_PenWorkspaceDiscoverBrokerFactory_IUnknown__::_1_::dtor$2 @ 0x1802B59CE (_Microsoft--WRL--Details--MakeAndInitialize_PenWorkspaceDiscoverBrokerFactory_IUnkn_ea_1802B59CE.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_PenWorkspaceScreenCaptureBroker_IUnknown__::_1_::dtor$1 @ 0x18048DC12 (_Microsoft--WRL--Details--MakeAndInitialize_PenWorkspaceScreenCaptureBroker_IUnknow_ea_18048DC12.c)
 *     _DDAScreenCapture::GetScreenCaptureAsWicBitmapSource_::_1_::dtor$8 @ 0x180492CCD (_DDAScreenCapture--GetScreenCaptureAsWicBitmapSource_--_1_--dtor$8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr<PenWorkspaceDiscoverBrokerFactory>::~ComPtr<PenWorkspaceDiscoverBrokerFactory>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
