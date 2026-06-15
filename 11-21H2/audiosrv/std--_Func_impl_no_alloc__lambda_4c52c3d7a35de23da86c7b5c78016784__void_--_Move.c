/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4c52c3d7a35de23da86c7b5c78016784__void_::_Move @ 0x180104B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_4c52c3d7a35de23da86c7b5c78016784__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a2 = off_18016C060;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
  return a2;
}
