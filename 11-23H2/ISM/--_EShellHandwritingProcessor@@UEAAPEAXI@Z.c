/*
 * XREFs of ??_EShellHandwritingProcessor@@UEAAPEAXI@Z @ 0x180063F90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1ShellHandwritingProcessor@@UEAA@XZ @ 0x180063F5C (--1ShellHandwritingProcessor@@UEAA@XZ.c)
 */

BamoInputSystemPrincipal **__fastcall ShellHandwritingProcessor::`vector deleting destructor'(
        BamoInputSystemPrincipal **this,
        char a2)
{
  ShellHandwritingProcessor::~ShellHandwritingProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
