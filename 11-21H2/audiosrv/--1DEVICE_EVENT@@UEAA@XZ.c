/*
 * XREFs of ??1DEVICE_EVENT@@UEAA@XZ @ 0x180150B08
 * Callers:
 *     ??_GDEVICE_EVENT@@UEAAPEAXI@Z @ 0x180150B50 (--_GDEVICE_EVENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall DEVICE_EVENT::~DEVICE_EVENT(DEVICE_EVENT *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &DEVICE_EVENT::`vftable';
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    operator delete(v2);
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
