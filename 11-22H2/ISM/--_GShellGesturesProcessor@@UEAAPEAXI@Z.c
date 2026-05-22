/*
 * XREFs of ??_GShellGesturesProcessor@@UEAAPEAXI@Z @ 0x1801C5C80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1ShellGesturesProcessor@@UEAA@XZ @ 0x1801C5A78 (--1ShellGesturesProcessor@@UEAA@XZ.c)
 */

void **__fastcall ShellGesturesProcessor::`scalar deleting destructor'(void **this, char a2)
{
  ShellGesturesProcessor::~ShellGesturesProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
