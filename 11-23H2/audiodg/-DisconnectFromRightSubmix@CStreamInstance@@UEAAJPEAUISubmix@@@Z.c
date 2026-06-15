/*
 * XREFs of ?DisconnectFromRightSubmix@CStreamInstance@@UEAAJPEAUISubmix@@@Z @ 0x140025380
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::DisconnectFromRightSubmix(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 (__fastcall ***a2)(struct ISubmix *, GUID *, __int64 *))
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 (__fastcall **v5)(struct ISubmix *, GUID *, __int64 *); // rax
  int v6; // ebx
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v4 = this + 5;
  EnterCriticalSection(this + 5);
  v5 = *a2;
  v15 = 0LL;
  v6 = (*v5)((struct ISubmix *)a2, &GUID_764792a0_18e2_400b_9cb9_2dc44605fce0, &v15);
  if ( v6 < 0 )
  {
    v12 = 522LL;
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(ULONG_PTR *))(this[-1].SpinCount + 72))(&this[-1].SpinCount)
      || (v6 = (*(__int64 (__fastcall **)(ULONG_PTR *, __int64))(this[-1].SpinCount + 64))(&this[-1].SpinCount, v15),
          v6 >= 0) )
    {
      PublishDeviceGraphWnfState(v8, v7, v9, v10);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v15);
      if ( v4 )
        LeaveCriticalSection(v4);
      return 0LL;
    }
    v12 = 527LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
    (const char *)(unsigned int)v6,
    v13);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v15);
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v6;
}
