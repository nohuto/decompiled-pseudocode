/*
 * XREFs of ??_GShellExperienceView@Cortana@TwinUI@@UEAAPEAXI@Z @ 0x18042A4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ @ 0x18042A144 (--1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ.c)
 */

volatile signed __int32 **__fastcall TwinUI::Cortana::ShellExperienceView::`scalar deleting destructor'(
        volatile signed __int32 **this,
        char a2)
{
  TwinUI::Cortana::ShellExperienceView::~ShellExperienceView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
