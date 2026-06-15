/*
 * XREFs of std::_Func_impl_no_alloc__lambda_677f1f97be281aa35bb205656a45fbf6__void_::_Move @ 0x18010E760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_677f1f97be281aa35bb205656a45fbf6__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  *(_QWORD *)a2 = off_180170770;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a2 + 8) = v2;
  result = a2;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
  return result;
}
