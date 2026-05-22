/*
 * XREFs of ??_GCursorProcessor@@UEAAPEAXI@Z @ 0x180158A60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1CursorProcessor@@UEAA@XZ @ 0x1801589E4 (--1CursorProcessor@@UEAA@XZ.c)
 */

CursorProcessor *__fastcall CursorProcessor::`scalar deleting destructor'(CursorProcessor *this, char a2)
{
  CursorProcessor::~CursorProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
