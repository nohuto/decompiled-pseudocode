/*
 * XREFs of ??_GSnapAssistViewDismissalAnimationCoordinator@@UEAAPEAXI@Z @ 0x1804B54C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1MultitaskingViewAnimationCoordinatorBase@@QEAA@XZ @ 0x1804B39C4 (--1MultitaskingViewAnimationCoordinatorBase@@QEAA@XZ.c)
 */

SnapAssistViewDismissalAnimationCoordinator *__fastcall SnapAssistViewDismissalAnimationCoordinator::`scalar deleting destructor'(
        SnapAssistViewDismissalAnimationCoordinator *this,
        char a2)
{
  *((_DWORD *)this + 59) = -1073741823;
  MultitaskingViewAnimationCoordinatorBase::~MultitaskingViewAnimationCoordinatorBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
