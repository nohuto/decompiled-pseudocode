/*
 * XREFs of std::_Func_impl_no_alloc__lambda_6321452ba99047166e38ca49c1170bb5__void_::_Move @ 0x1800DDCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_6321452ba99047166e38ca49c1170bb5__void_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = off_180170070;
  a2[1] = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  a2[2] = v2;
  return a2;
}
