/*
 * XREFs of ??1_lambda_9620c4927177ac59b63d59d26cc18e5a_@@QEAA@XZ @ 0x18042E738
 * Callers:
 *     ??$?0V_lambda_9620c4927177ac59b63d59d26cc18e5a_@@@?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@QE$AAA@V_lambda_9620c4927177ac59b63d59d26cc18e5a_@@W4CallbackContext@Platform@@_N@Z @ 0x18042A348 (--$-0V_lambda_9620c4927177ac59b63d59d26cc18e5a_@@@-$TypedEventHandler@PE$AAUISwitchItemDataView@.c)
 *     _Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____lambda_9620c4927177ac59b63d59d26cc18e5a____::_1_::dtor$0 @ 0x18042A3FC (_Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multitasking--ISwitc.c)
 *     ??_E?$__abi_FunctorCapture@V_lambda_9620c4927177ac59b63d59d26cc18e5a_@@XPE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@3456@@Details@Platform@@UEAAPEAXI@Z @ 0x180430E80 (--_E-$__abi_FunctorCapture@V_lambda_9620c4927177ac59b63d59d26cc18e5a_@@XPE$AAUISwitchItemDataVie.c)
 *     ?AddCallback@MonitorFrame@@AEAAXXZ @ 0x1804310B4 (-AddCallback@MonitorFrame@@AEAAXXZ.c)
 *     _MonitorFrame::AddCallback_::_1_::dtor$0 @ 0x1804311A5 (_MonitorFrame--AddCallback_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall _lambda_9620c4927177ac59b63d59d26cc18e5a_::~_lambda_9620c4927177ac59b63d59d26cc18e5a_(
        _lambda_9620c4927177ac59b63d59d26cc18e5a_ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this);
}
