/*
 * XREFs of ??_ECortanaDesktopExperienceView@@UEAAPEAXI@Z @ 0x180480B30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x180480968 (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 */

CortanaDesktopExperienceView *__fastcall CortanaDesktopExperienceView::`vector deleting destructor'(
        CortanaDesktopExperienceView *this,
        char a2)
{
  CortanaDesktopExperienceView::~CortanaDesktopExperienceView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
