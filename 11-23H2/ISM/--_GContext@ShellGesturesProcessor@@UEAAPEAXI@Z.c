/*
 * XREFs of ??_GContext@ShellGesturesProcessor@@UEAAPEAXI@Z @ 0x18016ECE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1Context@ShellGesturesProcessor@@UEAA@XZ @ 0x18016EAD4 (--1Context@ShellGesturesProcessor@@UEAA@XZ.c)
 */

ShellGesturesProcessor::Context *__fastcall ShellGesturesProcessor::Context::`scalar deleting destructor'(
        ShellGesturesProcessor::Context *this,
        char a2)
{
  ShellGesturesProcessor::Context::~Context(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
