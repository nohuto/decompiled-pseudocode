/*
 * XREFs of ?GetProcessSubmixById@CProcessSubmixManager@@UEAAJPEAVCAppSubmixClient@@_JPEAPEAUIProcessSubmixProxy@@@Z @ 0x1800D23D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015DEC (--1-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180051B5C (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIProcessSubmixProxy@@@Z @ 0x1800D12C0 (--0-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIProcessSubmixPr.c)
 */

__int64 __fastcall CProcessSubmixManager::GetProcessSubmixById(
        CProcessSubmixManager *this,
        struct CAppSubmixClient *a2,
        __int64 a3,
        struct IProcessSubmixProxy **a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v8; // rbp
  _QWORD **v9; // r15
  _QWORD *i; // rbx
  struct IUnknown **v11; // rsi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  struct IProcessSubmixProxy *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IProcessSubmixProxy *v17; // [rsp+50h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v8 = *((_QWORD *)a2 + 1);
  v9 = *(_QWORD ***)(v8 + 32);
  for ( i = *v9; ; i = (_QWORD *)*i )
  {
    v11 = (struct IUnknown **)(i + 2);
    if ( i == v9 || ((__int64 (__fastcall *)(struct IUnknown *))(*v11)->lpVtbl[9].AddRef)(*v11) == a3 )
      break;
  }
  if ( i == *(_QWORD **)(v8 + 32) )
  {
    v12 = -2147023728;
    v13 = 587LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)v12);
    if ( v4 )
      LeaveCriticalSection(v4);
    return v12;
  }
  if ( HasTooManyReferences(*v11) )
  {
    v12 = -2147024882;
    v13 = 590LL;
    goto LABEL_7;
  }
  wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>(
    &v17,
    (__int64)*v11);
  v15 = v17;
  if ( v17 )
  {
    *a4 = v17;
    (*(void (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v15 + 8LL))(v15);
  }
  else
  {
    *a4 = 0LL;
  }
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)&v17);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
