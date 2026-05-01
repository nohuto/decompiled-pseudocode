/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim__::_1_::dtor$12 @ 0x18024D0F9
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__ResumeCoro_1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim__::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 264) = *(_QWORD *)(a2 + 72) + 1040LL;
  *(_DWORD *)(a2 + 64) = **(_DWORD **)(a2 + 264);
  if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
  {
    *(_QWORD *)(a2 + 272) = *(_QWORD *)(a2 + 72) + 1040LL;
    *(_QWORD *)(a2 + 280) = *(_QWORD *)(a2 + 72) + 1040LL;
    *(_DWORD *)(a2 + 64) = **(_DWORD **)(a2 + 280);
    *(_DWORD *)(a2 + 288) = *(_DWORD *)(a2 + 64) & 0xFFFFFFFD;
    **(_DWORD **)(a2 + 272) = *(_DWORD *)(a2 + 288);
    *(_QWORD *)(a2 + 296) = *(_QWORD *)(a2 + 72) + 688LL;
    winrt::hstring::~hstring(*(void ***)(a2 + 296));
  }
}
