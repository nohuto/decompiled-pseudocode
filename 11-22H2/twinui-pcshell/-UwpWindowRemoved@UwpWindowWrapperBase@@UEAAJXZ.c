/*
 * XREFs of ?UwpWindowRemoved@UwpWindowWrapperBase@@UEAAJXZ @ 0x1804F2270
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18019204C (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::UwpWindowRemoved(UwpWindowWrapperBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 224LL))(*((_QWORD *)this + 33));
  v2 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset((__int64 *)this + 14);
  v3 = *((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
