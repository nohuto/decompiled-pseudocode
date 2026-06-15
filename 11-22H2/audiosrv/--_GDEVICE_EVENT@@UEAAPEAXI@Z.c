/*
 * XREFs of ??_GDEVICE_EVENT@@UEAAPEAXI@Z @ 0x180008FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

DEVICE_EVENT *__fastcall DEVICE_EVENT::`scalar deleting destructor'(DEVICE_EVENT *this, char a2)
{
  void *v4; // rcx

  *(_QWORD *)this = &DEVICE_EVENT::`vftable';
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
    operator delete(v4, 0x20uLL);
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x18uLL);
  return this;
}
