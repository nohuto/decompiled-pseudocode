/*
 * XREFs of ?StartDrag@TabletModeViewManager@@UEAAJUtagPOINT@@@Z @ 0x1805C4940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabletModeViewManager::StartDrag(TabletModeViewManager *this, struct tagPOINT a2)
{
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))TabletModeViewManager::StartSwipeHelper)(
           (char *)this - 104,
           0LL,
           a2,
           1LL);
}
