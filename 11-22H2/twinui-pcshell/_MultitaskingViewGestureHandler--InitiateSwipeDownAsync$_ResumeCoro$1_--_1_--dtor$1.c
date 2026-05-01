/*
 * XREFs of _MultitaskingViewGestureHandler::InitiateSwipeDownAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x18020D786
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x180391844 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::InitiateSwipeDownAsync__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(a2 + 64) + 24LL;
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(*(_QWORD *)(a2 + 88));
}
