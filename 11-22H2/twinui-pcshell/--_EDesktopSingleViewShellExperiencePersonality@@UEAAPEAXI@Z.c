/*
 * XREFs of ??_EDesktopSingleViewShellExperiencePersonality@@UEAAPEAXI@Z @ 0x18017DA60
 * Callers:
 *     <none>
 * Callees:
 *     ??1DesktopSingleViewShellExperiencePersonality@@UEAA@XZ @ 0x18017DA9C (--1DesktopSingleViewShellExperiencePersonality@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

DesktopSingleViewShellExperiencePersonality *__fastcall DesktopSingleViewShellExperiencePersonality::`vector deleting destructor'(
        DesktopSingleViewShellExperiencePersonality *this,
        char a2)
{
  DesktopSingleViewShellExperiencePersonality::~DesktopSingleViewShellExperiencePersonality(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x28uLL);
  return this;
}
