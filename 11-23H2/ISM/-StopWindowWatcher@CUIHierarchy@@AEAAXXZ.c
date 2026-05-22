/*
 * XREFs of ?StopWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x18009D868
 * Callers:
 *     ??1CUIHierarchy@@AEAA@XZ @ 0x180055434 (--1CUIHierarchy@@AEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B4FC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18009D82C (-Stop@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatche.c)
 */

void __fastcall CUIHierarchy::StopWindowWatcher(CUIHierarchy *this)
{
  __int64 *v1; // rdi
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 72);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 72LL))(
    *((_QWORD *)this + 9),
    *((_QWORD *)this + 7));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v1 + 88LL))(*v1, *((_QWORD *)this + 5));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v1 + 104LL))(*v1, *((_QWORD *)this + 6));
  winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Stop(v1);
  if ( v1 != (__int64 *)&v3 )
  {
    if ( *v1 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v1);
    *v1 = 0LL;
  }
}
