/*
 * XREFs of ??$?0$$A6AJPEAJPEAPEAUIUnknown@@@Z@CThreadRefHost@@QEAA@A6AJPEAJPEAPEAUIUnknown@@@Z@Z @ 0x18017E560
 * Callers:
 *     ??$make_unique_nothrow@VCThreadRefHost@@A6AJPEAJPEAPEAUIUnknown@@@Z@wil@@YA?AV?$unique_ptr@VCThreadRefHost@@U?$default_delete@VCThreadRefHost@@@wistd@@@wistd@@A6AJPEAJPEAPEAUIUnknown@@@Z@Z @ 0x18017E508 (--$make_unique_nothrow@VCThreadRefHost@@A6AJPEAJPEAPEAUIUnknown@@@Z@wil@@YA-AV-$unique_ptr@VCThr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
