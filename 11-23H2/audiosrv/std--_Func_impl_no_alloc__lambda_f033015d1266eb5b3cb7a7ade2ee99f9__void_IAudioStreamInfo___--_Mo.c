/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f033015d1266eb5b3cb7a7ade2ee99f9__void_IAudioStreamInfo___::_Move @ 0x180070600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_f033015d1266eb5b3cb7a7ade2ee99f9__void_IAudioStreamInfo___::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_180170010;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
