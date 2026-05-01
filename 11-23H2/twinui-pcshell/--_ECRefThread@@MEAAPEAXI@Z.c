/*
 * XREFs of ??_ECRefThread@@MEAAPEAXI@Z @ 0x18048A310
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRefThread@@MEAA@XZ @ 0x1801AD7B0 (--1CRefThread@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CRefThread *__fastcall CRefThread::`vector deleting destructor'(CRefThread *this, char a2)
{
  CRefThread::~CRefThread(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
