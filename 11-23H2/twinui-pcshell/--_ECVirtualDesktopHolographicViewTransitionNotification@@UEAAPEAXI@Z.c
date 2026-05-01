/*
 * XREFs of ??_ECVirtualDesktopHolographicViewTransitionNotification@@UEAAPEAXI@Z @ 0x1801B8C30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVirtualDesktopHolographicViewTransitionNotification@@UEAA@XZ @ 0x1801B8C6C (--1CVirtualDesktopHolographicViewTransitionNotification@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CVirtualDesktopHolographicViewTransitionNotification *__fastcall CVirtualDesktopHolographicViewTransitionNotification::`vector deleting destructor'(
        CVirtualDesktopHolographicViewTransitionNotification *this,
        char a2)
{
  CVirtualDesktopHolographicViewTransitionNotification::~CVirtualDesktopHolographicViewTransitionNotification(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x40uLL);
  return this;
}
