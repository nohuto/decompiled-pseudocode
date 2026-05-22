/*
 * XREFs of ??_GCursorSuppressionProcessor@@UEAAPEAXI@Z @ 0x180158220
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1CursorSuppressionProcessor@@UEAA@XZ @ 0x1801581B0 (--1CursorSuppressionProcessor@@UEAA@XZ.c)
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
