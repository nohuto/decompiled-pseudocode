/*
 * XREFs of ?OnApplicationViewChanged@AppViewDataSourceAdapterBase@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180081F90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1800827A4 (-FindItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewDataSourceAdapterBase::OnApplicationViewChanged(RTL_SRWLOCK *a1, __int64 a2, unsigned int a3)
{
  RTL_SRWLOCK *v6; // rsi
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  v6 = a1 + 14;
  AcquireSRWLockExclusive(a1 + 14);
  AppViewDataSourceAdapterBase::FindItemForView(a1, &v8, a2);
  switch ( a3 )
  {
    case 0u:
      goto LABEL_11;
    case 1u:
LABEL_18:
      (*((void (__fastcall **)(RTL_SRWLOCK *, __int64, __int64))a1->Ptr + 6))(a1, a2, v8);
      break;
    case 3u:
      (*((void (__fastcall **)(RTL_SRWLOCK *, __int64, __int64))a1->Ptr + 9))(a1, a2, v8);
      break;
    case 5u:
      (*((void (__fastcall **)(RTL_SRWLOCK *, __int64, __int64))a1->Ptr + 7))(a1, a2, v8);
      break;
    case 7u:
    case 9u:
      (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD, __int64, __int64))a1->Ptr + 4))(a1, a3, a2, v8);
      break;
    case 0xAu:
LABEL_11:
      (*((void (__fastcall **)(RTL_SRWLOCK *, __int64, __int64))a1->Ptr + 5))(a1, a2, v8);
      break;
    case 0xBu:
      goto LABEL_18;
    case 0xCu:
      (*((void (__fastcall **)(RTL_SRWLOCK *, __int64, __int64))a1->Ptr + 8))(a1, a2, v8);
      break;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return 0LL;
}
