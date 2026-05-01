/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_65120bed13e5c980f35354f2f8547630___ @ 0x18042CE2C
 * Callers:
 *     ?v_DismissView@XamlAllUpViewHost@@MEAAXXZ @ 0x18043FB60 (-v_DismissView@XamlAllUpViewHost@@MEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x180433370 (-DestroyInternal@MonitorFrame@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_65120bed13e5c980f35354f2f8547630___(
        __int64 a1,
        MonitorFrame **a2,
        MonitorFrame **a3)
{
  MonitorFrame **v4; // rsi
  MonitorFrame *v6; // rdi
  MonitorFrame *v7; // rcx
  MonitorFrame *v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+48h] [rbp+10h] BYREF
  MonitorFrame **v11; // [rsp+50h] [rbp+18h]

  v4 = a2;
  if ( a2 != a3 )
  {
    v11 = &v9;
    do
    {
      v9 = *v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
      v6 = v9;
      wil::AcquireSRWLockExclusive(&v10, (RTL_SRWLOCK *)v9 + 28);
      MonitorFrame::DestroyInternal(v6);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v10);
      v7 = v9;
      if ( v9 )
      {
        v9 = 0LL;
        (*(void (__fastcall **)(MonitorFrame *))(*(_QWORD *)v7 + 16LL))(v7);
      }
      ++v4;
    }
    while ( v4 != a3 );
  }
  return a1;
}
