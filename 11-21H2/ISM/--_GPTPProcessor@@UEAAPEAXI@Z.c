/*
 * XREFs of ??_GPTPProcessor@@UEAAPEAXI@Z @ 0x1801CC6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1PTPProcessor@@UEAA@XZ @ 0x1801CC67C (--1PTPProcessor@@UEAA@XZ.c)
 */

PTPProcessor *__fastcall PTPProcessor::`scalar deleting destructor'(PTPProcessor *this, char a2)
{
  PTPProcessor::~PTPProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
