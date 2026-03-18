/*
 * XREFs of ??1CVP_SYSTEM_THREAD@@MEAA@XZ @ 0x1C030D554
 * Callers:
 *     ??1CTDR_GDI_RESET_THREAD@@MEAA@XZ @ 0x1C030D520 (--1CTDR_GDI_RESET_THREAD@@MEAA@XZ.c)
 *     ??_GCTDR_SUBMIT_REPORT_THREAD@@UEAAPEAXI@Z @ 0x1C030D610 (--_GCTDR_SUBMIT_REPORT_THREAD@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVP_SYSTEM_THREAD::~CVP_SYSTEM_THREAD(CVP_SYSTEM_THREAD *this)
{
  void *v1; // rcx

  *(_QWORD *)this = &CVP_SYSTEM_THREAD::`vftable';
  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    ZwClose(v1);
}
