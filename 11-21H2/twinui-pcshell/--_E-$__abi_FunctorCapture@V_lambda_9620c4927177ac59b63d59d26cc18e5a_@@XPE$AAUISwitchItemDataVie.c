/*
 * XREFs of ??_E?$__abi_FunctorCapture@V_lambda_9620c4927177ac59b63d59d26cc18e5a_@@XPE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@3456@@Details@Platform@@UEAAPEAXI@Z @ 0x180430E80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1_lambda_9620c4927177ac59b63d59d26cc18e5a_@@QEAA@XZ @ 0x18042E738 (--1_lambda_9620c4927177ac59b63d59d26cc18e5a_@@QEAA@XZ.c)
 */

_QWORD *__fastcall Platform::Details::__abi_FunctorCapture<_lambda_9620c4927177ac59b63d59d26cc18e5a_,void,Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  _lambda_9620c4927177ac59b63d59d26cc18e5a_::~_lambda_9620c4927177ac59b63d59d26cc18e5a_((_lambda_9620c4927177ac59b63d59d26cc18e5a_ *)(a1 + 1));
  *a1 = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
