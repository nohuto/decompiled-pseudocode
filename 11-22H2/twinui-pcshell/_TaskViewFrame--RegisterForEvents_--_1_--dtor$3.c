/*
 * XREFs of _TaskViewFrame::RegisterForEvents_::_1_::dtor$3 @ 0x1802C37DF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskViewFrame::RegisterForEvents_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewContainerNavigationEventHandler>(*(_QWORD *)(a2 + 224));
}
