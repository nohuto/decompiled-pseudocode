/*
 * XREFs of ??_ECVirtualDesktopForegroundPolicy@@UEAAPEAXI@Z @ 0x1805FC690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CVirtualDesktopForegroundPolicy@@UEAA@XZ @ 0x1805FC644 (--1CVirtualDesktopForegroundPolicy@@UEAA@XZ.c)
 */

CVirtualDesktopForegroundPolicy *__fastcall CVirtualDesktopForegroundPolicy::`vector deleting destructor'(
        CVirtualDesktopForegroundPolicy *this,
        char a2)
{
  CVirtualDesktopForegroundPolicy::~CVirtualDesktopForegroundPolicy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
