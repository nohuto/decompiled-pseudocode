/*
 * XREFs of ?SetSite@immersive_shell_component@winrt@@EEAAJPEAUIUnknown@@@Z @ 0x180170E70
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800731C4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AC91C (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::immersive_shell_component::SetSite(
        winrt::immersive_shell_component *this,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v4; // rdi
  int AgileReference; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = (RTL_SRWLOCK *)((char *)this + 80);
  AcquireSRWLockExclusive((PSRWLOCK)this + 10);
  if ( a2 )
  {
    v11 = 0LL;
    AgileReference = RoGetAgileReference(0LL, &GUID_00000000_0000_0000_c000_000000000046, a2, &v11);
    if ( AgileReference < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6B6,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
        (const char *)(unsigned int)AgileReference,
        v9);
    v6 = v11;
    v11 = 0LL;
    v7 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&v11);
  }
  else
  {
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 9);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
