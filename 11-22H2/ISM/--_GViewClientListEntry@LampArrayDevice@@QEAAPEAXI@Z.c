/*
 * XREFs of ??_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z @ 0x1800FA690
 * Callers:
 *     ??1LampArrayDevice@@UEAA@XZ @ 0x1800FA47C (--1LampArrayDevice@@UEAA@XZ.c)
 *     ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x1800FA6DC (-AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z.c)
 *     ?RemoveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z @ 0x1800FB850 (-RemoveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

LampArrayDevice::ViewClientListEntry *__fastcall LampArrayDevice::ViewClientListEntry::`scalar deleting destructor'(
        LampArrayDevice::ViewClientListEntry *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  operator delete(this);
  return this;
}
