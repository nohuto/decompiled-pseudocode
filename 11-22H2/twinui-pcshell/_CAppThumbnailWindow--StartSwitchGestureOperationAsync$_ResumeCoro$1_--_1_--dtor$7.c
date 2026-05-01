/*
 * XREFs of _CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1_::_1_::dtor$7 @ 0x180210D3C
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall CAppThumbnailWindow::StartSwitchGestureOperationAsync__ResumeCoro_1_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 128) = *(_QWORD *)(a2 + 56) + 168LL;
  winrt::hstring::~hstring(*(void ***)(a2 + 128));
}
