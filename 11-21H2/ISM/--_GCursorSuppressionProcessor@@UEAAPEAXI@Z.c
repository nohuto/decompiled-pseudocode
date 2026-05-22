/*
 * XREFs of ??_GCursorSuppressionProcessor@@UEAAPEAXI@Z @ 0x180138290
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1CursorSuppressionProcessor@@UEAA@XZ @ 0x1801381C0 (--1CursorSuppressionProcessor@@UEAA@XZ.c)
 */

CursorSuppressionProcessor *__fastcall CursorSuppressionProcessor::`scalar deleting destructor'(
        CursorSuppressionProcessor *this,
        char a2)
{
  CursorSuppressionProcessor::~CursorSuppressionProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
