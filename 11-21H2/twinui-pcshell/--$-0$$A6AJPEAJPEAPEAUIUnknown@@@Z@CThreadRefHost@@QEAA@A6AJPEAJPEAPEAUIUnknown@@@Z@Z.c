/*
 * XREFs of ??$?0$$A6AJPEAJPEAPEAUIUnknown@@@Z@CThreadRefHost@@QEAA@A6AJPEAJPEAPEAUIUnknown@@@Z@Z @ 0x1800E0FD0
 * Callers:
 *     ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x1800E0F20 (-OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

CThreadRefHost *__fastcall CThreadRefHost::CThreadRefHost(CThreadRefHost *this, int (*a2)(int *, struct IUnknown **))
{
  IUnknown **v3; // rbx
  _DWORD *v4; // rcx

  *(_QWORD *)this = &CThreadRefHost::`vftable';
  v3 = (IUnknown **)((char *)this + 16);
  *((_QWORD *)this + 2) = 0LL;
  v4 = (_DWORD *)((char *)this + 8);
  *v4 = 0;
  ((void (__fastcall *)(_DWORD *, IUnknown **))a2)(v4, v3);
  SHSetThreadRef(*v3);
  return this;
}
