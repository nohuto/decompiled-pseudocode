/*
 * XREFs of _SuppressViewTransition::SuppressViewTransition_::_1_::dtor$0 @ 0x1801EA52A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SuppressViewTransition::SuppressViewTransition_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 8LL));
}
