/*
 * XREFs of wistd::__function::__func__lambda_a0755dde8b594d59faba0fbbcacd729d__void___cdecl(unsigned_long_const_&)_::_scalar_deleting_destructor_ @ 0x1805B2D20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall wistd::__function::__func__lambda_a0755dde8b594d59faba0fbbcacd729d__void___cdecl_unsigned_long_const____::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(a1 + 2);
  *a1 = (__int64)&wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
