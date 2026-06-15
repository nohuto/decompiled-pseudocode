/*
 * XREFs of ??_EWORKER_THREAD_EVENT@@UEAAPEAXI@Z @ 0x18003C220
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 */

WORKER_THREAD_EVENT *__fastcall WORKER_THREAD_EVENT::`vector deleting destructor'(WORKER_THREAD_EVENT *this, char a2)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
