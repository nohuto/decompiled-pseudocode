/*
 * XREFs of ?OnApplicationViewChanged@AppViewDataSourceAdapterBase@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18004F9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18004FD40 (-FindItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewDataSourceAdapterBase::OnApplicationViewChanged(__int64 a1, __int64 a2, unsigned int a3)
{
  void (__fastcall *v6)(__int64, __int64, __int64); // rax
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(v8, a1 + 168);
  AppViewDataSourceAdapterBase::FindItemForView(a1, &v9, a2);
  if ( !a3 )
    goto LABEL_15;
  if ( a3 != 1 )
  {
    switch ( a3 )
    {
      case 3u:
        v6 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 72LL);
        goto LABEL_12;
      case 5u:
        v6 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 56LL);
        goto LABEL_12;
      case 7u:
      case 9u:
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a3, a2, v9);
        goto LABEL_13;
    }
    if ( a3 != 10 )
    {
      if ( a3 != 11 )
      {
        if ( a3 != 12 )
          goto LABEL_13;
        v6 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 64LL);
        goto LABEL_12;
      }
      goto LABEL_11;
    }
LABEL_15:
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a2, v9);
    goto LABEL_13;
  }
LABEL_11:
  v6 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 48LL);
LABEL_12:
  v6(a1, a2, v9);
LABEL_13:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v9);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v8);
  return 0LL;
}
