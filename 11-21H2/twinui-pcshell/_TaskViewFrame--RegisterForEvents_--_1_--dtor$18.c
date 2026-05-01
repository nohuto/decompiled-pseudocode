/*
 * XREFs of _TaskViewFrame::RegisterForEvents_::_1_::dtor$18 @ 0x18021324B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskViewFrame::RegisterForEvents_::_1_::dtor_18(__int64 a1, __int64 a2)
{
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler>(*(_QWORD *)(a2 + 384));
}
