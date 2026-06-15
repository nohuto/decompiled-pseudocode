/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_::_Move @ 0x18001DA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = &off_180048008;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  a2[1] = v2;
  return a2;
}
