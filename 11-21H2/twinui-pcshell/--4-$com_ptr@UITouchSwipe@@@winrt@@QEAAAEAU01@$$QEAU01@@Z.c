/*
 * XREFs of ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18058DD80
 * Callers:
 *     ?FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU?$com_ptr@UITouchSwipe@@@winrt@@@Z @ 0x18058E0B4 (-FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU-$com_ptr@UITouchSwipe@@@winrt@@@.c)
 *     ?FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x18058E234 (-FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ @ 0x18058E728 (-HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ.c)
 *     ?PointersUp@TouchGestureProcessor@@QEAAXXZ @ 0x18058F198 (-PointersUp@TouchGestureProcessor@@QEAAXXZ.c)
 *     ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x18058F7C8 (-StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

__int64 *__fastcall winrt::com_ptr<ITouchSwipe>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax

  if ( a1 != a2 )
  {
    if ( *a1 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a1);
    v4 = *a2;
    *a2 = 0LL;
    *a1 = v4;
  }
  return a1;
}
