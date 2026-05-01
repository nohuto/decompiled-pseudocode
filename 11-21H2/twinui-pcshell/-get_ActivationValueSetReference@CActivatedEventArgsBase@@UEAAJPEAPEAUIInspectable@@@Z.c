/*
 * XREFs of ?get_ActivationValueSetReference@CActivatedEventArgsBase@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1805E6550
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActivatedEventArgsBase::get_ActivationValueSetReference(
        CActivatedEventArgsBase *this,
        struct IInspectable **a2)
{
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = (RTL_SRWLOCK *)((char *)this + 120);
  AcquireSRWLockShared((PSRWLOCK)this + 15);
  v6 = v4;
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 7);
  *a2 = (struct IInspectable *)*((_QWORD *)this + 7);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v6);
  return 0LL;
}
