/*
 * XREFs of ?DisconnectFromStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z @ 0x140002660
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002BBC (-reset@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProcessSubmix::DisconnectFromStreamGroup(CProcessSubmix *this, struct IStreamGroup *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v10 = 0LL;
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::reset(&v10);
  v5 = (**(__int64 (__fastcall ***)(struct IStreamGroup *, GUID *, __int64 *))a2)(
         a2,
         &GUID_09874cb6_a367_4918_b747_2b660bde30d1,
         &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
      (const char *)(unsigned int)v5,
      v8);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v10);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v6;
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 2) + 112LL))((char *)this + 16, v10);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v10);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
}
