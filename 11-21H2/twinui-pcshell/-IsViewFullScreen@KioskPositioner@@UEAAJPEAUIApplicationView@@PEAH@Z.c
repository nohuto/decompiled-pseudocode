/*
 * XREFs of ?IsViewFullScreen@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1804F0FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?FindView@ApplicationViewCollection@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1804F01FC (-FindView@ApplicationViewCollection@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_t.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::IsViewFullScreen(RTL_SRWLOCK *this, struct IUnknown *a2, int *a3)
{
  struct IUnknown ***v5; // rdi
  RTL_SRWLOCK *v6; // rbx
  struct IUnknown ***View; // rax
  struct IUnknown **v8; // rdi
  struct IUnknown **v9; // rbx
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+40h] [rbp+8h] BYREF
  struct IUnknown **v14; // [rsp+58h] [rbp+20h] BYREF

  v5 = (struct IUnknown ***)&this[63];
  v6 = this + 66;
  AcquireSRWLockShared(this + 66);
  v13 = v6;
  try
  {
    View = ApplicationViewCollection::FindView(v5, &v14, a2);
    v8 = v5[1];
    v9 = *View;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v13);
    *a3 = v9 != v8;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x367,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v10);
  }
  return result;
}
