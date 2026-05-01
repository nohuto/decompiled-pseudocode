/*
 * XREFs of ??_GSnapAssistViewInvocationAnimationCoordinator@@UEAAPEAXI@Z @ 0x1804B4F50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1MultitaskingViewAnimationCoordinatorBase@@QEAA@XZ @ 0x1804B39C4 (--1MultitaskingViewAnimationCoordinatorBase@@QEAA@XZ.c)
 */

SnapAssistViewInvocationAnimationCoordinator *__fastcall SnapAssistViewInvocationAnimationCoordinator::`scalar deleting destructor'(
        SnapAssistViewInvocationAnimationCoordinator *this,
        char a2)
{
  *((_DWORD *)this + 57) = -1073741823;
  MultitaskingViewAnimationCoordinatorBase::~MultitaskingViewAnimationCoordinatorBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
