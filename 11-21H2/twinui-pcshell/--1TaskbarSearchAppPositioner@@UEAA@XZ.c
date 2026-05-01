/*
 * XREFs of ??1TaskbarSearchAppPositioner@@UEAA@XZ @ 0x1803A059C
 * Callers:
 *     ??_ETaskbarSearchAppPositioner@@UEAAPEAXI@Z @ 0x1803A05F0 (--_ETaskbarSearchAppPositioner@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall TaskbarSearchAppPositioner::~TaskbarSearchAppPositioner(TaskbarSearchAppPositioner *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v2 )
    (**v2)(v2, 1LL);
  *(_QWORD *)this = &ISearchAppPositioner::`vftable';
}
