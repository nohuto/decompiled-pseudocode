/*
 * XREFs of ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x1400251F0
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140002404 (--1CSubmixImpl@@QEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002BBC (-reset@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSubmixImpl::DisconnectFromRightSubmix(CSubmixImpl *this, struct ISubmix *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // edx
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v9 = 0LL;
  (**(void (__fastcall ***)(struct ISubmix *, GUID *, __int64 *))a2)(
    a2,
    &GUID_764792a0_18e2_400b_9cb9_2dc44605fce0,
    &v9);
  if ( v9 )
  {
    (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 152LL))(this);
    (*(void (__fastcall **)(__int64, CSubmixImpl *))(*(_QWORD *)v9 + 88LL))(v9, this);
  }
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::reset((__int64 *)this + 38);
  PublishDeviceGraphWnfState(v6, v5, v7, v8);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v9);
  if ( v4 )
    LeaveCriticalSection(v4);
}
