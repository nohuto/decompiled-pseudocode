/*
 * XREFs of std::_Func_impl_no_alloc__lambda_269e715c3a16826785faf617fd4a94c4__void_InputContext___::_Move @ 0x180022CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_269e715c3a16826785faf617fd4a94c4__void_InputContext___::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_1801E45F0;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
