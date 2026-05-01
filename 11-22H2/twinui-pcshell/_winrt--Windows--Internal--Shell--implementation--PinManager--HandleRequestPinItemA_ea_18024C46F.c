/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_InitCoro$2_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$0 @ 0x18024C46F
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__InitCoro_2_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 96) + 10LL) )
  {
    *(_QWORD *)(a2 + 112) = 545LL;
    *(_QWORD *)(a2 + 120) = *(_QWORD *)(a2 + 96) - 112LL;
    operator delete(*(void **)(a2 + 120));
  }
}
