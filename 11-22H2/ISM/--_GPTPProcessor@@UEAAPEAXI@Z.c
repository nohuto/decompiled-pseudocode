/*
 * XREFs of ??_GPTPProcessor@@UEAAPEAXI@Z @ 0x1801F8450
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1PTPProcessor@@UEAA@XZ @ 0x1801F8410 (--1PTPProcessor@@UEAA@XZ.c)
 */

PTPProcessor *__fastcall PTPProcessor::`scalar deleting destructor'(PTPProcessor *this, char a2)
{
  PTPProcessor::~PTPProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
