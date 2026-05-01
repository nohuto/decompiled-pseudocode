/*
 * XREFs of ?IsEqual@TaskViewFrame@@UEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1800438E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall TaskViewFrame::IsEqual(TaskViewFrame *this, struct IImmersiveMonitor *a2)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  return (*(int (__fastcall **)(_QWORD, struct IImmersiveMonitor *, int *))(**((_QWORD **)this + 2) + 96LL))(
           *((_QWORD *)this + 2),
           a2,
           &v3) >= 0
      && v3 != 0;
}
