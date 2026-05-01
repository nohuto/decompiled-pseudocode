/*
 * XREFs of ??_GCScrollViewer@@UEAAPEAXI@Z @ 0x1802E5B00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CScrollViewer@@UEAA@XZ @ 0x18058C40C (--1CScrollViewer@@UEAA@XZ.c)
 */

CScrollViewer *__fastcall CScrollViewer::`scalar deleting destructor'(CScrollViewer *this, char a2)
{
  CScrollViewer::~CScrollViewer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
