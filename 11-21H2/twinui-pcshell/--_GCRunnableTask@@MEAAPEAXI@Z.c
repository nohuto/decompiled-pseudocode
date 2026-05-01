/*
 * XREFs of ??_GCRunnableTask@@MEAAPEAXI@Z @ 0x1805D8720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CRunnableTask@@MEAA@XZ @ 0x1805D8418 (--1CRunnableTask@@MEAA@XZ.c)
 */

CRunnableTask *__fastcall CRunnableTask::`scalar deleting destructor'(CRunnableTask *this, char a2)
{
  CRunnableTask::~CRunnableTask(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
