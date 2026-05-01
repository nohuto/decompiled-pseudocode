/*
 * XREFs of ??_GSearchAppDesktopExperienceView@@UEAAPEAXI@Z @ 0x180398710
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1SearchAppDesktopExperienceView@@UEAA@XZ @ 0x1803983F4 (--1SearchAppDesktopExperienceView@@UEAA@XZ.c)
 */

SearchAppDesktopExperienceView *__fastcall SearchAppDesktopExperienceView::`scalar deleting destructor'(
        SearchAppDesktopExperienceView *this,
        char a2)
{
  SearchAppDesktopExperienceView::~SearchAppDesktopExperienceView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
