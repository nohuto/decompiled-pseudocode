/*
 * XREFs of ??1CD3DResourceLeakChecker@@IEAA@XZ @ 0x180104E88
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x18010488C (--1CD3DDevice@@MEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CD3DResourceLeakChecker::~CD3DResourceLeakChecker(CD3DResourceLeakChecker *this)
{
  __int64 v1; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1) )
    {
      DebugBreak();
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
  }
}
