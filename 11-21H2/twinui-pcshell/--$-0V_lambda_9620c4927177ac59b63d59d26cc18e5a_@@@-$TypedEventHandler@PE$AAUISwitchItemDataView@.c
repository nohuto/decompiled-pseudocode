/*
 * XREFs of ??$?0V_lambda_9620c4927177ac59b63d59d26cc18e5a_@@@?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@QE$AAA@V_lambda_9620c4927177ac59b63d59d26cc18e5a_@@W4CallbackContext@Platform@@_N@Z @ 0x18042A348
 * Callers:
 *     ?AddCallback@MonitorFrame@@AEAAXXZ @ 0x1804310B4 (-AddCallback@MonitorFrame@@AEAAXXZ.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1800132F4 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ??0_lambda_9620c4927177ac59b63d59d26cc18e5a_@@QEAA@AEBV0@@Z @ 0x18042D018 (--0_lambda_9620c4927177ac59b63d59d26cc18e5a_@@QEAA@AEBV0@@Z.c)
 *     ??1_lambda_9620c4927177ac59b63d59d26cc18e5a_@@QEAA@XZ @ 0x18042E738 (--1_lambda_9620c4927177ac59b63d59d26cc18e5a_@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>(
        _QWORD *a1,
        const struct _lambda_9620c4927177ac59b63d59d26cc18e5a_ *a2)
{
  _QWORD *v4; // rdi
  const struct _lambda_9620c4927177ac59b63d59d26cc18e5a_ *v5; // rbx
  _BYTE v7[56]; // [rsp+20h] [rbp-38h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    v5 = _lambda_9620c4927177ac59b63d59d26cc18e5a_::_lambda_9620c4927177ac59b63d59d26cc18e5a_(
           (_lambda_9620c4927177ac59b63d59d26cc18e5a_ *)v7,
           a2);
    *v4 = &Platform::Details::__abi_FunctorCapture<_lambda_9620c4927177ac59b63d59d26cc18e5a_,void,Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vftable';
    _lambda_9620c4927177ac59b63d59d26cc18e5a_::_lambda_9620c4927177ac59b63d59d26cc18e5a_(
      (_lambda_9620c4927177ac59b63d59d26cc18e5a_ *)(a1 + 6),
      v5);
    _lambda_9620c4927177ac59b63d59d26cc18e5a_::~_lambda_9620c4927177ac59b63d59d26cc18e5a_(v5);
  }
  a1[37] = v4;
  _lambda_9620c4927177ac59b63d59d26cc18e5a_::~_lambda_9620c4927177ac59b63d59d26cc18e5a_(a2);
  return a1;
}
