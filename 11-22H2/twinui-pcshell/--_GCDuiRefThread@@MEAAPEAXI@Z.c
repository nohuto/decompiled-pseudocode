/*
 * XREFs of ??_GCDuiRefThread@@MEAAPEAXI@Z @ 0x1801AD6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDuiRefThread@@MEAA@XZ @ 0x1801AD6DC (--1CDuiRefThread@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CDuiRefThread *__fastcall CDuiRefThread::`scalar deleting destructor'(CDuiRefThread *this, char a2)
{
  CDuiRefThread::~CDuiRefThread(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}
