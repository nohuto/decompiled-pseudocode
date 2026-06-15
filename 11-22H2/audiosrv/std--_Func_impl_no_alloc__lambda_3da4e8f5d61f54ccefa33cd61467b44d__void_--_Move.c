/*
 * XREFs of std::_Func_impl_no_alloc__lambda_3da4e8f5d61f54ccefa33cd61467b44d__void_::_Move @ 0x18010AFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_3da4e8f5d61f54ccefa33cd61467b44d__void_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)(a1 + 8);
  *a2 = off_180170668;
  a2[1] = 0LL;
  if ( a2 + 1 != v2 )
  {
    a2[1] = *v2;
    *v2 = 0LL;
  }
  return a2;
}
