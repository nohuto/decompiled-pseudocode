/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged$_ResumeCoro$1_::_1_::dtor$1 @ 0x18025B5E9
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UTabTipAdapter@KeyboardHosting@@@winrt@@QEAA@XZ @ 0x1800353C4 (--1-$com_ptr@UTabTipAdapter@KeyboardHosting@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 144) + 24LL;
  return winrt::com_ptr<KeyboardHosting::TabTipAdapter>::~com_ptr<KeyboardHosting::TabTipAdapter>(*(_QWORD **)(a2 + 48));
}
