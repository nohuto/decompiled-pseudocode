/*
 * XREFs of MultitaskingViewGestureHandler::InitiateSwipeDownAsync$_InitCoro$2 @ 0x18020D340
 * Callers:
 *     ?InitiateSwipeDownAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@UInputGestureOperation@Input@Internal@UI@Windows@3@AEBUInputGestureOperationEventArgs@56783@@Z @ 0x18020D868 (-InitiateSwipeDownAsync@MultitaskingViewGestureHandler@@AEAA-AUfire_and_forget@winrt@@UInputGest.c)
 * Callees:
 *     MultitaskingViewGestureHandler::InitiateSwipeDownAsync$_ResumeCoro$1 @ 0x18020D440 (MultitaskingViewGestureHandler--InitiateSwipeDownAsync$_ResumeCoro$1.c)
 *     _MultitaskingViewGestureHandler::InitiateSwipeDownAsync_::_15_::_parameters_::_parameters_ @ 0x18054BE50 (_MultitaskingViewGestureHandler--InitiateSwipeDownAsync_--_15_--_parameters_--_parameters_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MultitaskingViewGestureHandler::InitiateSwipeDownAsync__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _DWORD *v7; // r10
  _BYTE *v8; // r11

  MultitaskingViewGestureHandler::InitiateSwipeDownAsync_::_15_::_parameters_::_parameters_(
    (char *)a2 + 170,
    a6,
    a4,
    a5);
  *(_QWORD *)a2 = MultitaskingViewGestureHandler::InitiateSwipeDownAsync__ResumeCoro_1;
  a2[2] = *v7 != 0 ? 2 : 65538;
  *v8 = 0;
  *((_BYTE *)a2 + 169) = 0;
  return MultitaskingViewGestureHandler::InitiateSwipeDownAsync__ResumeCoro_1(a2);
}
