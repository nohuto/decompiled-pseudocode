/*
 * XREFs of __lambda_9d3043a0a526c8b68512f884d1ed5c9d_::operator()_::_1_::dtor$11 @ 0x180194646
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004E05C (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 */

__int64 __fastcall _lambda_9d3043a0a526c8b68512f884d1ed5c9d_::operator()_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 152) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 152) &= ~1u;
    return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(a2 + 160));
  }
  return result;
}
