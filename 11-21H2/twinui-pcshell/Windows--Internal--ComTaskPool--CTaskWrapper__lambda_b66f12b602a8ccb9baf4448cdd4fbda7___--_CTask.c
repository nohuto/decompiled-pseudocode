/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___::_CTaskWrapper__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___ @ 0x180191D80
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___::_scalar_deleting_destructor_ @ 0x180192420 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_82ad92f4bbaa298f2056d3bffcd54c39___::_scalar_deleting_destructor_ @ 0x180192460 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_82ad92f4bbaa298f2056d3bffcd54c39___--_scala.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004E05C (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___::_CTaskWrapper__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___(
        __int64 a1)
{
  __int64 result; // rax

  result = wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
