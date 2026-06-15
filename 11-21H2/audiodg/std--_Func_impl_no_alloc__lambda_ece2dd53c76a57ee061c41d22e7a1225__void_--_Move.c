/*
 * XREFs of std::_Func_impl_no_alloc__lambda_ece2dd53c76a57ee061c41d22e7a1225__void_::_Move @ 0x140068820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_ece2dd53c76a57ee061c41d22e7a1225__void_::_Move(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *result; // rax

  *a2 = off_14009A788;
  v2 = a1[1];
  a1[1] = 0LL;
  a2[1] = v2;
  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[2] = a1[2];
  a2[3] = a1[3];
  result = a2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  return result;
}
