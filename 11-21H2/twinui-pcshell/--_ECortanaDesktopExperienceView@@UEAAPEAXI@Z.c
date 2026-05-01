/*
 * XREFs of ??_ECortanaDesktopExperienceView@@UEAAPEAXI@Z @ 0x1803A5720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x1803A543C (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 */

CortanaDesktopExperienceView *__fastcall CortanaDesktopExperienceView::`vector deleting destructor'(
        CortanaDesktopExperienceView *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CortanaDesktopExperienceView::~CortanaDesktopExperienceView(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
