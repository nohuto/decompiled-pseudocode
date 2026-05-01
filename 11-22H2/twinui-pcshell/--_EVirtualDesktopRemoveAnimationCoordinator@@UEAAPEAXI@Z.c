/*
 * XREFs of ??_EVirtualDesktopRemoveAnimationCoordinator@@UEAAPEAXI@Z @ 0x180596AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1ItemAnimationCoordinatorBase@@QEAA@XZ @ 0x18058A970 (--1ItemAnimationCoordinatorBase@@QEAA@XZ.c)
 */

VirtualDesktopRemoveAnimationCoordinator *__fastcall VirtualDesktopRemoveAnimationCoordinator::`vector deleting destructor'(
        VirtualDesktopRemoveAnimationCoordinator *this,
        char a2)
{
  *((_DWORD *)this + 61) = -1073741823;
  ItemAnimationCoordinatorBase::~ItemAnimationCoordinatorBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
