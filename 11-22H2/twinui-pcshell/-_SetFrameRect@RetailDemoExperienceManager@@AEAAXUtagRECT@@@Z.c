/*
 * XREFs of ?_SetFrameRect@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x1804592B8
 * Callers:
 *     ?_Dock@RetailDemoExperienceManager@@AEAAXXZ @ 0x180458A7C (-_Dock@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_Float@RetailDemoExperienceManager@@AEAAXXZ @ 0x180458CA4 (-_Float@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall RetailDemoExperienceManager::_SetFrameRect(RetailDemoExperienceManager *this, struct tagRECT *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = 0LL;
  v4 = (__int64 *)*((_QWORD *)this + 25);
  v5 = *v4;
  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 32))(v4, &v8);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      v8);
  v9 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, &v9);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v7,
      v8);
  if ( v9 )
  {
    (*(void (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 25) + 64LL))(*((_QWORD *)this + 25), a2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 96LL))(*((_QWORD *)this + 25));
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
}
