/*
 * XREFs of ??_GCursorProcessor@@UEAAPEAXI@Z @ 0x180138AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1CursorProcessor@@UEAA@XZ @ 0x180138A54 (--1CursorProcessor@@UEAA@XZ.c)
 */

CursorProcessor *__fastcall CursorProcessor::`scalar deleting destructor'(CursorProcessor *this, char a2)
{
  CursorProcessor::~CursorProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
