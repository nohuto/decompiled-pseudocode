/*
 * XREFs of ?ConnectToStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z @ 0x140002730
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002BBC (-reset@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProcessSubmix::ConnectToStreamGroup(CProcessSubmix *this, struct IStreamGroup *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v5; // ebx
  __int64 v7; // rdx
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
  if ( v5 < 0 )
  {
    v7 = 87LL;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD))(*((_QWORD *)this + 2) + 272LL))(
           (char *)this + 16,
           v10,
           0LL);
    if ( v5 >= 0 )
    {
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v10);
      if ( v2 )
        LeaveCriticalSection(v2);
      return 0LL;
    }
    v7 = 89LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
    (const char *)(unsigned int)v5,
    v8);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v10);
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v5;
}
