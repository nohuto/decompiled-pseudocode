/*
 * XREFs of _CopilotHotkeyManager::IsTargetAppWindow_::_1_::dtor$0 @ 0x18027160F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CopilotHotkeyManager::IsTargetAppWindow_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(*(void **)(a2 + 80), a2);
}
