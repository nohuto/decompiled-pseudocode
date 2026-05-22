/*
 * XREFs of ?SetStartupDeferral@HolographicCompositor@Internal@Composition@UI@Windows@@QEAAXPEAUIAsyncDeferral@25@@Z @ 0x180117B6C
 * Callers:
 *     _lambda_525e999c26fbeca1a1e2a68ab2096671_::operator() @ 0x180115804 (_lambda_525e999c26fbeca1a1e2a68ab2096671_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$com_weak_query_failfast@AEAPEAUIAsyncDeferral@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAUIAsyncDeferral@Internal@Windows@@@Z @ 0x180114F24 (--$com_weak_query_failfast@AEAPEAUIAsyncDeferral@Internal@Windows@@@wil@@YA-AV-$com_ptr_t@UIWeak.c)
 */

void __fastcall Windows::UI::Composition::Internal::HolographicCompositor::SetStartupDeferral(
        RTL_SRWLOCK *this,
        struct Windows::Internal::IAsyncDeferral *a2)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 *v5; // rax
  void *v6; // rdx
  PVOID Ptr; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp+10h] BYREF

  v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
  v2 = this + 23;
  AcquireSRWLockExclusive(this + 23);
  if ( HIDWORD(this[24].Ptr) )
  {
    (*(void (__fastcall **)(struct Windows::Internal::IAsyncDeferral *, _QWORD))(*(_QWORD *)a2 + 24LL))(
      a2,
      LODWORD(this[24].Ptr));
  }
  else
  {
    v5 = wil::com_weak_query_failfast<Windows::Internal::IAsyncDeferral * &>(&v8, &v9);
    v6 = (void *)*v5;
    *v5 = 0LL;
    Ptr = this[22].Ptr;
    this[22].Ptr = v6;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v8);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
