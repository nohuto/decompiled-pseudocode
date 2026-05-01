/*
 * XREFs of ??1?$ComPtr@VPenWorkspaceDiscoverBrokerFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x1803B2D38
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_PenWorkspaceDiscoverBrokerFactory_IUnknown__::_1_::dtor$2 @ 0x18021BFF6 (_Microsoft--WRL--Details--MakeAndInitialize_PenWorkspaceDiscoverBrokerFactory_IUnkn_ea_18021BFF6.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_PenWorkspaceScreenCaptureBroker_IUnknown__::_1_::dtor$1 @ 0x1803B44EA (_Microsoft--WRL--Details--MakeAndInitialize_PenWorkspaceScreenCaptureBroker_IUnknow_ea_1803B44EA.c)
 *     _DDAScreenCapture::GetScreenCaptureAsWicBitmapSource_::_1_::dtor$8 @ 0x1803B9D99 (_DDAScreenCapture--GetScreenCaptureAsWicBitmapSource_--_1_--dtor$8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
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
